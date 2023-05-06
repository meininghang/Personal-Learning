#include <iostream>

int main(){
    int x; //declaration
    x = 5; //assignment
    int y = 6;

    int sum = x + y;

    std::cout << x << std::endl;
    std::cout << y << std::endl;
    std::cout << sum << std::endl;

    std::cout << x << "\t" << y << std::endl;

    //double
    double price = 10.99;
    double gpa = 2.5;
    double temperature = 25.1;
    std::cout << price << std::endl;

    //char
    char grade = 'A';
    char initial = 'B';
    std::cout << initial << std::endl;

    //boolean
    bool student = false;
    bool power = false;
    bool forSale = true;

    //string
    std::string name = "Bro";
    std::string food = "Pizza";


    std::cout << name << std::endl;
    std::cout << "Hello " << name << std::endl;
    return 0;
}