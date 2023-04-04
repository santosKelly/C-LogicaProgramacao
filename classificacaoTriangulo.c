/*fa�a um algoritmo que receba tr�s valores que representar�o os lados de um triangulo
e ser�o fornecidos pelo usu�rio. Verifique se os valores formam um triangulo e
classifique esse triangulo como: eq�il�tero � tr�s lados iguais; is�sceles � dois lados
iguais; escaleno � tr�s lados diferentes; Lembre-se de que, para formar um triangulo:
Nenhum dos lados pode ser igual a zero; Um lado n�o pode ser maior do que a soma dos
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
    printf("Os tr�s lados formam um tri�ngulo ");
    if( a==b && a==c)
         printf("Equil�tero \n");
        else
             if(a==b || a==c || b==c)
                printf("Is�sceles\n");
        else
            printf("Escaleno \n");
 }
       else
            printf("Os tr�s lados n�o formam um tri�ngulo \n");
 }
