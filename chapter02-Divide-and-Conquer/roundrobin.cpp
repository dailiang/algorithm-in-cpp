#include<iostream>

using namespace std;

const int MAX = 100;

int a[MAX][MAX];

void copy(int tox, int toy, int fromx, int fromy, int r)
{
		for (int i=0; i<r; i++)
				for (int j=0; j<r; j++)
						a[tox+i][toy+j] = a[fromx+i][fromy+j];
}

void table(int k)
{
		int i, r;
		int n = 1<<k;
		for (i=0; i<n; i++)
				a[0][i] = i + 1;
		for(r=1; r<n; r<<=1)  // r represents tox
				for(i=0; i<n; i+=r*2)
				{
						copy(r, r+i, 0, i, r);
						copy(r, i, 0, r+i, r);
				}
}

int main()
{
		int num = 0;
		cout << "Please input number of players:(log)" << endl;
		cin >> num;
		int n = 1<<num;
		table(num);
		for(int i=0; i<n; i++)
		{
				for(int j=0; j<n; j++)
				{
						cout << a[i][j] << " ";
				}
				cout << endl;
		}
		return 0;
}
