#include<stdio.h>
//scanf test
int main(void)
{
////////////////////////////////////////////////////////////
	
	int result;
	int num1, num2, num3;
	
	/*
	printf("���� one : ");
	scanf("%d", &num1);
	printf("���� two : ");
	scanf("%d", &num2);

	result = num1 + num2;
	printf("%d + %d = %d \n",num1, num2, result);
	*/
////////////////////////////////////////////////////////////
	/*
	printf("������ ���� �Է� : ");
		scanf("%d %d %d", &num1, &num2, &num3);

	result = num1 + num2 + num3;
	printf("%d + %d + %d = %d \n", num1, num2, num3,result);
	*/
////////////////////////////////////////////////////////////
	//test1
	/*
	printf("���� 1 : ");
	scanf("%d", &num1);

	printf("���� 2 : ");
	scanf("%d", &num2);

	printf("���� : %d \n", num1 - num2);

	printf("���ϱ� : %d \n", num1 * num2);
	*/
/////////////////////////////////////////////////////////////
	//test2
	/*
	printf("���� �Է� : ");
	scanf("%d %d %d", &num1, &num2, &num3);
	result = num1 * num2 + num3;
	printf("%d * %d + %d = %d", num1, num2, num3, result);
	*/
/////////////////////////////////////////////////////////////
	//test3
	/*
	printf("�����Է� : ");
	scanf("%d", &num1);
	result = num1*num1;
	printf("�Է¹��� ���� : %d \n", num1);
	printf("�Է¹��� ������ ���� : %d\n", result);
	*/
//////////////////////////////////////////////////////////////
	//test4
	/*
	printf("������ ���� 1 : ");
	scanf("%d", &num1);
	printf("������ ���� 2 : ");
	scanf("%d", &num2);

	printf("����? %d", num1/num2);
	printf("��������? %d", num1 % num2);
	*/
///////////////////////////////////////////////////////////////
	//test5
	printf("����� ����1 : ");
	scanf("%d", &num1);
	printf("����� ����2 : ");
	scanf("%d", &num2);
	printf("����� ����3 : ");
	scanf("%d", &num3);

	result = (num1 - num2)*(num2 + num3)*(num3%num1);
	printf("%d", result);
	return 0;

}