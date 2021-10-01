/*  unary operator ==== a=-b;
    binary operator==== a=b+x; (when two variable are added it means binary )
*/
#include<iostream>
using namespace std;
class counter
{
private:
    int count1;
public:
    counter()
    {
        count1=0;

    }
    int get()
    {
        return count1;
    }
    //when we assign value we used class instead of void so here we use operator is keyword which we used for this function
    counter operator++()
    {
        count1=count1+1;
        counter temp;
        temp.count1=count1;
        return temp; //object return
    }
};

int main()
{
    counter c1,c2;
    cout<<c1.get()<<endl;
    cout<<c2.get()<<endl;
    ++c1;
    c2=++c1; //for assigning value
    cout<<c1.get()<<endl;
    cout<<c1.get()<<endl;


}
