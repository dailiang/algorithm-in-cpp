#include<iostream>

using namespace std;

int select(int a[], int left, int right, int k)
{
		if (left>=right) return a[left];
		int index = left;
		int pivot = a[left];
		swap(a[left], a[right]);
		for (int i=left; i<right; i++)
		{
				if (a[i] < pivot)
						swap(a[i], a[index++]);
		}
		swap(a[index], a[right]);
		int m = index - left + 1;
		if (m==k) return a[index];
		if(m<k) return select(a, index+1, right, k-m);
		else return select(a, left, index-1, k);
}

int main()
{
		int a[] = {1, 13, 5, 6, 8, 9, 2, 4, 7, 10, 11};
		int k;
		cout << "你要选择第几小的数字？" << endl;
		cin >> k;
		cout << select(a, 0, 10, k) << endl;
		return 0; 
}
