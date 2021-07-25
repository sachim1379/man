//continue문 5의 배수를 제외한 숫자를 출력
//몫은 / 나머지는 %
//if문은 {}대괄호 생략하고 띄어쓰기 후 문 입력가능
#include <stdio.h>
int main() {
	int i;
	for (i = 0;i < 100;i++) {
		if (i % 5 == 0) continue;
		printf("%d ", i);
	}
	return 0;
}