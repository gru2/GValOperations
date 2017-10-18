OPT_FLAGS = -g

CPPFLAGS = $(OPT_FLAGS) -I. -std=c++11 -I../ext/GVal

TARGETS = GValTest 

GVAL_TEST_OBJS=GValOperationsTest.o GValOperations.o \
 ../ext/GVal/GVal.o ../ext/GVal/ProgressReporter.o \
 ../ext/GVal/GValUtils.o ../ext/GVal/Sutf.o ../ext/GVal/GValParser.o \
 ../ext/GVal/toString.o ../ext/GVal/MultiArrayIterator.o \
 ../ext/GVal/MultiArraySlice.o \
 ../ext/GVal/GValFormatter.o ../ext/GVal/FileStream.o \
 ../ext/GVal/BinaryStream.o ../ext/GVal/MemoryStream.o \
 ../ext/GVal/GValSerializer.o

all: $(TARGETS)

GValTest: $(GVAL_TEST_OBJS)
	g++ -o GValTest $(GVAL_TEST_OBJS)

%.o: %.cpp
	g++ -c $(CPPFLAGS) $< -o $@

clean::
	-rm -vf $(TARGETS) *.o

