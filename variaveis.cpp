#include <iostream>

int main(){
    // Declara e inicializa variáveis
int numero = 10;
float pi = 3.14159;
char letra = 'A';
std::string nome = "Ana";
bool isTrue = true;

// Usando printf para formatar e imprimir os valores das variáveis
printf("numero: %d\n", numero);
printf("pi: %.2f\n", pi);
printf("letra: %c\n", letra);
printf("nome: %s\n", nome.c_str());
printf("isTrue: %d\n", isTrue);

// Retorna 0 para iniciar sucesso
return 0;
}
