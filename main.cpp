#include <iostream>
using namespace std;

int main() {
    // 第一部分：印出星號金字塔
    for (int i = 1; i <= 6; ++i) {
        for (int j = 1; j <= i; ++j) {
            cout << "*";
        }
        cout << endl;
    }

    cout << endl;  // 分隔兩部分

    // 第二部分：印出九九乘法表
    for (int i = 1; i <= 9; ++i) {
        for (int j = 1; j <= 9; ++j) {
            cout << i << " * " << j << " = " << i * j << "\t";
        }
        cout << endl;
    }

    return 0;
}
