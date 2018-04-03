#include <iostream>
using namespace std;

void QuickSort(int a[], int l, int r)
{
    if (l < r)
    {
        int i,j,x;

        i = l;
        j = r;
        x = a[i];
        while (i < j)
        {
            while(i < j && a[j] > x)
                j--; 
            if(i < j)
                a[i++] = a[j];
            while(i < j && a[i] < x)
                i++; 
            if(i < j)
                a[j--] = a[i];
        }
        a[i] = x;
        QuickSort(a, l, i-1);
        QuickSort(a, i+1, r);
    }
}

int main()
{
	int a[10]={32,23,44,56,71,32,12,1,31,11};
	QuickSort(a,0,9);
	for(int i=0;i<10;i++)
	{
		cout<<a[i]<<",";
	}
	return 0;
}
