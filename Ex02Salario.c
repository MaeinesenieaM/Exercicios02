#include <stdio.h>
#include <locale.h>

int main ()
{
//Leia o sal�rio e imprima se ganha mais que o sal�rio m�nimo.

	setlocale (LC_ALL, "Portuguese");
	float salario;

	printf (" Insira seu sal�rio: "); scanf ("%f", &salario);

	if (salario > 1302)
	{
		printf (" .\n O seu salario � maior do que o m�nimo!");
	} 
	 else
	{
		printf (" .\n O seu salario � menor do que o m�nimo.");
	}

	printf ("\n\n    __o  bici! \n  _/><_ \n (_)/(_) \n  "); //BICI!!!
	return 0;
}