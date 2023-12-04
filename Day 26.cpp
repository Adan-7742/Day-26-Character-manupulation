//=======================================================================================================
//                                                                                                      =
//............................Character manupulation....................................................=
//                                                                                                      =
//=======================================================================================================

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

//========================================================================================================
//....................................isalnum.............................................................

// checing character using char

int ch() {

    char ch = 'a';
    if (isalnum(ch)) {
        std::cout << "Character '" << ch << "' is alphanumeric." << std::endl;
    }
    else {
        std::cout << "Character '" << ch << "' is not alphanumeric." << std::endl;
    }


    return 0;

} 
//=========================================================================
// checking character using string 
string st() {


    std::string username;
    username = "My name is adan";

    bool validUsername = true;
    for (char c : username) {
        if (!isalnum(c) && c != '_') {
            validUsername = false;
            break;
        }
    }

    if (validUsername) {
        std::cout << "Username '" << username << "' is valid." << std::endl;
    }
    else {
        std::cout << "Username '" << username << "' is invalid. Please use only alphanumeric characters and underscores." << std::endl;
    }
    return 0;
}
//=====================================================================================================================================
//......................................................isalpha....................................................................


int na() {
    char letter = 'a';

    if (isalpha(letter)) {
        std::cout << "Character '" << letter << "' is an alphabetic letter." << std::endl;
    }
    else {
        std::cout << "Character '" << letter << "' is not an alphabetic letter." << std::endl;
    }


    return 0;


}

//=========================================================================================================
int pass() {

    std::string password;
    std::cout << "Enter your password: ";
    std::getline(std::cin, password);

    bool validPassword = false;

    for (char c : password) {
        if (isalpha(c)) {
            validPassword = true;
            break;
        }
    }

    if (validPassword) {
        std::cout << "Password is valid (contains at least one letter or digit)." << std::endl;
    }
    else {
        std::cout << "Password is invalid (must contain at least one letter or digit)." << std::endl;
    }
    return 0;
}



//========================================================================================================
//....................................isblank.............................................................
int blank() {


    char ch = ' ';
    if (isblank(ch)) {
        std::cout << "The character '" << ch << "' is a blank character." << std::endl;
    }
    else {
        std::cout << "The character '" << ch << "' is not a blank character." << std::endl;
    }
    return 0;
}

int blank_0() {

    std::string str = "This string has some blank characters.";
    std::string filteredStr;

    for (char ch : str) {
        if (!isblank(ch)) {
            filteredStr.push_back(ch);
        }
    }

    std::cout << "The filtered string is: " << filteredStr << std::endl;
    return 0;
}
//=====================================================================================
//..............................isspace................................................

int count_blanks(const std::string& str) {
    int blank_count = 0;
    for (char c : str) {
        if (isspace(c)) { // Checks if character is whitespace (includes blank characters)
            blank_count++;
        }

    }
    return 0;
}
//-----------------------------------------------------------------------------------------------
//  ...........................Code for replacing value of string space by "_"   ..............
int re() {


    std::string str;
    std::string str2;

    // Get input from user
    std::cout << "Enter a line of text: ";
    std::getline(std::cin, str);

    // Loop through characters and replace spaces with dashes
    for (char c : str) {
        if (c == ' ') {
            c = '-';
        }
        str2 += c;
    }

    // Print the modified string
    std::cout << "Modified string: " << str2 << std::endl;

    return 0;
}

int up() {


    char ch = 'a';
    if (islower(ch)) {
        printf("Character %c is lowercase.\n", ch);
    }
    return 0;
}
int up1() {
    char ch = 'B';
    if (isupper(ch)) {
        printf("Character %c is uppercase.\n", ch);
    }
    return 0;
}


int main()
{
    ch();
    st();
    na();
    pass();
    blank();
    blank_0();


    std::string input = "This string has 3 blank spaces.";
    int blank_count = count_blanks(input);
    std::cout << "The string '" << input << "' has " << blank_count << " blank spaces." << std::endl;
   
    re();
    up();
    up1();
}
