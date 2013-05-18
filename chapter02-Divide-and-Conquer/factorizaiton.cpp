#include<iostream>

using namespace std;

int  solve(int n)
{
		static int total = 0;
		if(n==1) total++;
		else
				for (int i=2; i<=n; i++)
						if(n%i==0) solve(n/i);
		return total;
}

int main()
{
		int n;
		cout << "input n:" << endl;
		cin >> n;
		cout << solve(n) << endl;
		return 0;
}
