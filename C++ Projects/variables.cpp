#include <iostream>

int main(){
    float annualSalary;// = 50000.99;
    std::cout << "Please enter your annua salary: ";
    std::cin >> annualSalary;

    float monthlySalary = annualSalary / 12;

    std::cout << "Your monthly salary is " << monthlySalary << std::endl;
    std::cout << "In 10 years you will earn " << annualSalary * 10 << std::endl ;
    
    char character = 'a';
    
    return 0;
}