#include <iostream>
#include <string>
#include <map>

int main() {
    std::map<char, char> letter_to_digit{
        {'A', '2'}, {'B', '2'}, {'C', '2'},
        {'D', '3'}, {'E', '3'}, {'F', '3'},
        {'G', '4'}, {'H', '4'}, {'I', '4'},
        {'J', '5'}, {'K', '5'}, {'L', '5'},
        {'M', '6'}, {'N', '6'}, {'O', '6'},
        {'P', '7'}, {'Q', '7'}, {'R', '7'}, {'S', '7'},
        {'T', '8'}, {'U', '8'}, {'V', '8'},
        {'W', '9'}, {'X', '9'}, {'Y', '9'}, {'Z', '9'}
    };

    std::string phone_number;
    std::cin >> phone_number;

    for (char c : phone_number) {
        if (letter_to_digit.count(c)) {
            std::cout << letter_to_digit[c];
        } else {
            std::cout << c;
        }
    }

    std::cout << std::endl;

    return 0;
}
