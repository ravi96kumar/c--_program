#include<iostream>
using namespace std;
#include<string>
int main()
{
    string str1="raju";
    str1="krishna";
    char a[]="system management";
    string str2;
    getline(cin,str2);
    cout<<str1<<endl;
    cout<<str2<<endl;
    str1.push_back('v');
    cout<<str1<<endl;
    //str1.pop_back();
    cout<<str1<<endl;
    str1.append(str2);
    cout<<str1<<endl;
    cout<<"length="<<str1.length()<<endl;
    cout<<"size="<<str1.size()<<endl;
    str1=str1+" "+str2+"last";
    cout<<str1<<endl;
    for(auto it=str1.rbegin();it!=str1.rend();it++)
    {
        cout<<*it;
    }
    cout<<endl;
   cout<<str1.at(6)<<endl;
   cout<<"after copy"<<endl;
 str1.copy(a,5,2);
   cout<<a<<endl;
   str1.erase(5,8);
   cout<<str1<<endl;
  const char* m= str1.data();
  cout<<m<<endl;
  str1="aaaaghaa";
 cout<<str1.find_first_not_of('a')<<endl;
 cout<<str1.find_last_not_of('a')<<endl;
 cout<<str1.max_size()<<endl;
 cout<<str1.substr(1,4)<<endl;
 
}