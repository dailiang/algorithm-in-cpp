#include<iostream>
#include<iomanip>

using namespace std;

const int NUM = 51;
int m[NUM][NUM] = {0};   // 第i行第j列记录了 i到j 矩阵的连乘次数最小值
int pos[NUM][NUM] = {0};

int recurve(int p[], int i, int j)
{
		if(i==j) return 0;
		int min = recurve(p, i, i) + recurve(p, i+1, j) + p[i-1]*p[i]*p[j];
		pos[i][j] = i;
		for(int k=i+1; k<j; k++)
		{
				int tmp = recurve(p, i, k) + recurve(p, k+1, j) + p[i-1]*p[k]*p[j];
				if (tmp < min) 
				{
						min = tmp;
						pos[i][j] = k;
				}
		}
		m[i][j] = min;
		return min;
}

int main()
{
		int a[] = {30, 35, 15, 5, 10, 20};
		cout << recurve(a, 1, 5) << endl << endl;
		for (int i=0; i<6; i++)
		{
				for (int j=0; j<6; j++)
						cout << setw(7) << m[i][j] << " ";
				cout << endl;
		}
		cout << endl;

		for (int i=0; i<6; i++)
		{
				for (int j=0; j<6; j++)
						cout << setw(7) << pos[i][j] << " ";
				cout << endl;
		}

		return 0;
}
