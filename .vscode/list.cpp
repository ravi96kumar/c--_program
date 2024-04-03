#include<list>
#include<iostream>
using namespace std;
int main()
{
    list<int> l;
    list<int>::iterator it;
    
    l.push_front(10);
    l.push_back(20);
    l.push_back(20);
    l.push_back(30);
    l.push_back(10);
    l.push_front(50);
    l.push_back(33);
    list<int>l2;
    l.sort();
    l2.merge(l);
  // l2.remove(20);//remove the given value
    //l.assign
    l2.unique();//remove duplicate elements
    cout<<l.size()<<endl;
       for ( it = l2.begin(); it !=l2.end(); ++it)
       {
        cout << ' ' << *it;
       }


    
}