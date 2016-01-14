#include <iostream>
using namespace std;

int main()
{
	int i=0,j=0,n=0,temp=0;
	cout<<"enter the length of the array"<<endl;
	scanf("%d",&n);
	int a[n];
	cout<<"enter the elements"<<endl;
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
		for(j=i;j<n;j++)
		{
			if(a[j]<a[i])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}


	
	cout<<"sorted array is\n";
	for(i=0;i<n;i++)
		cout<<a[i];
	return 0;
}
