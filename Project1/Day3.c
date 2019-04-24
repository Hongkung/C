#include<stdio.h>
//변수: 덧셈뺄셈 예제

int main(void)
{
	int num1 = 2;
	int num2 = 4;

	int result = num1 + num2;

	printf("덧셈결과 : %d \n",result);
	printf("%d + %d = %d \n", num1, num2, result);
	printf("%d과 %d의 합은 %d입니다. \n", num1, num2, result);

	// 연산자 연습(Operator)
	printf("%d+%d =%d \n", num1, num2, num1 + num2);
	printf("%d-%d =%d \n", num1, num2, num1 - num2);
	printf("%d*%d =%d \n", num1, num2, num1 * num2);
	printf("%d/%d의 몫 =%d \n", num1, num2, num1 / num2);
	printf("%d/%d의 나머지 =%d \n", num1, num2, num1 % num2);

	//복합연산자 OperatorTwo

	int num3 = 6;
	num1 += 3;
	num2 *= 4;
	num3 %= 5;

	printf("result : %d, %d, %d \n", num1, num2, num3);

	//+, - 연산자 Operator Three

	num1 = +2;
	num2 = -4;

	num1 = -num1;
	printf("num1 : %d \n", num1);

	num2 = -num2;
	printf("num2 : %d \n", num2);

	//증가, 감소 연산자 OperatorFour

	num1 = 12;
	num2 = 12;

	printf("num1 : %d ,\n", num1);
	printf("num1++ : %d \n", num1++);
	printf("num1 : %d \n", num1);

	printf("num2 : %d ,\n", num2);
	printf("++num2 : %d \n", ++num2);
	printf("num2 : %d \n", num2);
	printf("/////////////////////////////////\n");
	
	num1 = 10;
	num2 = (num1--) + 2;
	//num2에서 num1은 후 연산이니까 num2는 그냥 10+2 로 연산되고 그 뒤 num1--로 인해 num1은 9로 변한다. 
	// 증감 연산자는 소괄호가 있다고 해서 먼저 연산하지 않는다. 
	printf("num1 ; %d\n", num1);
	printf("num2 : %d\n", num2);
	printf("/////////////////////////////////\n");

	//관계연산자 Operator Six 비교연산자 연습 결과가 True면 1을 false면 0을 반환한다. 

	num1 = 10;
	num2 = 12;
	int result1, result2, result3;

	result1 = (num1 == num2);
	result2 = (num1 <= num2);
	result3 = (num1 > num2);

	printf("resutl1 : %d\n", result1);
	printf("resutl2 : %d\n", result2);
	printf("resutl3 : %d\n", result3);
	printf("////////////////////////////////\n");
	//논리 연산자 OperatorSeven

	result1 = (num1 == 10 && num2 == 12);
	result2 = (num1 < 12 || num2 >12);
	result3 = (!num1);
	/*Not 연산자의 경우,result3이 왜 false인가. 그것은 C언어에서 0이외의 값은 모두 True로 인식하기 때문이다.
	그래서 10도 true로 인식되어 결과로 false를 반환하는 것*/
	printf("resutl1 : %d\n", result1);
	printf("resutl2 : %d\n", result2);
	printf("resutl3 : %d\n", result3);
	printf("////////////////////////////////\n");

	//, 연산자
	
	num1 = 1, num2 = 2;
	printf("Hello"), printf("world!\n");
	num1++, num2++;
	printf("%d ", num1), printf("%d", num2), printf("\n");


	return 0;

}