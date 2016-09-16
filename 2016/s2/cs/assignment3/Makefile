# all the executables
Assemblers=X-assembler XT-assembler XS-assembler XST-assembler
Tokenisers=X-tokens XT-tokens XS-tokens XST-tokens
TOS:=tokens.o
MYCPPS:=${wildcard my*.cpp}
XOS:=asmtokens.o asmsymbols.o
XTOS:=asmsymbols.o
XSOS:=asmtokens.o

# C++ 11 - just in case
CXXFLAGS=--std=c++11

# must specify make target
all: ${Assemblers} ${Tokenisers}

clean:
	rm -f ${Assemblers} ${Tokenisers} *.o

%.o: %.cpp
	-(gcc ${CXXFLAGS} -c $<)

# assemblers
X-assembler: ${MYCPPS} ${XOS} libcx.a
	-(g++ ${CXXFLAGS} -o $@ ${MYCPPS} ${XOS} libcx.a)
XT-assembler: ${MYCPPS} ${XTOS} libcx.a
	-(g++ ${CXXFLAGS} -o $@ ${MYCPPS} ${XTOS} libtcx.a)
XS-assembler: ${MYCPPS} ${XSOS} libcx.a
	-(g++ ${CXXFLAGS} -o $@ ${MYCPPS} ${XSOS} libscx.a)
XST-assembler: ${MYCPPS} ${XSTOS} libcx.a
	-(g++ ${CXXFLAGS} -o $@ ${MYCPPS} ${XSTOS} libstcx.a)

# tokenisers
X-tokens: ${TOS} ${XOS} libcx.a
	-(g++ ${CXXFLAGS} -o $@ ${TOS} ${XOS} libcx.a)
XT-tokens: ${TOS} ${XTOS} libcx.a
	-(g++ ${CXXFLAGS} -o $@ ${TOS} ${XTOS} libtcx.a)
XS-tokens: ${TOS} ${XSOS} libcx.a
	-(g++ ${CXXFLAGS} -o $@ ${TOS} ${XSOS} libscx.a)
XST-tokens: ${TOS} ${XSTOS} libcx.a
	-(g++ ${CXXFLAGS} -o $@ ${TOS} ${XSTOS} libstcx.a)
