#include <stdio.h>
#include <locale.h>

int main ()
{
	float altura;

	setlocale (LC_ALL, "Portuguese");

	printf(" Qual � sua altura em metros?: "); scanf ("%f", &altura);

	if (altura > 1.8)
	{
		printf (" .\n Voc� � maior que 1.8 metros!");
	}
	 else
	{
		printf (" .\n Voc� � menor que 1.8 metros.");
	}

	printf ("\n\n    __o  bici! \n  _/><_ \n (_)/(_) \n  "); //BICI!!!
	return 0;
}