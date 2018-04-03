#include <iostream>
using namespace std;

void StraightInsertSort(int R[],int n)
{
	int i,j,k,temp;
	for(i=1;i<n;i++)
	{
		for(j=i-1;j>=0;j--)
		{
			if(R[j]<R[i])
			{
				break;
			}
		}
		if(j!=i-1)
		{
	  		temp=R[i];
	  		for(k=i-1;k>j;k--)
	  		{
	  			R[k+1]=R[k];	
			}
			R[k+1]=temp;
		}
	}
}

int main()
{
	int a[10]={32,23,44,56,71,32,12,1,31,11};
	StraightInsertSort(a,10);
	for(int i=0;i<10;i++)
	{
		cout<<a[i]<<",";
	}
	return 0;
}
