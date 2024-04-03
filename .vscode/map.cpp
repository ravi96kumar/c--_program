/*#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<int,int> m;
    if(m.empty())
    {
        cout<<"map is empty"<<endl;
    }
    for(int i=1;i<=10;i++)
    {
    m.insert(pair<int,int>(i,(i*10)));
    }
    map<int,int>::iterator it;
    for(auto it=m.begin();it!=m.end();it++)
    {
        cout<<it->first<<"\t"<<it->second<<endl;
    }
    cout<<"size = "<<m.size()<<endl;
    cout<<"count = "<<m.count(11)<<endl;//if key is present return 1 else retuen 0
    it=m.begin();
     advance(it,2);
    m.erase(it);
    it=m.find(7);
    cout<<it->first<<"\t"<<it->second<<endl;
    m.erase(it);
    map<int,int>::reverse_iterator rit;
    for( rit=m.rbegin();rit!=m.rend();rit++)
    {
        cout<<it->first<<"\t"<<it->second<<endl;
    }
  it= m.lower_bound(11);
  cout<<it->first<<"\t"<<it->second<<endl;
  it=m.upper_bound(10);
    cout<<it->first<<"\t"<<it->second<<endl;
    cout<<"max size="<<m.max_size()<<endl;
    map<int,int>m1;
    m1=m;
    
    cout<<m.at(4)<<endl;
}*/
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
  /*  vector<string> msg{"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};

    for (const string& word : msg)
    {
        cout << word << " ";
    }
    cout << endl;*/
}