#include<iostream>
using namespace std;

void sort(int *a,int n)   //选择排序 
{
	for(int i=0;i<n;i++)
	{
		int k=i;          //k是记录当前循环最小的数 
		for(int j=i+1;j<n;j++)
		{
			if(*(a+j)<*(a+k))
			{
				k=j;
			} 
		}
		if(k!=i)                //只换一次 
		{
			int temp;
			temp= *(a+i);
			*(a+i)=*(a+k);
			*(a+k)=temp;
		}
	}
}
int main()
{
	int a[10];
	int *p=a;
	for(p=a;p<a+10;p++)
	{
		cin>>*p;
	} 
	sort(a,10);
	for(p=a;p<a+10;p++)
	{
		cout<<*p<<" ";
	} 
} 
  
