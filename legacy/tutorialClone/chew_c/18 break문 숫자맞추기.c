//break문 ;;으로 무한 for문 가능 break로만 나갈수있다.
#include <stdio.h>
int main() {
	int userAnswer;
	printf("컴퓨터가 생각한 숫자를 맞추어 보세요! (1부터 5중 하나) \n");
	for (;;) {
		printf("입력 : ");
		scanf_s("%d", &userAnswer);
		if (userAnswer == 3) {
			printf("맞추셨군요. 정답은 3입니다.\n");
			break;
		}
		else {
			printf("틀렸습니다. 다시 입력하세요.\n");
		}
	}
	return 0;
	
}