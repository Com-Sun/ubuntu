//임의의 자연수 N 을 입력 받아 N 을 소인수 분해 한 결과를 출력하여라. 예를 들어서 N = 18 일 경우

//N = 18, 18 = 2 * 3 * 3

#include <stdio.h>

int main()
{
	int input;
	int n;
	int primeNum;
	printf("숫자를 입력하시오 :\n");
	scanf ("%d", &input);

	for(int i = 1; n != 1; i++)
	{
		if(input / i == 0)
		{
			primeNum = i;
			printf("%d\n", primeNum);
		}

		else (n =1);

	}

	return 0;
}
