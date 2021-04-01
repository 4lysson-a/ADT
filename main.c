#include "tad.h"

int main()
{
  float d;
  
  Ponto *p, *q;
  
  p = pto_cria(-3,11);

  q = pto_cria(2,1);

  d = pto_distancia(p, q);

  printf("\nA distância do ponto p ao q é: %.2f \n\n", d);

  pto_libera(q);
  pto_libera(p);
  
  return 0;
}