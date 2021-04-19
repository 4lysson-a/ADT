declare -l NAME="estatica" || NAME="estatica"
clear

gcc -c $NAME.c -o $NAME.o 
gcc main.c $NAME.o -lm -o main
echo

./main
echo
rm $NAME.o
rm main
