prog=qwirkle
#
# define arquivos
c_source=$(wildcard ./src/*.c)
h_source=$(wildcard ./src/header/*.h)

# renomeia .c em .o, numa pasta renomeada de source p/ object, com nomes de arquivos de c_source
obj=$(subst .c,.o,$(subst src,object,$(c_source)))


cc_flags=-Wall \
				 -g	\
				 -W \
				 -pedantic

debug:
	$(info $(c_source), $(h_source), $(obj))

all: $(prog)

$(prog): $(obj)
	gcc $^ -o $@

./object/%.o: ./src/%.c ./src/header/%.h
	gcc $< $(cc_flags) -o $@

./object/main.o: ./src/main.c $(h_source)
	gcc $< $(cc_flags) -o $@

clean:
	@ rm -rf $(pwd)/object/*.o $(pwd)/main
