#include <string>
#include <iostream>

using namespace std;

namespace calculator {

    template<class T>
    T add(T x, T y){
        return x + y;
    }

    template<class T>
    T substract(T x, T y){
        return x - y;
    }

    template<class T>
    T multiply(T x, T y){
        return x * y;
    }

    template<class T>
    T divide(T x, T y){
        return x / y;
    }

    void printMenu(){
        cout << "Calculator: \n";
        cout << "\t(C)alculate\n";
        cout << "\t(Q)uit\n";
    }

    void printCalculateMenu(){
        cout << "\t(A)dd\n";
        cout << "\t(S)ubstract\n";
        cout << "\t(M)ultiply\n";
        cout << "\t(D)ivide\n";
        cout << "\t(Q)uit\n";
    }

    template<class T>
    T getOperand(){
        cout << "Operand: ";
        T operand;
        cin >> operand;
        return operand;
    }

    char getOperation(){
        cout << "Operation: ";
        char operation;
        cin >> operation;
        return operation;
    }

    template<class T>
    void getInput(bool oneline, T& op1, T& op2, char& op){
        if(oneline){
            cout << "One line operation: ";
            cin >> op1 >> op >> op2;
        }
        else{
            op1 = getOperand<T>();
            op = getOperation();
            op2 = getOperand<T>();
        }
    }

    template<class T>
    void doCalculation(bool oneline){
        T op1, op2;
        char op;
        getInput<T>(oneline, op1, op2, op);
        switch(op){
            case 'a':
            case 'A':
            case '+': {
                T result = add<T>(op1, op2);
                printResult(op1, op2, op, result);
                break;
            }
            case 's':
            case 'S':
            case '-': {
                T result = substract<T>(op1, op2);
                printResult(op1, op2, op, result);
                break;
            }
            case 'm':
            case 'M':
            case '*': {
                T result = multiply<T>(op1, op2);
                printResult(op1, op2, op, result);
                break;
            }
            case 'd':
            case 'D':
            case '/': {
                T result = divide<T>(op1, op2);
                printResult(op1, op2, op, result);
                break;
            }
            case 'q':
            case 'Q': {
                break;
            }
            default: {
                cout << "Invalid operation: " << op << '\n';
                break;
            }
        }
    }

    template<class T>
    void printResult(T op1, T op2, char op, T result){
        cout << op1 << " " << op << " " << op2 << " = " << result << endl;
    }

    void calculate(){
        char operandType;
        bool oneline = false;
        printCalculateMenu();
        do{
            cout << "Calculation menu - Operand type (i - int, d - double, q - quit): ";
            cin >> operandType;
            if(operandType != 'q' && operandType != 'Q'){
                cout << "Calculation menu - one line input? (1 - true, 0 - false): ";
                cin >> oneline;
                switch(operandType){
                    case 'i': {
                        doCalculation<int>(oneline);
                        break;
                    }
                    case 'd': {
                        doCalculation<double>(oneline);
                        break;
                    }
                    case 'q':
                    case 'Q':
                        break;
                    default: {
                        cout << "Invalid operand type: " << operandType << '\n';
                        break;
                    }
                }
            }
        }
        while(operandType != 'q' && operandType != 'Q');
    }

    void operate(){
        printMenu();
        char cmd;
        do{
            cout << "Main menu - Command: ";
            cin >> cmd;
            switch(cmd){
                case 'c':
                case 'C':
                    calculate();
                    break;
                case 'q':
                case 'Q':
                    cout << "Exiting...\n";
                    break;
                default:
                    cout << "Invalid command: " << cmd << '\n';
                    break;
            }
        }
        while(cmd != 'q' && cmd != 'Q');
    }

}

int main ()
{
    using namespace calculator;
    operate();

    return 0;
}
