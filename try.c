// p1 1
// #include <stdio.h>
// int main()
// {
//   int p1[50], c1[50], i;
//   char p[50], c[50];
//   printf("enter plain text: ");
//   scanf("%s", p);

//   for (i = 0; p[i] != '\0'; i++)

//   {

//     if (p[i] >= 97 && p[i] <= 122)

//     {

//       p1[i] = p[i] - 97;

//       c1[i] = (p1[i] + 3 + 26) % 26;

//       c[i] = c1[i] + 97;
//     }

//     if (p[i] >= 65 && p[i] <= 90)

//     {

//       p1[i] = p[i] - 65;

//       c1[i] = (p1[i] + 3 + 26) % 26;

//       c[i] = c1[i] + 65;
//     }

//     if (p[i] >= 48 && p[i] <= 57)

//     {

//       p1[i] = p[i] - 48;

//       c1[i] = (p1[i] + 3 + 10) % 10;

//       c[i] = c1[i] + 48;
//     }
//   }

//   c[i] = '\0';

//   printf("cipher text is %s", c);
//   return 0;
// }

// p1 2
// #include <stdio.h>

// int main()

// {

//   int c1[50], p1[50], i;

//   char c[50], p[50];

//   printf("Enter cipher text: ");
//   scanf("%s", c);

//   for (i = 0; c[i] != '\0'; i++)

//   {

//     if (c[i] >= 97 && c[i] <= 122)

//     {

//       c1[i] = c[i] - 97;

//       p1[i] = (c1[i] - 3 + 26) % 26;
//       p[i] = p1[i] + 97;
//     }

//     if (c[i] >= 65 && c[i] <= 90)

//     {

//       c1[i] = c[i] - 65;

//       p1[i] = (c1[i] - 3 + 26) % 26;
//       p[i] = p1[i] + 65;
//     }

//     if (c[i] >= 48 && c[i] <= 57)

//     {

//       c1[i] = c[i] - 48;

//       p1[i] = (c1[i] - 3 + 10) % 10;
//       p[i] = p1[i] + 48;
//     }
//   }

//   p[i] = '\0';

//   printf("plain text is %s", p);
//   return 0;
// }

// p1 3
// #include <stdio.h>
// int main()
// {

//   int p1[50], c1[50], k, i;

//   char p[50], c[50];

//   printf("enter k value ");
//   scanf("%d", &k);

//   printf("enter plain text ");
//   scanf("%s", p);

//   for (i = 0; p[i] != '\0'; i++)

//   {

//     if (p[i] >= 97 && p[i] <= 122)

//     {

//       p1[i] = p[i] - 97;

//       c1[i] = (p1[i] + k + 26) % 26;

//       c[i] = c1[i] + 97;
//     }

//     if (p[i] >= 65 && p[i] <= 90)

//     {

//       p1[i] = p[i] - 65;

//       c1[i] = (p1[i] + k + 26) % 26;

//       c[i] = c1[i] + 65;
//     }

//     if (p[i] >= 48 && p[i] <= 57)

//     {

//       p1[i] = p[i] - 48;

//       c1[i] = (p1[i] + k + 10) % 10;

//       c[i] = c1[i] + 48;
//     }
//   }

//   c[i] = '\0';

//   printf("cipher text is %s", c);
//   return 0;
// }

// p1 4
// #include <stdio.h>

// int main()
// {

//   int p1[50], c1[50], k, i;

//   char p[50], c[50];

//   printf("Enter k value: ");
//   scanf("%d", &k);

//   printf("Enter cipher text: ");
//   scanf("%s", c);

//   for (i = 0; c[i] != '\0'; i++)

//   {

//     if (c[i] >= 97 && c[i] <= 122)

//     {

//       c1[i] = c[i] - 97;

//       p1[i] = (c1[i] - k + 26) % 26;
//       p[i] = p1[i] + 97;
//     }

//     else if (c[i] >= 65 && c[i] <= 90)

//     {

//       c1[i] = c[i] - 65;

//       p1[i] = (c1[i] - k + 26) % 26;
//       p[i] = p1[i] + 65;
//     }

//     else if (c[i] >= 48 && c[i] <= 57)

//     {

//       c1[i] = c[i] - 48;

//       p1[i] = (c1[i] - k + 10) % 10;
//       p[i] = p1[i] + 48;
//     }

//     else

//     {

//       p[i] = c[i];
//     }
//   }

//   p[i] = '\0';

//   printf("Decrypted plain text is: %s\n", p);
//   return 0;
// }

// p2
// #include <stdio.h>
// int main()
// {

//   int p1[50], c1[50], i, j, k;
//   char p[50], c[50];

//   printf("enter cipher text:");
//   scanf("%s", c);
//   for (k = 0; k <= 25; k++)

//   {

//     for (j = 0; c[j] != '\0'; j++)

//     {

//       if (c[j] >= 97 && c[j] <= 122)

//       {

//         c1[j] = c[j] - 97;
//         p1[j] = ((c1[j] - k) + 26) % 26;
//         p[j] = p1[j] + 97;
//       }

//       if (c[j] >= 65 && c[j] <= 90)

//       {

//         c1[j] = c[j] - 65;
//         p1[j] = ((c1[j] - k) + 26) % 26;
//         p[j] = p1[j] + 65;
//       }
//     }

//     p[j] = '\0';

//     printf("\nplain text is %s", p);
//   }

//   return 0;
// }

// p3
// #include <stdio.h>

// int main()

// {

//   char p[50], c[50];
//   int i, j = 0;

//   printf("enter plain text: ");
//   scanf("%s", p);

//   for (i = 0; p[i] != '\0'; i = i + 2)

//   {

//     if (p[i] != '\0')

//     {

//       c[j] = p[i];
//       j++;
//     }
//   }

//   for (i = 1; p[i] != '\0'; i = i + 2)

//   {

//     if (p[i] != '\0')

//     {

//       c[j] = p[i];
//       j++;
//     }
//   }

//   c[j] = '\0';

//   printf("cipher text is %s ", c);
//   return 0;
// }

// p4
// #include <stdio.h>
// #include <math.h>

// float encrypt[3][1], a[3][3], b[3][3], mes[3][1], c[3][3];
// void encryption();

// void getKeyMessage();
// void main()
// {

//   getKeyMessage();
//   encryption();
// }

// void encryption()
// {
//   int i, j, k;

//   for (i = 0; i < 3; i++)
//   {
//     for (j = 0; j < 1; j++)
//     {

//       encrypt[i][j] = 0;
//       for (k = 0; k < 3; k++)
//       {

//         encrypt[i][j] += a[i][k] * mes[k][j];
//       }
//     }
//   }

//   printf("\nEncrypted string is: ");
//   for (i = 0; i < 3; i++)
//   {

//     printf("%c", (char)(fmod(encrypt[i][0], 26) + 97));
//   }

//   printf("\n");
// }

// void getKeyMessage()
// {
//   int i, j;

//   char msg[3];

//   printf("Enter 3x3 matrix for key:\n");
//   for (i = 0; i < 3; i++)
//   {

//     for (j = 0; j < 3; j++)
//     {
//       scanf("%f", &a[i][j]);

//       c[i][j] = a[i][j];
//     }
//   }

//   printf("\nEnter a 3-letter string: ");
//   scanf("%s", msg);

//   for (i = 0; i < 3; i++)
//   {
//     mes[i][0] = msg[i] - 97;
//   }
// }

// p5

// #include <stdio.h>
// #include <string.h>

// int main()
// {
//   char message[100], key[10];
//   int keyOrder[10];
//   int i, j, k = 0;

//   int msgLen, keyLen, rows;

//   printf("Enter the message: ");
//   scanf(" %[^\n]", message); // Read string with spaces

//   printf("Enter the numeric key: ");
//   scanf("%s", key);

//   msgLen = strlen(message);
//   keyLen = strlen(key);

//   for (i = 0; i < keyLen; i++)
//   {
//     keyOrder[i] = key[i] - '0';
//   }

//   rows = msgLen / keyLen;
//   if (msgLen % keyLen != 0)
//     rows += 1;

//   char matrix[rows][keyLen];
//   k = 0;

//   for (i = 0; i < rows; i++)
//   {
//     for (j = 0; j < keyLen; j++)
//     {
//       if (k < msgLen)
//         matrix[i][j] = message[k++];
//       else
//         matrix[i][j] = 'X'; // Padding
//     }
//   }

//   printf("Encrypted message: ");
//   for (int num = 1; num <= keyLen; num++)
//   {
//     for (j = 0; j < keyLen; j++)
//     {
//       if (keyOrder[j] == num)
//       {
//         for (i = 0; i < rows; i++)
//         {
//           printf("%c", matrix[i][j]);
//         }
//       }
//     }
//   }

//   printf("\n");
//   return 0;
// }

// p6
// #include <stdio.h>
// #include <string.h>
// #define SIZE 5

// char matrix[SIZE][SIZE];
// char toUpper(char ch)
// {

//   if (ch >= 'a' && ch <= 'z')
//     return ch - 32;

//   return ch;
// }

// int isAlphabet(char ch)
// {
//   ch = toUpper(ch);

//   return (ch >= 'A' && ch <= 'Z');
// }

// void prepareKey(char key[], char finalKey[])
// {
//   int i, j, k = 0;

//   int alpha[26] = {0};

//   for (i = 0; key[i] != '\0'; i++)
//   {
//     char ch = toUpper(key[i]);

//     if (ch == 'J')
//       ch = 'I';

//     if (isAlphabet(ch) && alpha[ch - 'A'] == 0)
//     {
//       finalKey[k++] = ch;

//       alpha[ch - 'A'] = 1;
//     }
//   }

//   for (i = 0; i < 26; i++)
//   {

//     if ((i + 'A') == 'J')
//       continue;
//     if (alpha[i] == 0)
//     {

//       finalKey[k++] = i + 'A';
//     }
//   }

//   finalKey[k] = '\0';
// }

// void fillMatrix(char finalKey[])
// {
//   int k = 0;

//   for (int i = 0; i < SIZE; i++)
//   {

//     for (int j = 0; j < SIZE; j++)
//     {
//       matrix[i][j] = finalKey[k++];
//     }
//   }
// }

// void findPosition(char ch, int *row, int *col)
// {
//   for (int i = 0; i < SIZE; i++)
//   {

//     for (int j = 0; j < SIZE; j++)
//     {
//       if (matrix[i][j] == ch)
//       {

//         *row = i;

//         *col = j;
//         return;
//       }
//     }
//   }
// }

// void encrypt(char message[])
// {
//   int len = strlen(message);
//   char result[100];

//   int k = 0;

//   for (int i = 0; i < len; i += 2)
//   {
//     char a = toUpper(message[i]);

//     char b = (i + 1 < len) ? toUpper(message[i + 1]) : 'X';
//     if (a == 'J')
//       a = 'I';

//     if (b == 'J')
//       b = 'I';

//     if (a == b)
//     {

//       b = 'X';

//       i--;
//     }

//     int row1, col1, row2, col2;
//     findPosition(a, &row1, &col1);
//     findPosition(b, &row2, &col2);
//     if (row1 == row2)
//     {

//       result[k++] = matrix[row1][(col1 + 1) % SIZE];
//       result[k++] = matrix[row2][(col2 + 1) % SIZE];
//     }
//     else if (col1 == col2)
//     {

//       result[k++] = matrix[(row1 + 1) % SIZE][col1];
//       result[k++] = matrix[(row2 + 1) % SIZE][col2];
//     }
//     else
//     {

//       result[k++] = matrix[row1][col2];
//       result[k++] = matrix[row2][col1];
//     }
//   }

//   result[k] = '\0';

//   printf("Encrypted Text: %s\n", result);
// }

// int main()
// {

//   char key[100], finalKey[26];
//   char message[100];
//   printf("Enter keyword: ");
//   gets(key);

//   prepareKey(key, finalKey);
//   fillMatrix(finalKey);

//   printf("Enter message to encrypt: ");
//   gets(message);

//   encrypt(message);
//   return 0;
// }

// p7
// #include <stdio.h>

// int findGCD(int a, int b)
// {
//   while (b != 0)
//   {

//     int temp = b;
//     b = a % b;

//     a = temp;
//   }

//   return a;
// }

// int main()
// {

//   int num1, num2, gcd;

//    printf("Enter two numbers: ");

//   scanf("%d %d", &num1, &num2);
//   gcd = findGCD(num1, num2);

//   printf("GCD of %d and %d is: %d\n", num1, num2, gcd);

//   return 0;
// }

// p8
// #include <stdio.h>
// #include <stdlib.h>
// #include <math.h>

// int checkPrime(int n)
// {
//   int i;

//   int m = n / 2;

//   for (i = 2; i <= m; i++)
//   {
//     if (n % i == 0)
//     {

//       return 0;
//     }
//   }

//   return 1;
// }

// int findGCD(int n1, int n2)
// {
//   int i, gcd;

//   for (i = 1; i <= n1 && i <= n2; ++i)
//   {
//     if (n1 % i == 0 && n2 % i == 0)

//       gcd = i;
//   }

//   return gcd;
// }

// int powMod(int a, int b, int n)
// {
//   long long x = 1, y = a;
//   while (b > 0)
//   {

//     if (b % 2 == 1)

//       x = (x * y) % n;
//     y = (y * y) % n;

//     b /= 2;
//   }

//   return x % n;
// }

// int main()
// {

//   int p, q, n, phin, data, cipher, decrypt;

//     while (1)
//   {

//     printf("Enter any two prime numbers: \n");
//     scanf("%d %d", &p, &q);

//     if (!(checkPrime(p) && checkPrime(q)))
//     {

//       printf("Both numbers are not prime. Please enter prime numbers only...\n");
//     }
//     else
//     {

//       break;
//     }
//   }

//   n = p * q;

//   phin = (p - 1) * (q - 1);
//   int e = 0;

//   for (e = 5; e <= 100; e++)
//   {
//     if (findGCD(phin, e) == 1)

//       break;
//   }
//   int d = 0;

//   for (d = e + 1; d <= 100; d++)
//   {
//     if (((d * e) % phin) == 1)

//       break;
//   }

//   printf("Value of e: %d\nValue of d: %d\n", e, d);
//   printf("Enter some numerical data: ", n);
//   scanf("%d", &data);

//   cipher = powMod(data, e, n);

//   printf("The cipher text is: %d\n", cipher);
//   decrypt = powMod(cipher, d, n);

//   printf("The decrypted text is: %d\n", decrypt);

//   return 0;
// }