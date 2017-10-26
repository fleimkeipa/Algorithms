#include<stdio.h>

int main()
{
	bas:
	int aralikBas, aralikSon,denemeA=1,denemeB,mukemmelSayi=0,kacMukemmelSayiVar=0;
	
	printf("alt sinirigiriniz");
	scanf_s("%d", &aralikBas);
	printf("ust siniri giriniz");
	scanf_s("%d", &aralikSon);
	for (size_t i = aralikBas; i <= aralikSon; i++)
	{
		denemeA = 1;
		denemeB = 0;
		mukemmelSayi = 0;
		for (size_t i = denemeA; i < aralikBas; i++)
		{
			denemeB = aralikBas%denemeA;
			if (denemeB==0)
			{
				//hangi bölenlerinin sýfýra eþit olduðunu gösteren komut
				//printf("%d bu bölende sifirdi\n", denemeA);

				mukemmelSayi = denemeA+mukemmelSayi;
			}
			denemeA++;
		}

		if (mukemmelSayi == aralikBas)
		{
			printf("%d bir mukemmel sayi\n", mukemmelSayi);
			kacMukemmelSayiVar++;
		}
		aralikBas++;
	}
	printf("%d tane mukemmel sayi var\n", kacMukemmelSayiVar);

	int devam = 0;
	printf("devam=(1)");
	scanf_s("%d", &devam);
	if (devam==1)
	{
		goto bas;
	}
	else
	{
		return 0;
	}
}