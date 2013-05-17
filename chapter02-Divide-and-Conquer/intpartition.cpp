#include<iostream>

using namespace std;

int split(int n, int m)
{
		if(n==1 || m==1) return 1;
		else if(n<m) return split(n, n);
		else if(n==m) return split(n, n-1) + 1;
		else return split(n, m-1) + split(n-m, m);
}

int main()
{
		cout << split(6, 6) << endl;
		return 0;
}
