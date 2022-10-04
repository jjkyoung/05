#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x;
	
	printf("양수를 하나를 입력하시오:");
	scanf("%d", &x);
	
	if (x >0)  //양수인 경우  
	 printf("양수입니다. \n");

	else if (x < 0)  //음수인 경 
	 printf("음수입니다. \n");
	 
	
	else  //0인경우  
	 printf("0입니다.\n");
    
	return 0;
}
