#include <iostream>

int main(){
   char nome[20];
   int idade;
   printf("Qual seu nome: ");
   scanf("%s", nome );
   printf("Digite sua idade: ");
   scanf("%d", &idade);
   printf("ola mundo, %s! Voce tem %d anos %d\n, %s nome");

}

  



int main(){
   int num1, num2;
   printf("Digite o primeiro número: ");
   scanf("%d", &num1);
   printf("Digite o segundo número: ");
   scanf("%d", &num2);
   int soma = num1 + num2;
   printf("A soma dos números é: %d\n", soma);
   return false;
}

int main(){
   int numero;

   printf("Digite um número: ");
   scanf("%d", &numero);

   int dobro = numero * 2;
   printf("O dobro do número digitado é: %d\n", dobro);
   return false;
}