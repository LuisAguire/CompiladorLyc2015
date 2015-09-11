TARGET=Compilador
OUTPUT_DIR=Debug
SOURCE_DIR=Sources
ALL_OBJECTS=Singleton.o
OBJECTS=Singleton.o
INCLUDE=-ISources -ISources/Componentes -I.
all: create flex bison move  
	g++ $(INCLUDE) -o $@ $(SOURCE_DIR)/Sintactico.tab.c $(SOURCE_DIR)/lex.yy.c $(SOURCE_DIR)/Componentes/Singleton.cpp -lfl -o $(OUTPUT_DIR)/$(TARGET)

Singleton.o: Sources/Componentes/Singleton.cpp
	g++ Sources/Componentes/Singleton.cpp -o Debug/Singleton.o
flex:
	flex $(SOURCE_DIR)/Lexico.l 
	
bison:
	bison -d -v $(SOURCE_DIR)/Sintactico.y 

move:
	mv lex.yy.c $(SOURCE_DIR); mv Sintactico.tab.c $(SOURCE_DIR); mv Sintactico.tab.h $(SOURCE_DIR);

create:
	mkdir -p $(OUTPUT_DIR)
	