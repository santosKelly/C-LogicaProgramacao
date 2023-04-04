/*faça um algoritmo que receba três valores que representarão os lados de um triangulo
e serão fornecidos pelo usuário. Verifique se os valores formam um triangulo e
classifique esse triangulo como: eqüilátero – três lados iguais; isósceles – dois lados
iguais; escaleno – três lados diferentes; Lembre-se de que, para formar um triangulo:
Nenhum dos lados pode ser igual a zero; Um lado não pode ser maior do que a soma dos
outros dois*/

 #include <stdio.h>
 #include <stdlib.h>
 #include <locale.h>

 int main (){

 setlocale(LC_ALL, "Portuguese");

 int a, b, c;

 printf("Informe os valores para A, B e C :\n");
 scanf("%d%d%d", &a,&b,&c);

 if (a + b > c && a + c > b && c > a){
    printf("Os três lados formam um triângulo ");
    if( a==b && a==c)
         printf("Equilàtero \n");
        else
             if(a==b || a==c || b==c)
                printf("Isósceles\n");
        else
            printf("Escaleno \n");
 }
       else
            printf("Os três lados não formam um triângulo \n");
 }
