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
	int div1, div2; // div1 = ����, div2 = �и� 
	div1 = factorial(n);//n!
	div2 = factorial(n-r) * factorial (r);
	
	return (div1/div2);
}

int main(int argc, char *argv[])
{
	int n, r;
	int result;
//1. �Է°� ����

//�޽��� ���
	printf("input n : ");
	scanf("%d", &n);
//n �Է�
	printf("input r : ");
	scanf("%d", &r);
//�޽��� ���
//r �Է� 


//3. ���� �� ��� 
	//�и�, ���� ������ ����
	 result = combination(n, r);
	//��� ���
	printf("result is %i\n", result); 

   system("PAUSE");
   return 0;
}
