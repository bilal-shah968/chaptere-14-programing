#include <iostream>
using namespace std;
class Count
{
    private:
        int n;

    public:
        
        Count() : n(0) {}
        
        void show() const
        {
            cout << "n = " << n << endl;
        }

    
        Count& operator++()  
        {
            ++n;
            return *this;
        }


        Count operator++(int)  
        {
            Count temp = *this;  
            n++;               
            return temp;        
        }
};

int main()
{
    Count x;

    x.show();   

    
    Count y = x++; 

    x.show();    
    y.show();   

    return 0;
}
