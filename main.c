#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int answer = 59;
	int x;
	int trial = 0;
	
	do
{
	printf("Guess a number :"); // �Է��ض� ���� ���
	scanf("%i", &x);  // �Է��� ����
	
	if (x > answer)  // �Է¼��ڰ� ���亸�� Ŭ ���  
     { printf("high!\n"); 
	   trial = trial + 1 ;
	 } 
	 
	else if (x < answer) // �Է¼��ڰ� ���亸�� ���� ���  
     { printf("low!\n"); 
	   trial = trial + 1 ;
	 } 
}
	while ( x != answer); // ����� ������ ���� �Ǵ�
    trial = trial + 1;
	printf("congratulation! Number of trial = %i\n", trial); // �õ� Ƚ�� ��� 
    
	return 0;
}
