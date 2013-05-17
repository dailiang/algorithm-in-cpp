#include<iostream>

using namespace std;

int partition(int a[], int left, int right)
{
		int index = left;
		int pivot = a[left];
		swap(a[left], a[right]);
		for   (int i=left; i < right; i++)
		{
				if (a[i] < pivot)
						swap(a[index++], a[i]);
		}
		swap(a[index], a[right]);
		return index;
}

void qsort(int a[], int left, int right)
{
		if (left>=right) return;
		int index = partition(a, left, right);
		qsort(a, left, index - 1);
		qsort(a, index+1, right);
}

int main()
{
		int myarray[] = {2, 4, 6, 8, 10, 1, 3, 5, 7, 9, 11};
		qsort(myarray, 0, 10);
		for (int i=0; i<10; i++)
				cout << myarray[i] << " ";
		cout << endl;
	
		return 0;
}
