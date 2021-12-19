# IDIR = src/include/
# CC=gcc
# CFLAGS=-Wall-I$(IDIR)

# ODIR=obj
# #LDIR =lib

# #LIBS=-lm

# #_DEPS =
# #DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

# _OBJ = hellomake.o hellofunc.o 
# OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))


# $(ODIR)/%.o: %.cc #$(DEPS)
# 	$(CC) -c -o $@ $< $(CFLAGS)

# systems-modeling: $(OBJ)
# 	$(CC) -o $@ $^ $(CFLAGS) #$(LIBS)

# .PHONY: clean

# clean:
# 	rm -f $(ODIR)/*.o *~ core $(INCDIR)/*~ 

gcc -Wall src/main.cc src/components/flow.cc src/components/stock.cc -o systems-modeling