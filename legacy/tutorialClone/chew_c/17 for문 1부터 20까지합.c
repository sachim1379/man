//for문으로 1부터 20까지 합 구하기 10*21 =210나와야됨

#include <stdio.h>
int main()
{
	int i = 0, sum = 0;
	for (i = 0; i <= 20; ++i) {
		sum += i;
	}
	printf("1부터 20까지의 합: %d", sum);
	return 0;
}