#include <iostream>

using namespace std;

int top = -1;
int top2 = -1;

char stack[5];
char stack2[5];

void push(char *str)
{
    if (top <= 4)
    {
        int i = 0;
        while (str[i] != '\0')
        {
            stack[++top] = str[i];
            i++;
        }
    }
}

void pop(int n)
{
    if (top >= 0)
    {
        int i = n;
        while (i != 0)
        {
            stack2[++top2] = stack[top--];
            i--;
        }
    }
}

void display2()
{
    for (int i = 0; i <= top2; i++)
    {
        cout << stack2[i];
    }
    cout << endl;
}

int main()
{
    char str[50];
    int n;
    int choice;
    do
    {
        cout << "Enter choice" << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            cin >> str >> n;
            push(str);
            break;
        case 2:
            pop(n);
            break;
        case 3:
            display2();
            break;
        case 5:
            cout << "Exiting";
            break;
        default:
            ("invalid input");
        }
    } while (choice != 5);

    return 0;
}