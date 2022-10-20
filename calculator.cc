#include <iostream>
using namespace std;

int main()
{
    int n, i;
    float num[1000], sum=0.0, subtract=0.0, multi=0.0, sums=0.0;average;
    char op; 

    cout << "Enter the numbers of data: ";
    cin >> n;

    while (n > 1000 || n <= 0)
    {
        cout << "Error! number should in range of (1 to 1000)." << endl;
        cout << "Enter the number again: ";
        cin >> n;
    }
  
    cout << "Enter an arithemetic operator(+ - * /)\n";
    cin >> op; 
  
  
  switch(op) {
        case '+': 
               for(i = 0; i < n; ++i)
                {
                cout << i + 1 << ". Enter number: ";
                cin >> num[i];
                sums += num[i];
                }
                cout << "Sum = " << sums;
                break;
        case '-':
               for(i = 0; i < n; ++i)
                {
                cout << i + 1 << ". Enter number: ";
                cin >> num[i];
                subtract -= num[i];
                }
                cout << "Subtraction = " << subtract;
                break;
        case '*':
                for(i = 0; i < n; ++i)
                {
                cout << i + 1 << ". Enter number: ";
                cin >> num[i];
                multi *= num[i];
                }
                cout << "Multiplication = " << multi;
                break;
        case '%':
                for(i = 0; i < n; ++i)
                {
                cout << i + 1 << ". Enter number: ";
                cin >> num[i];
                sum += num[i];
                }
                average = sum / n;
                cout << "Average = " << average;
        default: 
                printf("ERROR: Unsupported Operation");
    }

    return 0;
}
