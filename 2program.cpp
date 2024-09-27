#include <iostream>
using namespace std;

class count
{
    private:
    int n;
    
    public:
    
    count()
    {
        n = 0;
    }

    
    void show()
    {
        cout << "n = " << n << endl;
    }

    
    count operator++()
    {
        ++n;  
        return *this; 
    }
};

int main()
{
    count x, y;
    x.show(); 
    y.show(); 
    y = ++x;   
    x.show();  
    y.show();  
    return 0;  
}
