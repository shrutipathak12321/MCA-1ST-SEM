#include<iostream>
using namespace std;
class Pattern
{
	public:
		void pat()
		{
			int i,j,s,n;
			cout << "Enter no of rows: ";
			cin>> n;
			for(i=1;i<=n;i++)
			{
				for(s=1;s<=i;s++)
				cout<< "  ";
				for(j=1;j<=(2*n- (2*i-1));j++)
				cout<< "* ";
				
				cout<<"\n";
			}
		}
};
int main()
{
	Pattern p;
	p.pat();
	return 0;
}
