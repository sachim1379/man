//for문 과목 평균 구하기 scanf랑 for문 같이 쓰기
#include <stdio.h>
int main() {
	int i;
	int subject_num, score;
	double sum_score =0;

	printf("몇개의 과목 점수를 입력 받을 것인가요? : ");
	scanf_s("%d", &subject_num);
	printf("\n각 과목의 점수를 입력해주세요\n");
	for (i = 1;i <= subject_num;i++) {
		printf("과목 %d : ", i);
		scanf_s("%d", &score);
		sum_score = sum_score + score;
	}
	printf("전체 과목의 평균: %.2f \n", sum_score / subject_num);
	return 0;
}