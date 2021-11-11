#include<stdio.h>

void yazdir(int a[5][5])
{
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("%c", a[i][j]);
		}
		printf("\t  %d \n",i);
	}
}

int diziyiDoldur(int dizi[5][5])
{
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (i == 0)
			{
				dizi[i][j] = 120;
			}
			else
			{
				dizi[i][j] = 176;
			}
		}
	}
	return dizi;
}

int asagiKaydir(int dizi[5][5],int a,int b)
{
	if (dizi[a][b] == 120 && a < 4 && b < 5)
	{
		dizi[a][b] = 176;
		dizi[a + 1][b] = 120;
	}
	return dizi;
}
//bütün xlerin en aþþaðýya indiðini kontrol ediyor.
int kontrol(int dizi[5][5])
{
	if (dizi[4][0] == 120 && dizi[4][1] == 120 && dizi[4][2] == 120 && dizi[4][4] == 120)
	{
		printf("tebrikler oyunu bitirdiniz helal olsun bu oyunu yazmak icin senelerimi vermistim 5 dk da bitirdiniz hll");
		return 1;
	}
	else
	{
		return 0;
	}	
}

int main()
{	
	int dizi[5][5];
	int a, b;
	diziyiDoldur(dizi);
	yazdir(dizi);	

	enbas:
	printf("Hangi satiri assagi kaydirmak istiyorsunuz? (orn:0 1, 1,1)  ");
	scanf_s("%d %d", &a, &b);
	
	asagiKaydir(dizi, a, b);
	system("cls");
	yazdir(dizi);
	if (kontrol(dizi))
	{
		getch( );
		return 0;
	}	
	goto enbas;
}
