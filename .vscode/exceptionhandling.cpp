#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a;
    cin>>b;
/*c=a/b;
    cout<<c<<endl;*/
    try
    {
        if(b==0)
        {
            throw "error";
        }
        else
        {
            c=a/b;
           // cout<<"division is"<<c<<endl;
           throw c;
        }
        throw c;
    }
    catch(const char* msg)
    {
       // cout<<"division by  exception c ="<<msg<<endl;
       cerr<<msg<<endl;
       cout<<msg<<endl;
    }
    catch(int x)
    {
        cout<<"divide c="<<x<<endl;
    }
    catch(...)
    {
    cout<<"after the exception handling "<<endl;
    }
    
}