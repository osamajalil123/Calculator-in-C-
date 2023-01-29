# include <iostream>
using namespace std;

int main() 

{
//Variable Declaration
  char op;
  float num1, num2;

  cout << "Enter the operator: + , - , * , / : ";
  cin >> op;

  cout << "Enter two operands: ";
  cin >> num1 >> num2;

  switch(op) 
  
  {

    case '+':
      cout << num1 << " + " << num2 << " = " << num1 + num2;
      break;

    case '-':
      cout << num1 << " - " << num2 << " = " << num1 - num2;
      break;

    case '*':
      cout << num1 << " * " << num2 << " = " << num1 * num2;
      break;

    case '/':
      cout << num1 << " / " << num2 << " = " << num1 / num2;
      break;

    default:
      // If the user enter the wrong operator then it will show the error
      cout << "Error! operator is not correct";
      break;
  }

  return 0;
}
