# Credit_Card_Validator


## Introduction

The project "Credit Card Validator using Luhn Algorithm" is an object-oriented C++ program that offers a quick and effective way to validate credit card numbers. Based on a credit card number's structure and digits, the computer uses the Luhn Algorithm, a popular checksum technique, to assess its validity.

The Luhn Algorithm is a checksum formula used to validate a variety of identification numbers, including credit card numbers. It's a straightforward and effective technique for detecting errors in the credit card number, but it doesn't verify whether the card is active or if the transaction can be processed successfully.

## How it Works

1. The program prompts the user to enter a credit card number or type 'Exit' to quit.

2. The input credit card number is sanitized to remove any non-digit characters, leaving only the digits for further processing.

3. The Luhn Algorithm is then applied to the sanitized credit card number. It calculates a checksum by doubling every other digit from the right (starting with the second-to-last digit) and subtracting 9 from the doubled value if it is greater than 9. It then sums up all the resulting digits.

4. If the checksum obtained in the previous step is divisible by 10 (i.e., the sum % 10 == 0), the credit card number is considered valid. Otherwise, it is deemed invalid.

5. The program provides appropriate feedback to the user, indicating whether the credit card number is valid or if there is an issue with the input length or the Luhn Algorithm validation.

## Usage

1. Clone the repository to your local machine using the following command:

   ```
   git clone https://github.com/yourusername/credit-card-validator.git
   ```

2. Change directory to the project folder:

   ```
   cd credit-card-validator
   ```

3. Compile the C++ code using your preferred C++ compiler.

4. Run the executable and follow the on-screen instructions to input credit card numbers for validation.

## Sample Output

```
Enter Credit Card Number (or type 'Exit' to quit): 46546546464646
Invalid credit card number.

Enter Credit Card Number (or type 'Exit' to quit): 79927398713
The credit card number is valid!
```


## Notes

- The Credit Card Validator using Luhn Algorithm provides a basic validation mechanism. For real-world applications, additional security checks, such as verification of the issuing bank, expiration date, and security code (CVV/CVC), should be implemented to ensure robust credit card validation.

- The program does not store or transmit any credit card information, ensuring the security and privacy of user data.
