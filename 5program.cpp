#include <iostream>
#include <cstring>  
using namespace std;

class MyString
{
    private:
        char str[50];

    public:
        
        MyString()
        {
            str[0] = '\0';  
        }
        
        void in()
        {
            cout << "Enter string: ";
            cin.getline(str, sizeof(str)); 
        }

        
        void show() const
        {
            cout << str << endl;
        }

    
        MyString operator+(const MyString& s) const
        {
            MyString temp;
            strcpy(temp.str, str);  
            strcat(temp.str, s.str);  
            return temp;
        }
};

int main()
{
    MyString s1, s2, s3;
    s1.in();
    s2.in();

    cout << "s1 = ";
    s1.show();

    cout << "s2 = ";
    s2.show();

    cout << "Concatenating s1 and s2 into s3..." << endl;
    s3 = s1 + s2;

    cout << "s3 = ";
    s3.show();
    return 0;  
}
