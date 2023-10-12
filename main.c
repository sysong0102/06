#include <stdio.h>
#include <stdlib.h>


int factorial(int a)
{
	int i;
	int res = 1;
	for (i = 1; i < a+1; i++)
		res = res*i;
	return res;
}

int combination(int n, int r)
{
	int div1, div2; // div1 = 분자, div2 = 분모 
	div1 = factorial(n);//n!
	div2 = factorial(n-r) * factorial (r);
	
	return (div1/div2);
}

int main(int argc, char *argv[])
{
	int n, r;
	int result;
//1. 입력값 받음

//메시지 출력
	printf("input n : ");
	scanf("%d", &n);
//n 입력
	printf("input r : ");
	scanf("%d", &r);
//메시지 출력
//r 입력 


//3. 최종 값 출력 
	//분모, 분자 나누기 연산
	 result = combination(n, r);
	//결과 출력
	printf("result is %i\n", result); 

   system("PAUSE");
   return 0;
}
