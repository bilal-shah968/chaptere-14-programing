#include <iostream>
using namespace std;

class read
{
    private:
        int days, pages;
    
    public:
        read() 
        {
            days = pages = 0; 
        }

        void in()
        {
            cout << "How many days have you read? ";
            cin >> days;
            cout << "How many pages have you read? ";
            cin >> pages;
        }

        void show()
        {
            cout << "You have read " << pages << " pages in " << days << " days." << endl;
        }

        void operator += (read r)
        {
            days = days + r.days;
            pages = pages + r.pages; 
        }
};

int main() 
{
    read r1, r2;
    r1.in();
    r2.in();
    cout << "\nReading number 1 ..." << endl;
    r1.show();
    cout << "\nAdding r1 to r2 using += operator..." << endl;
    r2 += r1;
    cout << "\nTotal reading is as follows:" << endl;
    r2.show();
    return 0;
}
