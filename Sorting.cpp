#include<iostream>
using namespace std;

void swap(int &a , int &b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
}

int bubbleSort(int a[] ,int n)
{
	int temp,countBS=0;
	for(int i=0;i<n-(n/2)+1;i++)
	{
		countBS++;
		for(int j=0;j<n-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
				
			}
		}
		cout<<"Array after pass: "<<i+1<<"\t";
		for(int k=0;k<n;k++)
		{
			cout<<a[k]<<"\t";
		}
		cout<<endl;
	}
	cout<<"Number of Swaps: "<<countBS<<endl;
	cout<<"Sorted Array:"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<"\t";
	}
	return countBS;
}

int selectionSort(int a[],int n)
{
	int countSS=0;
	for(int i=0;i<n-1;i++)
	{	countSS++;
		int min=i;
		for(int j=i+1;j<n;j++)
		{
			if(a[j]<a[min])
			{
				min=j;
			}
		}
		swap(a[i],a[min]);
		cout<<"Array after pass: "<<i+1<<"\t";
		for(int k=0;k<n;k++)
		{
			cout<<a[k]<<"\t";
		}
		cout<<endl;
	}
	cout<<"Number of Swaps: "<<countSS<<endl;
	cout<<"Sorted Array:"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<"\t";
	}
	return countSS;
}

int insertionSort(int a[],int n)
{
	int j,item,countIS=0;
	for(int i=1;i<n;i++)
	{
		countIS++;
		item=a[i];
		j=i-1;
		while(j>=0 && a[j]>item)
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=item;
		cout<<"Array after pass: "<<i<<"\t";
		for(int k=0;k<n;k++)
		{
			cout<<a[k]<<"\t";
		}
		cout<<endl;
	}
	cout<<"";
	cout<<"Number of Swaps: "<<countIS<<endl;
	cout<<"Sorted Array:"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<"\t";
	}
	return countIS;
}

int main()
{
	int size,n,bs,is,ss;
	cout<<"Enter the Size of the Array: ";
	cin>>size;
	cout<<"Enter the Number of elements in the Array: ";
	cin>>n;
	int arr[size],arr1[size],arr2[size];
	
	//Inputing data in Array
	cout<<"Enter the Elements in the Array: "<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<"Enter the Value of a["<<i<<"]: ";
		cin>>arr[i];
	}
	//Original Array
	cout<<"original Array: "<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<"\t";
	}
	for(int i=0;i<n;i++)
	{
		arr1[i]=arr[i];
		arr2[i]=arr[i];
	}
	cout<<endl;
	
	cout<<endl<<"Bubble Sort: "<<endl;
	bs=bubbleSort(arr,n);
	cout<<endl<<"Insertion Sort: "<<endl;	
	is=insertionSort(arr1,n);
	cout<<endl<<"Selection Sort: "<<endl;		
	ss=selectionSort(arr2,n);
	
	if(bs<is and bs<ss)
	{
		cout<<endl<<"Bubble Sort requires less number of passes"<<endl;	
	}
	else if(is<bs and is<ss)
	{
		cout<<endl<<"Insertion Sort requires less number of passes"<<endl;
	}
	else if(ss<bs and ss<is)
	{
		cout<<endl<<"Selection Sort Requires less number of passes"<<endl;
	}
	else
	{
		cout<<endl<<"Number of passes are equal in every sort"<<endl;
	}
	
	
	return 0;
}
