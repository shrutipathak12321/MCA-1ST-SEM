#include<iostream>
#include<math.h>
using namespace std;
class Calc
{
    int n;
    char c;
    public:
    int calculate(int n, char c)
    {
        int rev=0;
        while(n>0)
        {
            rev=rev+(n%10);
            n=n/10;
            rev=rev*10;
        }
        return rev/10;
    }
    int calculate(int n, char c, int dummy)
    {
        for(int i=(n/2);i>2;i--)
        {
            if(n%i==0)
            {
                
                cout<<"Not a Prime Number"<<endl;
                return 1;
            }
            else
            {
                cout<<"Prime Number"<<endl;
                return 0;
            }
        }
        return 0;
    }

};
int main()
{
    Calc obj;
    int a,dummy=0;
    char ch;
    cout<<"Enter the number to calculate: ";
    cin>>a;
    cout<<"Enter character 'r' to reverse digits or character 'p' to check prime number: ";
    cin>>ch;
    if(ch=='r')
    {
       cout<<"The reversed number is: "<<obj.calculate(a,ch)<<endl;

    }
    else if(ch=='p')
    {
        obj.calculate(a,ch,dummy);
    }
    else
    {
        cout<<"Wrong choice!!!"<<endl;
    }
    return 0;
}
