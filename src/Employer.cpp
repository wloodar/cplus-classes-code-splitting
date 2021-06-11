#include "../include/Employer.h"
#include <iostream>
#include <string>

using namespace std;

Employer::Employer (string duty, int revenue) : duty (duty), revenue (revenue) {

}

void Employer::setEmployerDuty (string duty) {
    this -> duty = duty;
}

void Employer::setEmployerRevenue (int revenue) {
    this -> revenue = revenue;
}

void Employer::showEmployerData () {
    cout << "Funkcja: " << duty << "\n" << "Wynagrodzenie: " << revenue << "\n";
}