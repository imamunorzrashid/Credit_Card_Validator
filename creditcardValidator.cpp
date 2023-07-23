#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class ccValidatorr {
    private:
        string ccNumber;

    public:
        ccValidatorr(const string& ccNumber) : ccNumber(ccNumber) {}

        void sanitizeCardNumber() {
            string sanitizedNumber;
            for (char ch : ccNumber) {
                if (isdigit(ch)) {
                    sanitizedNumber += ch;
                }
            }
            ccNumber = sanitizedNumber;
        }

        bool isValid() const {
            int sum = 0;
            bool doubleDigit = false;

            for (int i = ccNumber.length() - 1; i >= 0; --i) {
                int digit = ccNumber[i] - '0';

                if (doubleDigit) {
                    digit *= 2;
                    if (digit > 9) {
                        digit -= 9;
                    }
                }

                sum += digit;
                doubleDigit = !doubleDigit;
            }

            return sum % 10 == 0;
        }
    
};

int main() {
    string ccNumber;
    
    while (true) {
        cout << "Enter Credit Card Number (or type 'Exit' to quit): ";
        cin >> ccNumber;

        transform(ccNumber.begin(), ccNumber.end(), ccNumber.begin(), ::tolower);

        if (ccNumber == "exit") {
            break;
        }

        ccValidatorr validator(ccNumber);
        validator.sanitizeCardNumber();

        
        if (!validator.isValid()) {
            cout << "Invalid credit card number." << endl;
        } else {
            cout << "The credit card number is valid!" << endl;
            break;
        }
    }

    return 0;
}
