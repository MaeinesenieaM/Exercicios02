#include <stdio.h>
#include <locale.h>

int main ()
{
//Leia a idade de uma pessoa e diz se ela � de maior.

	int idade;

	setlocale (LC_ALL, "Portuguese");


	printf ("=====Apenas Maiores de 18 anos podem passar!=====\n\n\n" );
	printf (" Quantos anos voc� possui?: "); scanf ("%d", &idade);

	if (idade >= 18)
	{
		printf (" . \n Voc� � maiorde idade!");
	} 
	else
	{
		printf (" .\n Desculpe, mas voc� � menor de idade.");
	}

	printf ("\n\n    __o  bici! \n  _/><_ \n (_)/(_) \n  "); //BICI!!!
	return 0;
}