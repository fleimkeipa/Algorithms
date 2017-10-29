#include<stdio.h>
int main()
{
	//-----------------------------------------Daha kısa ve sadece bir günü hesaplayan bir program---------------------
	
	int kacSaatCalistiniz = 0,sifirOnSaateVerilecek=5,onYirmiSaateVerilecek=3,yirmiSaattenFazlayaVerilecek=2,maas=0,fark,fark2=0;
	printf("Kac saat calistiniz ");

	scanf_s("%d",&kacSaatCalistiniz);

	if (kacSaatCalistiniz>10&&kacSaatCalistiniz<=20)
	{
		fark = kacSaatCalistiniz - 10;

		maas = (kacSaatCalistiniz-fark) * sifirOnSaateVerilecek + (fark * onYirmiSaateVerilecek);
	}
	else if (kacSaatCalistiniz>20)
	{
		fark = kacSaatCalistiniz - 20;

		maas = (kacSaatCalistiniz-fark-10) * sifirOnSaateVerilecek + (10 * onYirmiSaateVerilecek) + (fark * yirmiSaattenFazlayaVerilecek);
	}
	else
	{
		maas = kacSaatCalistiniz * sifirOnSaateVerilecek;
	}
	printf("%d", maas);
	

	//----------------------1 ay içerisinde kaç gün ve kaç saat mesai yaptığını da alıp hesaplayan program-----------------
	/*
	int normalSaatBasi = 0, onSaat = 0, onIleYirmiSaat = 0, yirmidenFazla = 0;
	int normalMesai = 0,fazladanOnSaatMesai=0,fazladanYirmiSaatMesai,fazladanYirmiSaattenFazla=0;
	printf("Normal saat basina ne kadar verilecek ");
	scanf_s("%d", &normalSaatBasi);
	printf("0 ile 10 saat arasında fazladan mesai yapana saat basi verilecek ");
	scanf_s("%d", &onSaat);
	printf("10 ile 20 saat arasında fazladan mesai yapana saat basi verilecek ");
	scanf_s("%d", &onIleYirmiSaat);
	printf("20 saatten fazladan mesai yapana saat basi verilecek ");
	scanf_s("%d", &yirmidenFazla);
	printf("1 ayda kac gun normal mesai yaptin ");
	scanf_s("%d", &normalMesai);
	printf("Bu bir ay icerisinde kac gun 0 ile 10 saat arasinda fazladan mesai yaptin ");
	scanf_s("%d", &fazladanOnSaatMesai);
	printf("Bu bir ay icerisinde kac gun 10 ile 20 saat arasinda fazladan mesai yaptin ");
	scanf_s("%d", &fazladanYirmiSaatMesai);
	printf("Bu bir ay icerisinde kag gun 20 saatten fazla mesai yaptin ");
	scanf_s("%d", &fazladanYirmiSaattenFazla);
	int a = normalSaatBasi*normalMesai;
	int b = onSaat*fazladanOnSaatMesai + onIleYirmiSaat*fazladanYirmiSaatMesai + yirmidenFazla*fazladanYirmiSaattenFazla;
	int c = a + b;
	printf("Normal mesailerinden kazandigin = %d, \nFazladan mesailerle kazandigin= %d \nToplam= %d", a,b,c);
	*/
	//-----------------------------------------------------------------------------------------------------
	/*switch case yöntemi zahmet isteyen ve tüm değerleri girmenizi gerektiren
	bir yöntem olduğu için ben sadece öğrenme amaçlı yaptım*/
	/*
	int kacSaatCalistiniz;
	printf("kac saat calistiniz");
	scanf_s("%d", &kacSaatCalistiniz);
	switch (kacSaatCalistiniz)
	{

	case 10:
	{
		printf("maasiniz= %d\n", kacSaatCalistiniz * 5);
		printf("case altina birden fazla degeri nasil girebilecegimi ogrenmek icin actim bu blogu");
		break;
	}
	case 11: printf("maasiniz= %d", 50 + (kacSaatCalistiniz - 10) * 3); break;
	case 21: printf("maasiniz= %d", 50 + 30 + (kacSaatCalistiniz - 20) * 2); break;

	default:
		break;
	}
	*/

	getch();
	return 0;

}
