#include <iostream>
#include <string>
using namespace std;

class Person
{
private:
    string name;
    int age;

public:
    Person(string initName, int initAge)
    {
        name = initName;
        age = initAge;
    }

    void setValues(string newName, int newAge)
    {
        name = newName;
        age = newAge;
    }

    void displayValues() 
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main()
{
    Person person("ALI", 25);
    person.displayValues();
    person.setValues("ZAIN", 30);
    person.displayValues();
    return 0;
}
