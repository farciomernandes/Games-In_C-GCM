//inser��o das bibliotecas

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>
#include <conio.h>
#include <time.h>

#define TAM 6

int main(void){
	
	int a = 0,b = 0,acertos = 0;
	char f;
	int numeros[TAM];
	int respostas[TAM];
	
//inclus�o de linguagem
setlocale(LC_ALL,"Portuguese");

//inclus�o de titulo no console;
setconsoletitle("jogo da memoria");

//gera os numeros aleat�rios
srand(time(NULL));

printf("O programa gera 6 numeros aleatorios entre 1 e 25\n");
printf("Decore os numeros exibidos, e ap�s cinco segundos \nreescreva-os na tela na mesma ordem\n");
printf("Start Game -[ENTER]");

//corresponde ao enter, com o valor de 13 pela tabela ascii
do{
	f = getch();
}while(f != 13);

for(a = 0; a < TAM ; a++){
	numeros[a] = (rand() % 25) + 1;
}
//defini��o do tempo de amostra
b = TAM;
do{
	system("cls");
	printf("Decore a sequencia de numeros abaixo em %d s:\n\n",j);
	b--;
	//comando de repeticao para mostrar os numeros criados aleatoriamente;
	
	for(a = 0;a < TAM; a++){
		printf("%d\t", numeros[a]);
	}
	//sleep-para o programa por um determinado tempo;
	sleep(1000);
}while(b > 0);



}
