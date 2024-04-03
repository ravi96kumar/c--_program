//#ifndef D0AAAC4D_45D3_4B90_A731_0DF36281A6F3
//#define D0AAAC4D_45D3_4B90_A731_0DF36281A6F3
#include<iostream>
using namespace std;
//class B;
class A 
{
    int x;
    int y;
    public:
    void display();
    friend class B;
};
class B 
{
    int p;
    int q;
    public: 
    void show();
    friend void A::display();
};
//#endif /* D0AAAC4D_45D3_4B90_A731_0DF36281A6F3 */
