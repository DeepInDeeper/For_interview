#include <iostream>
#include <string>

#define test 1

int sumRow[11], sumCol[11]; //����ָ���ĺ�ֵ
int a[11][11], mark[11][11]; //����ľ����������
int markSumRow[11],markSumCol[11];
int n, m; //�С�����
int curSumRow[11], curSumCol[11];//�������ֵ��к͡��к�
int usedRow[11][10], usedCol[11][10];//���ж�Ӧʹ�����ֵı��
int sol;// ������
int answer[11][11];


void quickpre()
{
	//printf("Fistly Quick \n");
	int i, j;
	for (i = 0;i < n;i++)
		if (markSumRow[i] == (m - 1))
		{
			for (j = 0;j < m;j++)
				if (a[i][j] == 0)
				{
					//����
					a[i][j] = sumRow[i] - curSumRow[i];
					mark[i][j] = 1;
					curSumRow[i] += a[i][j];
					curSumCol[j] += a[i][j];
					markSumRow[i] += mark[i][j];
					markSumCol[j] += mark[i][j];
					usedRow[i][a[i][j]] = 1;
					usedCol[j][a[i][j]] = 1;
					//printf("qui");
					//printf("(%d,%d):%d,CurSumRow:%d,sumRow:%d,CurSumCol:%d,sumCol:%d\n", i, j, a[i][j], curSumRow[i], sumRow[i], curSumCol[j], sumCol[j]);
				}
			quickpre();
		}
	for(j=0;j<m;j++)
		if (markSumCol[j] == (n - 1))
		{
			for (i=0;i<n;i++)
				if (a[i][j] == 0)
				{
					a[i][j] = sumCol[j] - curSumCol[j];
					mark[i][j] = 1;
					curSumRow[i] += a[i][j];
					curSumCol[j] += a[i][j];
					markSumRow[i] += mark[i][j];
					markSumCol[j] += mark[i][j];
					usedRow[i][a[i][j]] = 1;
					usedCol[j][a[i][j]] = 1;
					//printf("quj");
					//printf("(%d,%d):%d,CurSumRow:%d,sumRow:%d,CurSumCol:%d,sumCol:%d\n", i, j, a[i][j], curSumRow[i], sumRow[i], curSumCol[j], sumCol[j]);
				}
			quickpre();
		}
	//printf("\n End the quick\n");
	return;
}

void search(int x, int y)
{
	
	if (sol > 1) return ;
	int i, j, go;
	
	if (x == n) //���еĸ���������
	{
		sol++;
		for (i = 0;i < n;i++)
			for (j = 0;j < m;j++)
				answer[i][j] = a[i][j];
		return;
	}
	int nx, ny; //��һ��Ӧ�ñ����ĸ�������
	if (y == m - 1) {
		nx = x + 1;
		ny = 0;
	}
	else {
		nx = x;
		ny = y + 1;
	}
	if (mark[x][y]) {
		go = 1;
		if ((y<m - 1 && curSumRow[x]>sumRow[x]) || (y == m - 1 && curSumRow[x] != sumRow[x])) go = 0;
		if ((x<n - 1 && curSumCol[y]>sumCol[y]) || (x == n - 1 && curSumCol[y] != sumCol[y])) go = 0;
		if (go) search(nx, ny);
		return;
	}
	for (i = 1;i < 10;i++)
		if (!usedRow[x][i] && !usedCol[y][i])
		{
			a[x][y] = i;
			//����
			curSumRow[x] += i;
			curSumCol[y] += i;
			markSumRow[x] += 1;
			markSumCol[y] += 1;
			usedRow[x][i] = 1;
			usedCol[y][i] = 1;
			go = 1;
			if ((y<m - 1 && curSumRow[x]>sumRow[x]) || (y == m - 1 && curSumRow[x] != sumRow[x])) go = 0;
			if ((x<n - 1 && curSumCol[y]>sumCol[y]) || (x == n - 1 && curSumCol[y] != sumCol[y])) go = 0;
			//printf("X:%d,Y:%d,I:%d,CurSumRow:%d,sumRow:%d,CurSumCol:%d,sumCol:%d\n", x, y,i, curSumRow[x], sumRow[x], curSumCol[y], sumCol[y]);
			
			if (go) search(nx, ny);
			//��ԭ
			a[x][y] = 0;
			curSumRow[x] -= i;
			curSumCol[y] -= i;
			markSumRow[x] -= 1;
			markSumCol[y] -= 1;
			usedCol[x][i] = 0;
			usedRow[y][i] = 0;
			
		}
}

int main()
{
	int T;
	int cas;
	int i, j;
	int ok;
	int sumR, sumC;
	printf("������ԵĴ���: ");
	scanf_s("%d", &T);
	for (cas = 1;cas <= T;cas++)
	{
		printf("\n���ԣ�%d\n ������һЩ��Ҫ����",cas);
		printf("\n����������������������");
		scanf_s("%d%d", &n, &m);
		printf("\n ÿһ��ָ�����ܺ�:");
		for (i = 0;i < n;i++) scanf_s("%d", &sumRow[i]);
		printf("\n ÿһ��ָ�����ܺ�;");
		for (j = 0;j < m;j++) scanf_s("%d", &sumCol[j]);
		printf("\n �����������:\n");
		for (i = 0;i < n;i++)
			for (j = 0;j < m;j++)
				scanf_s("%d", &a[i][j]);

		memset(mark, 0, sizeof(mark));
		memset(usedRow, 0, sizeof(usedRow));
		memset(usedCol, 0, sizeof(usedCol));
		memset(curSumRow, 0, sizeof(curSumRow));
		memset(curSumCol, 0, sizeof(curSumCol));
		memset(markSumRow, 0, sizeof(markSumRow));
		memset(markSumCol, 0, sizeof(markSumCol));

		ok = 1;
		for(i=0;i<n;i++)
			for (j = 0;j < m;j++)
			{
				if (a[i][j] > 0) mark[i][j] = 1;
				else continue;
				curSumRow[i] += a[i][j];				
				curSumCol[j] += a[i][j];
				markSumRow[i] += mark[i][j];
				markSumCol[j] += mark[i][j];
				usedRow[i][a[i][j]] ++;
				if (usedRow[i][a[i][j]] > 1) ok = 0;
				usedCol[j][a[i][j]]++;
				if (usedCol[j][a[i][j]] > 1) ok = 0;
			}
		sumR = sumC = 0;
		for (i = 0;i < n;i++) sumR += sumRow[i];
		for (j = 0;j < m;j++) sumC += sumCol[j];
		if (sumR != sumC) ok = 0;
		sol = 0;
		//printf("the ok is %d", ok);
		
		if(ok)
		{
			quickpre();
			search(0, 0);
		}
		printf("����: %d\t",cas);
		if (sol == 0) printf("�޽�.\n");
		else if (sol > 1) printf("��Ψһ.\n");
		else {
			printf("Ψһ��.\n��Ϊ��\n");
			for (i = 0;i < n;i++)
			{
				for (j = 0;j < m;j++) 
					printf("%d\t", answer[i][j]);
				printf("\n");

			}
		}
	}
	return 0;
}