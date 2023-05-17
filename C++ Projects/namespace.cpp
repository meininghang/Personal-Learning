#include <iostream>


namespace first{
    int x = 1;
}
namespace second{
    int x = 2;
}

int main(){

    // int x = 0;
    // std::cout << x << std::endl;
    // std::cout << first::x << std::endl;
    // std::cout << second::x<< std::endl;

    using namespace first;
    using namespace std;
    // int x = 0;
    cout << x  <<endl;
    cout << second::x<< endl;

    return 0;
}