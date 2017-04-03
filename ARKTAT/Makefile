CXXFLAGS =	-O2 -g -Wall -fmessage-length=0

OBJS =		ARKTAT.o

LIBS =

TARGET =	ARKTAT

$(TARGET):	$(OBJS)
	$(CXX) -o $(TARGET) $(OBJS) $(LIBS)

all:	$(TARGET)

clean:
	rm -f $(OBJS) $(TARGET)
