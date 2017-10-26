#include<stdio.h>
int main()
{
	int sayi1, sayi2, sayi3, buyuk, kucuk, orta = 0;
    enbas:
	printf("birinci sayiyi girinizi ");
	scanf_s("%d", &sayi1);
	printf("ikinci sayiyi girinizi ");
	scanf_s("%d", &sayi2);
	printf("ucuncu sayiyi girinizi ");
	scanf_s("%d", &sayi3);

	if (sayi1>sayi2)
	{
		buyuk = sayi1;
		orta = sayi2;
		if (sayi3>sayi1)
		{
			buyuk = sayi3;
			orta = sayi1;
			kucuk = sayi2;
		}
		else if(sayi3<sayi2)
		{
			kucuk = sayi3;
		}
		else
		{
			orta = sayi3;
			kucuk = sayi2;
		}
	}
	else
	{
		buyuk = sayi2;
		orta = sayi1;

		if (sayi3>sayi2)
		{
			buyuk = sayi3;
			orta = sayi2;
			kucuk = sayi1;
		}
		else if (sayi3<sayi1)
		{
			kucuk = sayi3;

		}
		else
		{
			orta = sayi3;
			kucuk = sayi1;
		}
	}
	if (buyuk==orta||orta==kucuk||buyuk==kucuk)
	{
		printf("sayilardan ikisini veya hepsini esit girdiniz\n");
	}
	else
	{
		printf("buyuk %d, orta %d,kucuk %d", buyuk, orta, kucuk);

	}

	int yeniKarsilastirma=0;
	printf("yeni bir karsilastirma evet(1),hayir(2)");
	scanf_s("%d", &yeniKarsilastirma);

	if (yeniKarsilastirma==1)
	{
		goto enbas;
	}
	else
	{
		return 0;
	}	
}
