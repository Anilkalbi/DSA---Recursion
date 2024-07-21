#include<iostream>
using namespace std;
void funNew(int test)
{
    if(test<1)
    return ;
    else
    {
        cout<<test<<" ";
        funNew(test - 1);
        cout<<test<<" ";
        return ;
    }
} 
int main()
{
    int test=3;
    funNew(test);
}