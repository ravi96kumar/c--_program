#include<stdio.h>
struct name
{
    int aa;
    int bb;
    //struct dob S;
};
struct emp
{
    int id;
    float salary;
    char dept;
    struct dob
    {
        int dd;
        int mm;
        int yy;
    }D;
    struct name N;
}E;
int main()
{
    struct dob A;
    struct emp X={1,2500,'h',{12,3,1998}};
    X.D.dd=12;
    X.id=1;
    A.dd=12;
    E.N.aa=12;
  //  E.N.S.dd=12;
    return 0;
}