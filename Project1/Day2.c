#include<stdio.h>
//std : Standard(ǥ��) , io : input/output
/*int main(void)
{ //main�Լ��� �⺻ Ʋ

	return 0;
}*/

int main(void)
{ 
	printf("Be happy\n");//���๮������\n

	printf("my\tfrined\n");//\t������ ���� ���ڿ��� ���κ����� Ŀ���� �ű��. 

	printf("Goot\bd chance\n");//\b �齺���̽�

	printf("Cow\rW\n");//\r Ŀ���� �� �չ��ڷ� �ű��. �� �� W�� �Է��߱⶧���� ����� CowW �� �ƴ� WOW�� �ȴ�. 
	//\a �Ҹ��� ����. 
	
	//�����Է�
	printf("%d\n",10);
	
	//�Ǽ��Է�
	printf("%lf\n",3.4);//lf : iong, float �̷��� �Է��ϸ� 3.4000000000�̷������� ���´�. 
	
	//�Ҽ��� 1°�ڸ����� ���
	printf("%.1lf\n", 3.4);// .1 lf �� .�Ҽ����� 1ù��° �ڸ����� ����ϰڴٴ� ��
	/*�����ζ�� ���ڿ�"%d"�� ����ϰ����� ���� 10�� ����Ѵ�. ���ڸ� ���ڷ� ����ϱ� ����
	�����ִ� ��. D�� ���ø� �̶������� '�������ε�.'�̶�� ���̴�. */ 
	printf("�� �̸��� ȫ�浿 �Դϴ�.\n�� ���̴� %d���̰��.\n���� ��� ���� �������� %d-%d�Դϴ�.\n",20,123,456);
	printf("%d*%d=%d\n%d*%d=%d",4,5,4*5,7,9,7*9);

	int num1 = 0 , num2=0;
	int num3 = 30, num4 = 40;
	printf("num1 = %d,num2 = %d, num3 = %d, num4 = %d\n",num1, num2, num3, num4);
	//printf("num3 = %d, num4 = %d\n",num3, num4);
	return 0;
}