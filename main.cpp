#include <iostream>
#include <string>
#include <string_view>

std::string getName(int num)
{
    //talk to the user to enter the person's name, and get the number of the specified person
    std::cout << "Enter name of person #" << num << ":";
    std::string name{};
    std::getline(std::cin >> std::ws, name);

    return name;
}

int getAge(std::string_view namePerson)
{
    //talk to the user to enter the person's age
    std::cout << "Enter age of " << namePerson << ": ";
    int age{};
    std::cin >> age;
    
    return age;
}

void printOlderPerson(std::string_view name1, std::string_view name2, int age1, int age2)
{
    //If person 1 is older than which person 2, print this message
    if (age1 > age2)
    {
        std::cout << name1 << " (" << age1 << " anos) eres mais velho que " << name2 << " (" << age2 << " anos).\n";
    }
    //If person 2 is older than which person 1, print this message
    else if (age2 > age1)
    {
        std::cout << name2 << " (" << age2 << " anos) eres mais velho que " << name1 << " (" << age1 << " anos).\n";
    }
    //If person 1 and person 2 have same age, print this message
    else if (age1 == age2)
    {
        std::cout << name1 << " e " << name2 << " tem a mesma idade (" << age1 << " anos)\n";
    }
}

int main()
{
    //Get Name and Age of Person 1
    const std::string person1 {getName(1)};
    const int personAge1 {getAge(person1)};

    //Get name and Age of person 2
    const std::string person2 {getName(2)};
    const int personAge2 {getAge(person2)};

    //Print which person is older than the other
    printOlderPerson(person1, person2, personAge1, personAge2);

    //pause the code flow
    system("pause");

    return 0;
}
