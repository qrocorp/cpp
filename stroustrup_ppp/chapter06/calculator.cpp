#include "../lib_files/std_lib_facilities.h"

/* 電卓プログラム
 * ユースケース
 * Expression: 2+2
 * Result: 4
 * Expression: 2+2*3
 * Result: 8
 * スペースなしで入力された数式を計算して結果を表示する
 */

/* first-version - simple, but can't calculate * and -,
 * can't deal with operands more than 3, no error-test
int main()
{
    cout << "Expression (we can handle + -): ";
    int lval = 0;
    int rval;
    char op;
    int res;
    cin >> lval >> op >> rval;
    
    if(op == '+')
        res = lval + rval;
    else if(op == '-')
        res = lval - rval;
    cout << "Result: " << res << '\n';
    
    return 0;
}
*/

// second-version
int main()
{
    cout << "Expression (we can handle + - * /): ";
    cout << "add an x to end expression (e.g., 1+2*3;): ";

    int lval = 0;
    int rval;
    char op;
    cin >> lval;
    if(!cin) error("no first operand");

    while(cin>>op) {
        cin >> rval;
        if(!cin) error("no second operand");
        switch(op) {
            case '+':
                lval += rval;
                break;
            case '-':
                lval -= rval;
                break;
            case '*':
                lval *= rval;
                break;
            case '/':
                lval /= rval;
                break;
            default:
                cout << "Result " << lval << '\n';
                return 0;
        }
    }
    error("bad expression");
}

/* Problem
 * 入力がすこし複雑
 * 演算順序が考慮されない
 * 整数のみしか対応していない
 */
