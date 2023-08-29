#include <stdio.h>
#include <locale.h>

int main ()
{
//Leia a idade de uma pessoa e diz se ela é de maior.

	int idade;

	setlocale (LC_ALL, "Portuguese");


	printf ("=====Apenas Maiores de 18 anos podem passar!=====\n\n\n" );
	printf (" Quantos anos você possui?: "); scanf ("%d", &idade);

	if (idade >= 18)
	{
		printf (" . \n Você é maiorde idade!");
	} 
	else
	{
		printf (" .\n Desculpe, mas você é menor de idade.");
	}

	printf ("\n\n    __o  bici! \n  _/><_ \n (_)/(_) \n  "); //BICI!!!
	return 0;
}