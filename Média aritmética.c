#include <stdio.h>

int main(void) {

  double soma,x,y,z,media;
  soma = 0;
  media=0;

  printf("\t Digite a [x] nota :");
  scanf("%f",&x);

  printf("\t Digite a [y] nota :");
  scanf("%f",&y);

  printf("\t Digite a [z] nota :");
  scanf("%f",&z);

  printf ("A média é :%.2f",(x+y+z)/3);
    media = ((x+y+z)/3);

  if (media>= 7.0){

    printf("Aluno aprovado");

  }else {
    printf("Aluno reprovado");

  }


}
