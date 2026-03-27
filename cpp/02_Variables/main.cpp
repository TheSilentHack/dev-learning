#include <iostream>

int main() {

    int age = 13;
    int year = 2026;
    int days = 7.5; // truncated to 7, because we affected 7.5 to an integer variable

    double price = 10.99;
    double size = 1.68;
    double temperature = 22;

    char grade = 'A';
    char initial = 'B';
    char currency = '$';

    bool student = true;
    bool power = true;
    bool forSale = false;

    std::string name = "TheSilenHack";
    std::string day = "Tuesday";
    std::string food = "ice cream";
    std::string address = "The Universe";

    std::cout << "Hello " << name << " !" << std::endl;
    std::cout << "I'm " << age << " years old !" << std::endl;

    return 0;
}