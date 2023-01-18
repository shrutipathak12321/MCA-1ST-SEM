#include<iostream>
using namespace std;
class Number_List
{
	public:
		void create_array()
		{
	 		int n,i;
	 		cout<< "Enter the size of the array: ";
	 		cin>> n;
	 		int *arr=new int(n);
	 		cout << "Enter " << n<< " numbers:\n";
	 		for(i=0;i<n;i++)
			cin >> arr[i];
			sort_array(arr,n);
			find_min_max(arr,n);
		}
		void sort_array(int *arr,int n)
		{
			int i,j,t;
			for(i=0;i<n-1;i++)
			{
				for(j=0;j<n-i-1;j++)
				{
					if(arr[j]>arr[j+1])
					{
						t=arr[j];
						arr[j]=arr[j+1];
						arr[j+1]=t;
					}
				}
			}
			cout << "After sorting the array is : ";
			for(i=0;i<n;i++)
			cout << arr[i] << " ";
		}
		void find_min_max(int *arr,int n)
		{
			int i,min,max;
			min=arr[0];
			max=arr[n-1];
			/*for(i=1;i<n;i++)
			{
				if(min<arr[i])
				min=arr[i];
				if(max>arr[i])
				max=arr[i];
			}*/
			cout<< "\nThe minimum number of the array is: "<< min;
			cout<< "\nThe maximum number of the array is: "<< max;
		}		
};
int main()
{
	Number_List n;
	n.create_array();
	return 0;
}
