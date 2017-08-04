/*
����
��Ŀ����:
	����2n�Ų�ͬ���ƣ�����2n����1��2n������λ���ϡ�ÿһ��ϴ�ƣ�λ��Ϊi���ƽ���ϴ��p(i��λ�ã�p(i)���壺
					if i<=n  p(i)=2*i;
					else p(i)=2(i-n)-1;
	�ʣ�
		�������ٶ�����ϴ�ƣ��Ż�ʹ�������ƶ��ص�ԭ����λ��

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