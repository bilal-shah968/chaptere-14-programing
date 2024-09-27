#include <iostream>
using namespace std;

class Add
{
  private:
    int a, b;

  public:
    
    Add()
    {
        a = b = 0;
    }

    
    void in()
    {
        cout << "Enter a: ";
        cin >> a;
        cout << "Enter b: ";
        cin >> b;
    }

    
    void show() const
    {
        cout << "a = " << a << endl;
        cout << "b = " << b << endl;
    }

    
    Add operator +(const Add& p)
    {
        Add temp;
        temp.a = p.a + a;
        temp.b = p.b + b;
        return temp;
    }
};

int main()
{
    Add x, y, z;
    x.in();    
    y.in();    

    z = x + y; 

    cout << "Values of x:" << endl;
    x.show();  

    cout << "Values of y:" << endl;
    y.show();  

    cout << "Sum (z = x + y):" << endl;
    z.show();  

    return 0;
}
