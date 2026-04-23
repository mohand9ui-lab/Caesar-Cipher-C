
#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    // 1️⃣ التأكد أن المستخدم أدخل key واحد فقط
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    // 2️⃣ التأكد أن key عبارة عن أرقام فقط
    for (int i = 0; i < strlen(argv[1]); i++)
    {
        if (!isdigit(argv[1][i]))
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }

    // 3️⃣ تحويل key من string إلى int
    int key = atoi(argv[1]);

    // 4️⃣ أخذ النص من المستخدم
    string plaintext = get_string("plaintext: ");

    printf("ciphertext: ");

    // 5️⃣ تشفير النص
    for (int i = 0; i < strlen(plaintext); i++)
    {
        char c = plaintext[i];

        if (isupper(c))
        {
            printf("%c", (c - 'A' + key) % 26 + 'A');
        }
        else if (islower(c))
        {
            printf("%c", (c - 'a' + key) % 26 + 'a');
        }
        else
        {
            printf("%c", c);
        }
    }

    printf("\n");
    return 0;
}
