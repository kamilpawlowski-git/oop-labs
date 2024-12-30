#include <iostream>

class Student {
private:
    std::string m_name;
    int m_age;

public:
    void setAge(int a) {
        if(a >= 0)
            m_age = a;
    }
    int getAge() const {
        return m_age;
    }
    void setName(std::string n) {
        if(!n.empty())
            m_name = n;
    }
    std::string getName() const {
        return m_name;
    }
};

int main()
{
    Student student1;
    student1.setAge(21);
    student1.setName("Kamil");

    Student student2;
    student2.setAge(30);
    student2.setName("Martyna");

    //proba dania ujemego wieku:
    student1.setAge(-2);

    //proba dania pustej nazwy
    student1.setName("");
    
    std::cout << student2.getAge() << std::endl;
    std::cout << student2.getName() << std::endl;

    std::cout << student1.getAge() << std::endl;
    std::cout << student1.getName() << std::endl;




}