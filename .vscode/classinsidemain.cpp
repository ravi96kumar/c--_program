#include<iostream>
using namespace std;
int main()
{
    class A
    {
        int x;
        int y;
        public:
        void display()
        {
           
           x=20;
           y=30;
          cout<<x<<"  "<<y<<endl;
        }
        

    };
    A a;
    a.display();

}
/*void A::display()
{
   
    x=20;
    y=30;
    cout<<x<<" "<<y<<endl;
 
}*/
