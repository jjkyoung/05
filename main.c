#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char c;
	int num = 0;
	
	printf("문자열을 입력하세요:");
	while( (c=getchar()) != '\n' ) // 입력 문자가 개별문자가 나올때까지 반복  
	{
		if ( c>= '0' && c<= '9' )  // 입력된 글자(c)가 숫자인가? 
		    num = num + 1;  // 그렇다면 num에 하나를 센다. 
	}
	

	printf("숫자의 개수는 %i개 입니다.\n", num); // 출력 
	
	return 0;
}
