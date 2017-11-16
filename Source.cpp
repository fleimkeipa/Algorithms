#include<stdio.h>
int SophieGermenAsalKontrol(int sayi1,int sayi2)
{
	int asal = 0, bolen = 2,kacTane=0;
	
	for (int i = sayi1; i <=sayi2; i++)
	{
		int bolen = 2, asal = 0;

		for (int i = bolen; i < sayi1; i++)
		{
			if (sayi1%bolen == 0)
			{
				asal++;
				break;
			}			
			bolen++;
		}
		if (asal == 0)
		{
			int sophieGermen = (2 * sayi1) + 1;
			int bolen2 = 2, asal2 = 0;

			for (int i = bolen2; i < sophieGermen; i++)
			{
				if (sophieGermen%bolen2 == 0)
				{
					asal2++;
					break;
				}
				bolen2++;
			}
			if (asal2 == 0)
			{
				//printf("%d ", sophieGermen);
				kacTane++;
			}
		}
		sayi1++;
	}
	return kacTane;
}

int main()
{
	int a, b;
	printf("aralik gir");	
	scanf_s("%d %d",&a,&b);
	printf("%d", SophieGermenAsalKontrol(a,b));
	scanf_s("%d",&a);
	return 0;
}