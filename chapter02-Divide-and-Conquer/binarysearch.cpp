#include<iostream>

using namespace std;

template<class T>

int BinarySearch(T a[], const T& x, int n)
{
		int left = 0;
		int right = n - 1;
		while(left<=right)
		{
				int middle = (left + right)/2;
				if(a[middle]<x)
						left = middle + 1;
				else if(a[middle]==x)
						return middle;
				else
						right = middle - 1;
		}
		return -1;
}

int main()
{
		int b[] = {1, 2, 3, 4, 6, 9, 11};
		cout << BinarySearch(b, 6, 7) << endl;
		cout << BinarySearch(b, 5, 7) << endl;
		cout << BinarySearch(b, 2, 7) << endl;
		return 0;
}
