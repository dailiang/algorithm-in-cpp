#include<iostream> 

using namespace std;

// permutate the elements between k and m in list[]
void perm(int list[], int k, int m)
{
		// permute complete!
		if(k==m)
		{
				for (int i=0; i<=m; i++)
						cout << list[i] << " ";
				cout << endl;
		}
		else
		{
				for (int j=k; j<=m; j++)
				{
						swap(list[k], list[j]);
						perm(list, k+1, m);
						swap(list[j], list[k]);
				}
		}
}

int main()
{
		int list[] = {1, 2, 3, 4, 5, 6};
		perm(list, 0, 2);
		return 0;
}
