//나눗셈예제 분모가 0이면 안됨
#include <stdio.h>
int main() {
	double i,j;
	printf("나누고 싶은 두 정수를 입력하세요! : ");
	scanf_s("%lf %lf",&i,&j);

	if (j == 0)
	{
		printf("0으로 나눌 수 없습니다.\n");
		return 0; //프로그램 종료문은 두개 있어도된다
	}
	printf("%f를 %f로 나눈 결과는 : %f \n", i, j, i / j);
	
	return 0;
}