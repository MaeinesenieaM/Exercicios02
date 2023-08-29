#include <stdio.h>
#include <locale.h>

int main ()
{
	float altura;

	setlocale (LC_ALL, "Portuguese");

	printf(" Qual é sua altura em metros?: "); scanf ("%f", altura);

	if (altura > 1.8)
	{
		printf (" .\n Você é maior que 1.8 metros!");
	}
	 else
	{
		printf (" .\n Você é menor que 1.8 metros.");
	}

	printf ("\n\n    __o  bici! \n  _/><_ \n (_)/(_) \n  "); //BICI!!!
	return 0;
}