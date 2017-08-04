/*
因子的因子：
N为素数，有k个因子，包括 1 和N，
第k个因子有nk个因子，求N对应的k因子数的立方和
S= n1^3 + n2^3 + nk^3;
*/
#include<iostream>
#include <vector>
#include<ctime>
#include "windows.h"

void is_Prime(int x);
void pre();
int CalcN(int N);

using namespace std;

const int MaxI = 1 << 16;
int a[1 << 16]; // 标记法：0表示质数 ，1表示非质数
vector <int> p;

void main()
{
	clock_t start, finish,start_1,finish_1;
	printf("hello world!\n");
	int x;
	pre();
	while (1)
	{
		printf("Enter the no:");
		scanf_s("%d", &x);
		start = clock();
		is_Prime(x);
		finish = clock();
		cout << finish - start << "/" << CLOCKS_PER_SEC << " (s) " << endl;
		start_1 = clock();
		
		int S=CalcN(x);
		finish_1 = clock();
		printf("the simple is %d\n", S);
		cout<<finish_1-start_1 << "/" << CLOCKS_PER_SEC << " (s) " << endl;
		
		
	}


	
}


void is_Prime(int x)
{
	int tmp,cnt,sum;
	cnt = 0, sum = 0;
	for (int i = 1;i <= x;i++)
	{
		tmp = 0;
		if (x % i == 0)
		{
			cnt += 1;
			printf("%d\t",  i);
			if ((i == 1) || (i==2147483647)) { sum = sum + 1; }
			else
			{
				for (int j = 1;j <= i;j++)
				{
					printf("\n%d", j);
					
					if (i%j == 0)
					{
						tmp += 1;
						
					}
				}
				//printf("\nthe tmp is %d\n", tmp);
				sum = sum + tmp * tmp * tmp;
			}
				

		}
	}
	printf("\n");
	printf("the sum is %d", sum);
	printf("\n");
}

void pre()
{

	for(int i=2;i<MaxI;i++)
		if (!a[i])
		{
			for (int j = i + i;j < MaxI;j += i)
				a[j] = 1;
			p.push_back(i);

		}
}

int CalcN(int N)
{
	int ret = 1;
	unsigned int i=0;

	while ((N >= p[i] * p[i]) && (i < p.size()))
	{
		if (N%p[i] == 0)
		{
			int k_1 = 1;
			int j = 1;
			while (N%p[i] == 0) {
				k_1++;
				j += k_1 * k_1 * k_1;
				N = N / p[i];
			}
			ret = ret*j;
		}
		i++;
	}
	if (N != 1) ret = ret * 9;
	return ret;
}