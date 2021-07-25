//if-elseif-else문 행운의숫자와 죽음의 숫자
#include <stdio.h>
int main()
{
	int num;
	printf("숫자의 종류를 알려드립니다. 아무숫자나 입력하세요 : ");
	scanf_s("%d", &num);

	if (num == 7) {
		printf("행운의 숫자 7입니다.\n");
	}

	else if(num==4){
		printf("죽음의 숫자 4입니다.\n");
	}
	else {
		printf("그냥 보통 숫자인 %d를 입력했군요.\n", num);
	}
	return 0;
}