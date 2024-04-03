#include <iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;
class A
{
    
    char *ptr;
    int *p;
    public:
    A(const char* z)
    {
        //ptr = (char*)malloc(sizeof (strlen(z)+1));
        ptr=new char;

        strcpy(ptr,z);
        cout<<ptr<<endl;
    }
    A(int m)
    {
         p=(int*)malloc(sizeof(m)+1);
         p=&m;
         cout<<*p<<endl;
    }
};
int main() 
{
    
    A a("ravi");
   A b=30;
    return 0;
}