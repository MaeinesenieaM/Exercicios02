#include <stdio.h>
#include <locale.h>

int main ()
{
	float peso;

	setlocale (LC_ALL, "Portuguese");

	printf(" Qual � sua altura em kilos?: "); scanf ("%f", &peso);

	if (peso < 60)
	{
		printf (" .\n Voc� � mais leve que 60 kilos!");
	}
	 else
	{
		printf (" .\n Voc� pesa mais que 60 kilos.");
	}

	printf ("\n\n    __o  bici! \n  _/><_ \n (_)/(_) \n  "); //BICI!!!
	return 0;
}