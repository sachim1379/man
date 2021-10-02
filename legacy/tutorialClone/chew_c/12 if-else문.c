//if-else문
#include <stdio.h>
int main()
{
	int num;
	printf("행운의 숫자는? 아무숫자나 입력하세요:");
	scanf_s("%d", &num);

	if (num == 7) {
		printf("행운의 숫자 7입니다.\n");
	}

	else {
		printf("그냥 보통 숫자인 %d를 입력했군요.\n",num);
	}
	return 0;
}