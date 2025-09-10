# Nome do projeto
MAIN := main

# Compilador e flags
CXX := g++
INCLUDES := $(addprefix -I,$(shell find . -type d))
CXXFLAGS := -Wall -Wextra -std=c++23 -pedantic-errors -g $(INCLUDES)
LDFLAGS := -lm

# Detecta todos os .cpp no diretório
SOURCES := $(wildcard *.cpp)
OBJECTS := $(SOURCES:.cpp=.o)
DEPS := $(SOURCES:.cpp=.d)

# Saída final depende do sistema operacional
ifeq ($(OS), Windows_NT)
	OUTPUT := $(MAIN).exe
	RM := del
else
	OUTPUT := $(MAIN).out
	RM := rm -f
endif

# Regra principal
all: $(OUTPUT)

# Linkagem
$(OUTPUT): $(OBJECTS)
	$(CXX) $(OBJECTS) -o $@ $(LDFLAGS)

# Compilação com geração automática de dependências .d
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -MMD -MP -c $< -o $@

# Inclui as dependências geradas (-MMD cria os .d automaticamente)
-include $(DEPS)

# Limpeza
clean:
	$(RM) $(OBJECTS) $(DEPS) $(OUTPUT)

# Executar
run: all
	./$(OUTPUT)
