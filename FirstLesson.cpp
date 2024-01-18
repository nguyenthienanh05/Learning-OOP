#include <iostream>
#include <string>


using namespace std;

class AbstractEmployee {
    virtual void askForPromotion() = 0;
};

class Employee:AbstractEmployee {
private:
    string Name;
    string Company;
    int Age;

public:
    void setName(string name) {//setter
        Name = name;
    }
    string getName() {//getter
        return Name;
    }
    void setCompany(string company) {
        Company = company;
    }
    string getCompany() {
        return Company;
    }
    void setAge(int age) {
        if (age >= 18)
            Age = age;
    }
    int getAge() {
        return Age;
    }

    //Constructor does not have return type
    //Constructor must have the same name as the class
    //Constructor should be public
    void introduceYourself() {
        cout << "Name - " << Name << endl;
        cout << "Company - " << Company << endl;
        cout << "Age - " << Age << endl;
    }
    Employee(string name, string company, int age) {
        Name = name;
        Company = company;
        Age = age;
    }
    void askForPromotion() {
        if (Age > 30)
            cout << Name << " got promoted!" << endl;
        else
            cout << Name << ", sorry NO promotion for you!" << endl;
    }
};

int main() {
    Employee employee1 = Employee("Thien Anh", "FromSoftware", 18);
    employee1.introduceYourself();

    Employee employee2 = Employee("John", "331st Baker Street", 35);
    employee2.introduceYourself();

    employee1.setAge(15);
    cout << employee1.getName() << " is " <<  employee1.getAge() << " years old" << endl;

    employee1.askForPromotion();
    employee2.askForPromotion();
    return 0;
}