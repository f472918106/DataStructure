#include <iostream>
using namespace std;

void BubbleSort(int R[],int n)
{
	int i,j;
	int temp;
	for(i=n-1;i>0;i--)
	{
		for(j=0;j<i;j++)
		{
			if(R[j]>R[j+1])
			{
				temp=R[j];
				R[j]=R[j+1];
				R[j+1]=temp;
			}
		}
	}
}

int main()
{
	int a[10]={32,23,44,56,71,32,12,1,31,11};
	BubbleSort(a,10);
	for(int i=0;i<10;i++)
	{
		cout<<a[i]<<",";
	}
	return 0;
}
