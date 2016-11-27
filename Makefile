CXX = g++
CXXFLAGS = -std=c++14 -Werror=vla -MMD -g -D_GLIBCXX_USE_CXX11_ABI=0
EXEC = graph
OBJECTS = main.o
DEPENDS = ${OBJECTS:.o=.d}

${EXEC}: ${OBJECTS} 
	${CXX} ${CXXFLAGS} ${OBJECTS} -o ${EXEC}

-include ${DEPENDS}

.PHONY: clean
clean:
	rm ${OBJECTS} ${DEPENDS} ${EXEC}
