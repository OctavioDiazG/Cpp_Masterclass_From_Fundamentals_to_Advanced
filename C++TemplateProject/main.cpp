#include <iostream>

consteval int get_value(){
    return 3;
}

int main(){
    constexpr int value = get_value();
    std::cout << "value : " << value << std::endl;
    return 0;
}




//Remember to Start VS Code with Developer PowerShell for VS runing the comand: code .