SDIR = ./src/

compile:$(SDIR)ebp.cc $(SDIR)betagamma.cc
	g++ -o ebp $(SDIR)ebp.cc
	g++ -o bg $(SDIR)betagamma.cc

clean:
	rm ebp
	rm bg
