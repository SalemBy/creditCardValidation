#include <iostream>

int getDigit(const int NUMBER);
int sumOddDigits(const std::string CARD_NUMBER);
int sumEvenDigits(const std::string CARD_NUMBER);



int main() {

    std::string cardNumber;
    int result = 0;

    std::cout << "Enter a credit card number: ";
    std::cin >> cardNumber;

    result = sumEvenDigits(cardNumber) + sumOddDigits(cardNumber);

    if(result % 10 == 0) {

        std::cout << "Card Number is valid";
    }
    else {
        std::cout << "Card number is not valid ";

    }


    return 0;
}

int getDigit(const int NUMBER) {

    return NUMBER % 10 + (NUMBER / 10 % 10);

}

int sumOddDigits(const std::string CARD_NUMBER) {

    
    int sum = 0;

    for(int i = CARD_NUMBER.size() - 1; i >= 0; i-=2) {
        sum += CARD_NUMBER[i] - '0';

    }

    return sum;


}

int sumEvenDigits(const std::string CARD_NUMBER) { 

    int sum = 0;

    for(int i = CARD_NUMBER.size() - 2; i >= 0; i-=2) {
        sum += getDigit((CARD_NUMBER[i] - '0' )* 2);

    }

    return sum;

}


