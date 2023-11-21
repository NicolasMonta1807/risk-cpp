GCC=g++
CFLAGS= -I ./include

PROGS = risk
BINDIR = ./bin

all: $(PROGS)

$(BINDIR):
	mkdir -p $(BINDIR)

risk: $(BINDIR)
	$(GCC) $(CFLAGS) -o $(BINDIR)/risk src/*.cpp
