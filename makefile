TESTDIR = src/MonteCarloTest
SRCDIR = src
CC = g++
impl = $(wildcard $(SRCDIR)/*.cpp)
testimpl = $(wildcard $(TESTDIR)/*.cpp)
LNK = -lcppunit
OUTFILENAME = a.out

$(OUTFILENAME): $(impl) $(testimpl)
	$(CC) $^ $(LNK)	

clean:
	-rm $(OUTFILENAME)

test:
	./$(OUTFILENAME)

