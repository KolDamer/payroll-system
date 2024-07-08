#include <iostream>
#include <string>

int main() {
    std::string name;
    double hourlyRate, hoursWorked, pay;

    // Get employee information
    std::cout << "Enter employee name: ";
    std::getline(std::cin, name);

    std::cout << "Enter hourly rate: ";
    std::cin >> hourlyRate;

    std::cout << "Enter hours worked: ";
    std::cin >> hoursWorked;

    // Calculate pay
    pay = hourlyRate * hoursWorked;

    // Display payroll
    std::cout << "Weekly payroll for " << name << ": $" << pay << std::endl;

    return 0;
}