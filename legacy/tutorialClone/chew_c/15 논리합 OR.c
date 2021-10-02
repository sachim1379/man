//논리합 ||

#include <stdio.h>
int main()
{
	int height, weight;
	printf("돈이 얼마있나요? 입력 후 엔터:");
	scanf_s("%d", &height);

	printf("카드에는 얼마있나요? 입력 후 엔터:");
	scanf_s("%d", &weight);

	if (height > 1000 || weight>1000) {
		printf("지하철을 이용할수있습니다.");
	}
	else {
		printf("잔액이 부족합니다. 잔액이 1000원 미만입니다.");
	}


	return 0;
}