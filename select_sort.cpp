#include<iostream>
using namespace std;

void sort(int *a,int n)   //—°‘Ò≈≈–Ú 
{
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(*(a+j)<*(a+i))
			{
				int temp;
				temp= *(a+i);
				*(a+i)=*(a+j);
				*(a+j)=temp;
			} 
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
  
