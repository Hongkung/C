#include<stdio.h>
//std : Standard(표준) , io : input/output
/*int main(void)
{ //main함수의 기본 틀

	return 0;
}*/

int main(void)
{ 
	printf("Be happy\n");//개행문자제어\n

	printf("my\tfrined\n");//\t다음탭 위의 문자열의 끝부분으로 커서를 옮긴다. 

	printf("Goot\bd chance\n");//\b 백스페이스

	printf("Cow\rW\n");//\r 커서를 맨 앞문자로 옮긴다. 그 뒤 W를 입력했기때문에 결과는 CowW 가 아닌 WOW가 된다. 
	//\a 소리를 낸다. 
	
	//정수입력
	printf("%d\n",10);
	
	//실수입력
	printf("%lf\n",3.4);//lf : iong, float 이렇게 입력하면 3.4000000000이런식으로 나온다. 
	
	//소수점 1째자리까지 출력
	printf("%.1lf\n", 3.4);// .1 lf 는 .소수점의 1첫번째 자리까지 출력하겠다는 뜻
	/*원대대로라면 문자열"%d"를 출력하겠지만 정수 10을 출력한다. 숫자를 문자로 출력하기 위해
	빠꿔주는 것. D는 데시멀 이란뜻으로 '십진수로된.'이라는 말이다. */ 
	printf("제 이름은 홍길동 입니다.\n제 나이는 %d살이고요.\n제가 사는 곳의 번지수는 %d-%d입니다.\n",20,123,456);
	printf("%d*%d=%d\n%d*%d=%d",4,5,4*5,7,9,7*9);

	int num1 = 0 , num2=0;
	int num3 = 30, num4 = 40;
	printf("num1 = %d,num2 = %d, num3 = %d, num4 = %d\n",num1, num2, num3, num4);
	//printf("num3 = %d, num4 = %d\n",num3, num4);
	return 0;
}