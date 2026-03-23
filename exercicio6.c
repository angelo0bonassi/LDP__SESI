#include  <stdio.h>

float media_aluno (float nota1, float nota2);

void main()
{
  float nota1;
  float nota2;
  float media;

  printf("Insira suas notas: ");
  scanf("%f %f", &nota1, &nota2);
  media = media_aluno(nota1, nota2);
 

  if (media >= 7 )
  {
    printf("Aluno Aprovado");
  }
  
  else if(media >= 5)
  {
    printf("Aluno em Recuperacao");
  }
  
  else
  {
    printf("Aluno Reprovado");
  } 
}
float media_aluno (float nota1, float nota2)
{
  float media;
  media = (nota1+nota2)/2;
  return media;
}
    














