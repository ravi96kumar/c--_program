#include<iostream>
#include<vector>
#include<list>
#include<chrono>
//auto start=chrono::steady_clock::now();
using namespace std;
int main()
{
    vector<int> v1;//{1,2,3,4,5,6,7,8,9,10};
    
   /* v1.push_back(10);
   v1.push_back(20);
    v1.push_back(30);
    cout<<v1.size()<<endl;
    cout<<sizeof(v1)<<endl;
    v1.pop_back();
    cout<<v1.capacity()<<endl;
    cout<<v1.max_size()<<endl;*/
    for(int i=1;i<=11;i++)
    {
        v1.push_back(i*10);
      /*  cout<<"after inserting  "<<i<<" element"<<endl;
        cout<<"size is "<<v1.size()<<endl;
        cout<<"capacity is "<<v1.capacity()<<endl;
        cout<<endl<<endl;*/
    }
    /*for(int i=9;i>=0;i--)
    {
        cout<<v1[i]<<endl;
    }*/
   // v1.push_back(v1.front());
   // vector<int>::iterator it;
  //  v1.clear();
    if(v1.empty())
    {
        cout<<"vector is empty"<<endl;
    }
    else
    {

     for (auto it = v1.begin();it != v1.end(); ++it)
         {
            cout << ' ' << *it;
         }
    }
         cout<<endl;
         
         cout<<v1.front()<<endl;
         cout<<v1.back()<<endl;
  // v1.clear();
  // cout<<v1.front()<<endl;
  vector<int>v;
  v.reserve(5);
  v.assign(v1.begin(),v1.end());
 /* for ( it = v.begin(); it != v.end(); ++it)
         {
            cout << ' ' << *it;
         }*/
         cout<<endl;
         cout<<v.at(5)<<endl;
         v.erase(v.begin()+5);
         v.insert(v.begin()+6,222);
         //v.resize(40);
         cout<<"capacity  "<<v.capacity()<<endl;
         /* for (auto it = v.rbegin(); it != v.rend(); ++it)
         {
            cout << ' ' << *it;
         }*/
       //  v.clear();
        // cout<<v.size()<<endl;
        // cout<<v.front()<<endl;
       //  cout<<v.back()<<endl;
       //  v1.swap(v);
   /* for (auto it = v.rbegin(); it != v.rend(); ++it)
         {
            cout << ' ' << *it;
         }
         cout<<endl;
          for (auto it = v1.rbegin(); it != v1.rend(); ++it)
         {
            cout << ' ' << *it;
         }*/
         vector<int>v2;
         v2=v1;
         cout<<"v2 data"<<endl;
         for (auto it = v2.rbegin(); it != v2.rend(); ++it)
         {
            cout << ' ' << *it;
         }
}