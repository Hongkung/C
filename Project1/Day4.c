#include<stdio.h>
//scanf test
int main(void)
{
////////////////////////////////////////////////////////////
	
	int result;
	int num1, num2, num3;
	
	/*
	printf("정수 one : ");
	scanf("%d", &num1);
	printf("정수 two : ");
	scanf("%d", &num2);

	result = num1 + num2;
	printf("%d + %d = %d \n",num1, num2, result);
	*/
////////////////////////////////////////////////////////////
	/*
	printf("세개의 정수 입력 : ");
		scanf("%d %d %d", &num1, &num2, &num3);

	result = num1 + num2 + num3;
	printf("%d + %d + %d = %d \n", num1, num2, num3,result);
	*/
////////////////////////////////////////////////////////////
	//test1
	/*
	printf("정수 1 : ");
	scanf("%d", &num1);

	printf("정수 2 : ");
	scanf("%d", &num2);

	printf("빼기 : %d \n", num1 - num2);

	printf("곱하기 : %d \n", num1 * num2);
	*/
/////////////////////////////////////////////////////////////
	//test2
	/*
	printf("숫자 입력 : ");
	scanf("%d %d %d", &num1, &num2, &num3);
	result = num1 * num2 + num3;
	printf("%d * %d + %d = %d", num1, num2, num3, result);
	*/
/////////////////////////////////////////////////////////////
	//test3
	/*
	printf("숫자입력 : ");
	scanf("%d", &num1);
	result = num1*num1;
	printf("입력받은 정수 : %d \n", num1);
	printf("입력받은 정수의 제곱 : %d\n", result);
	*/
//////////////////////////////////////////////////////////////
	//test4
	/*
	printf("나눗셈 정수 1 : ");
	scanf("%d", &num1);
	printf("나눗셈 정수 2 : ");
	scanf("%d", &num2);

	printf("몫은? %d", num1/num2);
	printf("나머지는? %d", num1 % num2);
	*/
///////////////////////////////////////////////////////////////
	//test5
	printf("계산할 숫자1 : ");
	scanf("%d", &num1);
	printf("계산할 숫자2 : ");
	scanf("%d", &num2);
	printf("계산할 숫자3 : ");
	scanf("%d", &num3);

	result = (num1 - num2)*(num2 + num3)*(num3%num1);
	printf("%d", result);
	return 0;

}