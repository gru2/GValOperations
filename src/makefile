OPT_FLAGS = -g

CPPFLAGS = $(OPT_FLAGS) -I. -std=c++11 -I../../GVal

TARGETS = GValOperationsTest

GVAL_OPERATIONS_TEST_OBJS=GValOperationsTest.o GValOperations.o \
 ../../GVal/GVal.o ../../GVal/ProgressReporter.o \
 ../../GVal/GValUtils.o ../../GVal/Sutf.o ../../GVal/GValParser.o \
 ../../GVal/toString.o ../../GVal/MultiArrayIterator.o \
 ../../GVal/MultiArraySlice.o \
 ../../GVal/GValFormatter.o ../../GVal/FileStream.o \
 ../../GVal/BinaryStream.o ../../GVal/MemoryStream.o \
 ../../GVal/GValSerializer.o

all: $(TARGETS)

GValOperationsTest: $(GVAL_OPERATIONS_TEST_OBJS)
	g++ -o GValOperationsTest $(GVAL_OPERATIONS_TEST_OBJS)

%.o: %.cpp
	g++ -c $(CPPFLAGS) $< -o $@

clean::
	-rm -vf $(TARGETS) *.o

