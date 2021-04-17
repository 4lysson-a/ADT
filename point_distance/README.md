### how to run this code ??
in folder inside terminal, type
`gcc -c ponto.c ponto.o`
This command compiles the tad implementation

### And then
`gcc main.c ponto.o -lm -o main`
Now compile the main program, including implementation
`-lm` is important to include <math.h> to fix some error
  
`./main` 
To exec main.c
