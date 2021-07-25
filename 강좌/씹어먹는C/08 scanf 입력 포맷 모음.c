//scanf는 입력자료형이 정해져있다. 심지어 다다름 
#include <stdio.h>
int main() {
	char ch;
	short sh;
	int i;
	long lo;
	float fl;
	double du;


	printf("char형 변수 입력: ");
	scanf_s("%c", &ch);

	printf("short 형 변수 입력: ");
	scanf_s("%hd", &sh);

	printf("int형 변수 입력: ");
	scanf_s("%d", &i);

	printf("long형 변수 입력: ");
	scanf_s("%ld", &lo);

	printf("float형 변수 입력: ");
	scanf_s("%f", &fl);

	printf("double형 변수 입력: ");
	scanf_s("%lf", &du);

	printf("char: %c , short : %d , int : %d ",ch,sh,i);
	printf("long : %d , float : %f , double : %f \n", lo, fl, du);
	
	return 0;
}