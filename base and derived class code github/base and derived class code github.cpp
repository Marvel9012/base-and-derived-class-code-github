#include<iostream>
using namespace std;

class base
{
    char* _firstname;
public:
    base()
    {
        _firstname = new char[80];
        strcpy(_firstname, "PREETHI INDARAPU");
    }
    virtual ~base()
    {
        delete[] _firstname;
    }
    virtual void dis()
    {
        cout << _firstname << ",";
    }
};
class derived :public base
{
    char* _lastname;
public:
    derived()
    {
        _lastname = new char[80];
        strcpy(_lastname, "SRAVANI KOYYANI");
    }
    ~derived()
    {
        delete[] _lastname;
    }
    void dis()
    {
        base::dis();
        cout << _lastname << endl;
        cout << "india" << endl;
    }

};
int main()
{
    base* ptr = new derived;

    ptr->dis();

}