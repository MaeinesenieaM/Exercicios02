#include <stdio.h>
#include <locale.h>

int main ()
{
//Leia o salário e imprima se ganha mais que o salário mínimo.

	setlocale (LC_ALL, "Portuguese");
	float salario;

	printf (" Insira seu salário: "); scanf ("%f", &salario);

	if (salario > 1302)
	{
		printf (" .\n O seu salario é maior do que o mínimo!");
	} 
	 else
	{
		printf (" .\n O seu salario é menor do que o mínimo.");
	}

	printf ("\n\n    __o  bici! \n  _/><_ \n (_)/(_) \n  "); //BICI!!!
	return 0;
}