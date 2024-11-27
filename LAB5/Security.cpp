#include "Security.h"
Security::Security():User(), login(""), password("") {}

Security::Security(string Name, string Surname, string Patr, string Email, tm Date, string Phone, string Login, string Password)
    : User(Name, Surname, Patr, Email, Date, Phone), login(Login), password(Password) {}

Security::~Security() {}

string Security::getLogin() {
    return login;
}

void Security::setLogin(string Login) {
    login = Login;
}

string Security::getPassword() {
    return password;
}

void Security::setPassword(string Password) {
    password = Password;
}

void Security::displaySecurityInfo() {
    cout << "User Information:" << endl;
    cout << "Full Name: " << fullName() << endl;  
    cout << "Email: " << getEmail() << endl;      
    cout << "Phone: " << getPhoneNumber() << endl;
    cout << getBirth().tm_year << " " << getBirth().tm_mon << " " << getBirth().tm_mday << endl;
    cout << "Login: " << login << endl;
    cout << "Password: " << password << endl;
}