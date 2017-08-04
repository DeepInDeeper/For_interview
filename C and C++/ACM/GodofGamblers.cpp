/*
赌神
题目描述:
	给出2n张不同的牌，放在2n个从1到2n的有序位置上。每一轮洗牌，位置为i的牌将会洗到p(i）位置；p(i)定义：
					if i<=n  p(i)=2*i;
					else p(i)=2(i-n)-1;
	问，
		经过最少多少轮洗牌，才会使得所有牌都回到原来的位置

*/
#include<iostream>

using namespace std;

int phi(int N)
{
	int ret = N;
	for (int i = 2;i*i <= N;i++)
	{
		if (N%i == 0)
		{
			ret = ret / i *(i - 1);
			while (N%i==0)
			{
				N =N/i;
			}
		}
	}
	if (N > 1)  ret = ret / N *(N - 1);
	return ret;
}

int pmod(int a, int p, int m)
{
	if (p == 0) return 1 % m;
	long long ret = 1, remain = a;
	while (p>0)
	{
		if (p & 1) ret = ret*remain%m;
		remain = remain*remain%m;
		p = p >> 1;
	}
	return ret;
}

int solve(int N)
{
	int phiN = phi(N);
	int ret = phiN;
	for(int i=1;i*i<=phiN;i++)
		if (phiN%i == 0)
		{
			if (pmod(2, i, N) == 1) { 
				if (i < ret) ret = i;
			}
			if (pmod(2, phiN / i, N) == 1)
			{
				if (phiN / i < ret) ret = phiN / i;
			}
		}
	return ret;
}


int main()
{
	int N;
	while (cin >> N)
	{
		cout << solve(2 * N + 1) << endl;
	}
	return 0;
}