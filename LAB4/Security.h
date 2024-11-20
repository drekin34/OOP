#pragma once
#include "User.h"
class Security : private User
{
private:
    string login;
    string password;

public:
    Security();
    Security(string Name, string Surname, string Patr, string Email, tm Date, string Phone, string Login, string Password);
    ~Security();

    string getLogin();
    void setLogin(string Login);

    string getPassword();
    void setPassword(string Password);


    void displaySecurityInfo();
};

