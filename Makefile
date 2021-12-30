EXECUTABLE  = CoDRando

# The following line looks for a project's main() in files named project*.cpp,
PROJECTFILE = CurseOfDarknessRandomizer.cpp

# enables c++17 
PATH := /usr/um/gcc-6.2.0/bin:$(PATH)
LD_LIBRARY_PATH := /usr/um/gcc-6.2.0/lib64
LD_RUN_PATH := /usr/um/gcc-6.2.0/lib64
LD_LIBS := -lstdc++fs

# designate which compiler to use
CXX         = g++-8


# list of sources used
SOURCES     := $(shell find . -name "*.cpp")
#SOURCES     := $(filter-out $(TESTSOURCES), $(SOURCES))
# list of objects usedmake 
OBJECTS     := $(SOURCES:./src/%.cpp=./obj/%.o)

# name of the perf data file, only used by the clean target
PERF_FILE = perf.data*

#Default Flags (I prefer -std=c++17 but Mac/Xcode/Clang doesn't support)
CXXFLAGS = -std=c++17 -Wconversion -Wall  -Wextra -pedantic


# rule for creating objects
obj/%.o: src/%.cpp
	@-mkdir -p $(@D)
	@-$(CXX) $(CXXFLAGS) -c $? -o $@

	
# make release - will compile "all" with $(CXXFLAGS) and the -O3 flag
#                also defines NDEBUG so that asserts will not check
release: CXXFLAGS += -O3 -DNDEBUG
release: $(OBJECTS)
	@-$(CXX) $(CXXFLAGS) $(OBJECTS) $(LD_LIBS) -o $(EXECUTABLE)

# make debug - will compile sources with $(CXXFLAGS) and the -g3 flag
#              also defines DEBUG, so "#ifdef DEBUG /*...*/ #endif" works
debug: CXXFLAGS += -g3 -DDEBUG
debug:
	$(CXX) $(CXXFLAGS) $(SOURCES) -o $(EXECUTABLE)_debug

# make profile - will compile "all" with $(CXXFLAGS) and the -g3 and -O3 flags
profile: CXXFLAGS += -g3 -O3
profile:
	$(CXX) $(CXXFLAGS) $(SOURCES) -o $(EXECUTABLE)_profile
	
# make gprof - will compile "all" with $(CXXFLAGS) and the -pg (for gprof)
gprof: CXXFLAGS += -pg
gprof:
	$(CXX) $(CXXFLAGS) $(SOURCES) -o $(EXECUTABLE)_profile

# make static - will perform static analysis
static:
	cppcheck --enable=all --suppress=missingIncludeSystem \
      $(SOURCES) *.h *.hpp

# Build all executables
all: release debug profile

$(EXECUTABLE): $(OBJECTS)
ifeq ($(EXECUTABLE), executable)
	$(CXX) $(CXXFLAGS) $(OBJECTS)
else
	$(CXX) $(CXXFLAGS) $(OBJECTS) -o $(EXECUTABLE)
endif




# make clean - remove .o files, executables, tarball
clean:
	@-rm -f $(OBJECTS) $(EXECUTABLE) $(EXECUTABLE)_debug $(EXECUTABLE)_profile \
      $(TESTS) $(PARTIAL_SUBMITFILE) $(FULL_SUBMITFILE) $(PERF_FILE) \
      $(UNGRADED_SUBMITFILE)
	@-rm -Rf *.dSYM



# THE COMPILER CAN GENERATE DEPENDENCIES FROM SOURCE CODE
#
# % g++ -MM *.cpp
#
# ADD YOUR OWN DEPENDENCIES HERE



# these targets do not create any files
.PHONY: all release debug profile static clean alltests identifier
# disable built-in rules
.SUFFIXES:
