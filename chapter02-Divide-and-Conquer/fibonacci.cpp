#include<iostream>
#include<time.h>

using namespace std;

// recursive function
int fib(int n)
{
		if(n<=1) return 1;
		return fib(n-1) + fib(n-2);
}

// iterative method
int f[100];
int fibonacci(int n)
{
		f[0] = 1;
		f[1] = 1;
		for (int i=2; i<=n; i++)
				f[i] = f[i-1] + f[i-2];
		return f[n];
}

int main()
{
		int n = 0;
		cout << "input n(n <= 40):\n";
		cin >> n;
		long t1 = clock();
		cout << "result:" << fib(n) << endl;
		long t2 = clock();
		cout << "time consuming:" << t2 - t1 << endl;
		t1 = clock();
		cout << "result:" << fibonacci(n) <<endl;
		t2 = clock();
		cout << "time consuming:" << t2 - t1 << endl;
		return 0;
}

