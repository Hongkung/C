#include<stdio.h>
//����: �������� ����

int main(void)
{
	int num1 = 2;
	int num2 = 4;

	int result = num1 + num2;

	printf("������� : %d \n",result);
	printf("%d + %d = %d \n", num1, num2, result);
	printf("%d�� %d�� ���� %d�Դϴ�. \n", num1, num2, result);

	// ������ ����(Operator)
	printf("%d+%d =%d \n", num1, num2, num1 + num2);
	printf("%d-%d =%d \n", num1, num2, num1 - num2);
	printf("%d*%d =%d \n", num1, num2, num1 * num2);
	printf("%d/%d�� �� =%d \n", num1, num2, num1 / num2);
	printf("%d/%d�� ������ =%d \n", num1, num2, num1 % num2);

	//���տ����� OperatorTwo

	int num3 = 6;
	num1 += 3;
	num2 *= 4;
	num3 %= 5;

	printf("result : %d, %d, %d \n", num1, num2, num3);

	//+, - ������ Operator Three

	num1 = +2;
	num2 = -4;

	num1 = -num1;
	printf("num1 : %d \n", num1);

	num2 = -num2;
	printf("num2 : %d \n", num2);

	//����, ���� ������ OperatorFour

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
	//num2���� num1�� �� �����̴ϱ� num2�� �׳� 10+2 �� ����ǰ� �� �� num1--�� ���� num1�� 9�� ���Ѵ�. 
	// ���� �����ڴ� �Ұ�ȣ�� �ִٰ� �ؼ� ���� �������� �ʴ´�. 
	printf("num1 ; %d\n", num1);
	printf("num2 : %d\n", num2);
	printf("/////////////////////////////////\n");

	//���迬���� Operator Six �񱳿����� ���� ����� True�� 1�� false�� 0�� ��ȯ�Ѵ�. 

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
	//�� ������ OperatorSeven

	result1 = (num1 == 10 && num2 == 12);
	result2 = (num1 < 12 || num2 >12);
	result3 = (!num1);
	/*Not �������� ���,result3�� �� false�ΰ�. �װ��� C���� 0�̿��� ���� ��� True�� �ν��ϱ� �����̴�.
	�׷��� 10�� true�� �νĵǾ� ����� false�� ��ȯ�ϴ� ��*/
	printf("resutl1 : %d\n", result1);
	printf("resutl2 : %d\n", result2);
	printf("resutl3 : %d\n", result3);
	printf("////////////////////////////////\n");

	//, ������
	
	num1 = 1, num2 = 2;
	printf("Hello"), printf("world!\n");
	num1++, num2++;
	printf("%d ", num1), printf("%d", num2), printf("\n");


	return 0;

}