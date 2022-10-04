#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x, y; // 두개의 입력 정수  
	char op; // 연산자 문자  
	int result; // 연산 결과 저장 
	 
	// 두개의 입력 정수, 한개의 연산자 문자 입력 받기 
	printf("enter the calculation:");
	scanf("%d %c %d", &x, &op, &y);
	
	// 연사자에 따라 결과값을 계산 (result에 저장) 
	if (op == '+')  // +인 경우
	    result = x + y; 
	else if (op == '-')  // -인 경우
	    result = x - y;
	else if (op == '*')  // *인 경우
	    result = x * y;
	else //  /인 경우  
	    result = x / y;
	
	// printf로 출력  
	printf("= %i\n", result);   
	return 0;
}
