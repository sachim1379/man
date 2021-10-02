/*char 문자 딱 한개용 변수*/
//scanf 보안때문에 쓰려면 그문구 써야함
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	double celsius =1; //double 8byte, 1111111111111111111111111111  (1byte = 8bit)
	printf("섭씨온도를 화씨온도로 바꿔주는 프로그램 입니다.\n");
	printf("섭씨온도를 입력해주세요: ");
	scanf("%lf", &celsius);
	printf("섭씨 %f 도는 화씨로 %f 도 입니다 \n", celsius, 9 * celsius / 5 + 32);
	return 0;
}

//버퍼 오버플로우 때문.