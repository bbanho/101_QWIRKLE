
# define arquivos
c_source=$(wildcard /source/*.c)
h_source=$(wildcard /source/*.h)

# renomeia .c em .o, numa pasta renomeada de source p/ object, com nomes de arquivos de c_source
obj=$(subst .c,.o,$(subst source,object,$(c_source)))

cc_flags=-Wall \
				 -g	\
				 -W \
				 -c \
				 -ansi \
				 -pedantic

all: $(prog)

$(prog): $(obj)
	gcc $^ -o $@

./object/%.o: %.c %.h
	gcc $< $(cc_flags) -o $@

./object/main.o: main.c $(h_source)
	gcc $< $(cc_flags) -o $@

clean:
	@ rm -rf $(pwd)/object/*.o $(pwd)/main
