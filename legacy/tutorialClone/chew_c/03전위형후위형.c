#include <stdio.h>
//전위형(prefix),후위형(postfix)
int main() {
	int a =1;
	printf("++a : %d \n", ++a);//더한 후 출력
	
	a = 1;
	printf("++a : %d \n", a++);//출력한 후 더함
	return 0;
}