//논리연산자 &&
#include <stdio.h>
int main()
{
	int a;
	printf("아무 숫자나 입력하세요 :");
	scanf_s("d",&a);

	if(a>=10 && a<20){
		printf("%d는 10이상, 20미만인 수입니다.\n",a);
	}else if(a>=20){
		printf("%d는 20이상인 수입니다.",a);
	}else{
		printf("숫자 입력 성공");
	}


	return 0;
}