/*비트연산*/
//8bit = 1byte, 이진8자리 11111111 0부터 255까지
#include <stdio.h>
int main() {
	int a =0xAF;  //10101111
	int b = 0xB5; //10110101

	printf("%x \n", a & b); //10100101 AND
	printf("%x \n", a | b); //10111111 OR
	printf("%x \n", a ^ b); //00011010	XOR 달라야 1
	printf("%x \n",	   ~a); //01010000 NOT
	printf("%x \n", a << 2);//1010111100
	printf("%x \n", a >> 3);//00010110 SHIFT 0채워지는 방법은 시스템마다 다름


	return 0;
}