#include <stdio.h>
//산술변환 숫자가 큰 자료형으로 컴파일러가 자동으로 변경
int main() {
	int a;
	double b;
	a = 10;
	b = 3;
	printf("a/b의 값은 : %f \n", a/b);
	printf("b/a의 값은 : %f \n", b/a);
	return 0;
}