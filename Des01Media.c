#include <stdio.h>
#include <locale.h>

int main ()
{
//Leia a media do aluno e diga se esta, aprovado, reprovado ou em recupera��o.
	float nota;

	setlocale (LC_ALL, "Portuguese");

	printf ("#####Aprovador e Reprovador##### \n\n");
	printf (" Digite o total de pontos obtidos: "); scanf("%f", &nota);

	if (nota >= 7.0)
	{
		printf ("\n \\\\Voc� foi aprovado!//\n");
	}
	 else if (nota < 4.0)
	{
		printf ("\n //Sinto lhe disser que voc� foi reprovado.\\\\\n");
	}
	 else
	{
		printf ("\n No momento voc� esta em recupera��o.\n");
	}

	printf ("\n\n    __o  bici! \n  _/><_ \n (_)/(_) \n  "); //BICI!!!
	return 0;
}