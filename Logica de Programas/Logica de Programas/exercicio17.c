#include <stdio.h>

float media_aluno (float nota1, float nota2);

int main()
{
  
  float nota1;
  float nota2;
  float media;
  float presencas;

  printf("Notas e Presencas: ");
  scanf("%f %f %f", &nota1, &nota2, &presencas);
  media = media_aluno(nota1, nota2);
 

  if (media >= 7.5 && presencas >=160)
  {
    printf("Aluno Aprovado");
  }
  
  else if(media >= 5 && presencas >=150)
  {
    printf("Aluno em Recuperacao");
  }
  
  else
  {
    printf("Aluno Reprovado");
  } 
  
  return 0;
}
 
float media_aluno (float nota1, float nota2)
{
  float media;
  media = (nota1+nota2)/2;
  return media;
}
