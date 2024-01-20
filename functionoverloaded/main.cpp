#include <iostream>

using namespace std;

class functionoverloading
{

public:
   ifelseprgrm()
    {
        int a;
        cout << "Enter the a value " << endl;
        cin >> a;
        if(a<10)
        {
        cout << "The given number is : " << a << endl;
        }
    }
    ifelseprgrm(int a , int b)
    {
        if(a<10 && b>20)
        {
            cout << "The number is : " << a << b << endl;
        }
    }
};
int main()
{
    functionoverloading fol , fol1;
    fol.ifelseprgrm();
    int a ,b;
    cout << "Enter the a value " << endl;
    cin >> a >> b;
    fol1.ifelseprgrm(int a , int b);

    return 0;
}

