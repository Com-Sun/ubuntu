#include <stdio.h>

// 1000000 이하의 피보나치 수열 ( N 번째 항이 N - 1 번째 항과 N - 2 번째 항으로 표현되는 수열, 시작은 1,1,2,3,5,8,...) 의 짝수 항들의 합을 구한다
//
int main()
{
	int i = 1;
	int j = 1;
	int k = 2;
	int sum = 0;

	while (k < 1000000)
	{
		i = i + j;
		j = j + k;
		k = i + j;

		sum += j;
		if (k <1000000)
			continue;
		printf("%d\n", sum);

	}

	return 0;
}
