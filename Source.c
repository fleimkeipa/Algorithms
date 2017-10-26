#include<stdio.h>
#include<limits.h>
#include<float.h>
int main()
{
	printf("char bellekte %d byte kadar yer tutar\n", sizeof(char));
	printf("double bellekte %d byte kadar yer tutar\n", sizeof(double));
	printf("int bellekte %d byte kadar yer tutar\n", sizeof(int));
	printf("float bellekte %d byte kadar yer tutar\n", sizeof(float));
	printf("------------------------------------------------\n");
	printf("int min ve max deger	%d		%d\n", INT_MIN,INT_MAX);
	printf("char min deger		%d			%d\n", CHAR_MIN, CHAR_MAX);
	printf("double min deger	 %e		%e\n",DBL_MIN, DBL_MAX);
	printf("float min deger		 %e		%e\n", FLT_MIN, FLT_MAX);
	printf("------------------------------------------------\n");
	printf("float max ondalik basamagi:%d\n", FLT_DIG);
	printf("double max ondalik basamagi :%d\n", DBL_DIG);
	printf("long double max ondalik basamagi : %d\n", LDBL_DIG);

	getch();
	return 0;
}