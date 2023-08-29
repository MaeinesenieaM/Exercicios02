#include <stdio.h>
#include <locale.h>

int main ()
{
//Leia a media do aluno e diga se esta, aprovado, reprovado ou em recuperação.
	float nota;

	setlocale (LC_ALL, "Portuguese");

	printf ("#####Aprovador e Reprovador##### \n\n");
	printf (" Digite o total de pontos obtidos: "); scanf("%f", &nota);

	if (nota >= 7.0)
	{
		printf ("\n \\\\Você foi aprovado!//\n");
	}
	 else if (nota < 4.0)
	{
		printf ("\n //Sinto lhe disser que você foi reprovado.\\\\\n");
	}
	 else
	{
		printf ("\n No momento você esta em recuperação.\n");
	}

	printf ("\n\n    __o  bici! \n  _/><_ \n (_)/(_) \n  "); //BICI!!!
	return 0;
}