#include "head.h"

struct data{
	int dia;
	int mes;
	int ano;
};

void reverse(char s[])
 {
     int i, j;
     char c;

     for (i = 0, j = strlen(s)-1; i<j; i++, j--) {
         c = s[i];
         s[i] = s[j];
         s[j] = c;
     }
}  

void itoa(int n, char s[])
 {
     int i, sign;

     if ((sign = n) < 0)  /* record sign */
         n = -n;          /* make n positive */
     i = 0;
     do {       /* generate digits in reverse order */
         s[i++] = n % 10 + '0';   /* get next digit */
     } while ((n /= 10) > 0);     /* delete it */
     if (sign < 0)
         s[i++] = '-';
     s[i] = '\0';
     reverse(s);
}  


// void aloc_space(char* str,int x){
//     int length = snprintf( NULL, 0, "%d", x );

//     str = malloc( length + 1 );
    
//     snprintf( str, length + 1, "%d", x );

//    free(str);

// }



Data *verify_data(){
    Data *li;
    
    char data[7];

    // data[1] = li->dia;
    // data[3] = li->mes;
    // data[7] = li->ano;

    

    // snprintf( a, d+1, "%d", li->dia );

	// itoa(li->mes, m);
	// itoa(li->ano, a);

	// printf("%s", a);
	// printf("%c", m[10]);
	// printf("%c", a[30]);

}

Data* criar_data(){
    Data *li;
    li = (Data*) malloc(sizeof(struct data));
    return li;
}

Data *libera_data(Data* li){
    free(li);
}


Data *preencher_data(int d, int m, int a){
    Data *li;
    li->dia = d;
    li->mes = m;
    li->ano = a;
}

Data *print_data(){
    Data *li;
    printf("%d/", li->dia);
    printf("%d/", li->mes);
    printf("%d\n", li->ano);
}




char *int_to_string(char *dest, size_t n, int x) {
  char *p = dest;
  if (n == 0) {
    return NULL;
  }
  n--;
  if (x < 0) {
    if (n == 0) return NULL;
    n--;
    *p++ = '-';
  } else {
    x = -x;
  }
  p = int_to_string_helper(p, n, x);
  if (p == NULL) return NULL;
  *p = 0;
  return dest;
}