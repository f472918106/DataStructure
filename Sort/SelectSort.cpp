#include <iostream>
using namespace std;

void SelectSort(int a[], int n)
{
    int i;        
    int j;      
    int min;    

    for(i=0; i<n; i++)
    {
        min=i;
        for(j=i+1; j<n; j++)
        {
            if(a[j] < a[min])
                min=j;
        }

        if(min != i)
            swap(a[i], a[min]);
    }
}

int main()
{
	int a[10]={32,23,44,56,71,32,12,1,31,11};
	SelectSort(a,10);
	for(int i=0;i<10;i++)
	{
		cout<<a[i]<<",";
	}
	return 0;
}
