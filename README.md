
# Caesar Cipher - CS50x Project

## 📌 Description
This is a C program that encrypts messages using Caesar's cipher. The program takes a command-line argument (a secret key) and shifts each letter of the user's text by that number of positions in the alphabet, while preserving the case and non-alphabetical characters.

This project was completed as part of Harvard University's **CS50x: Introduction to Computer Science**.

## 🚀 How it Works
The program follows these logical steps:
1. Validates the command-line argument to ensure a single numeric key is provided.
2. Converts the string key into an integer.
3. Prompts the user for a `plaintext` message.
4. Iterates through each character, applying the encryption formula:
   - For uppercase: `(plaintext[i] - 'A' + key) % 26 + 'A'`
   - For lowercase: `(plaintext[i] - 'a' + key) % 26 + 'a'`
5. Outputs the final `ciphertext`.

## 🛠 Skills & Technologies
* **Language:** C
* **Concepts:** Command-line arguments, String manipulation, ASCII math, Modular arithmetic, and Data validation.
* **Libraries:** `stdio.h`, `cs50.h`, `ctype.h`, `string.h`.

## 💻 Usage
To run this program, compile it and provide a numeric key as an argument:
```bash
make caesar
./caesar 13
