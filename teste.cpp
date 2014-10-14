#include <iostream>

using namespace std;

int main()
{
    int num1 = 0;
    int num2 = 1;
    int num_temp;
    int num_next = 1;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        cout << num_next << "  ";
        num_next = num1 + num2;
        num1 = num2;
        num_temp = num2;
        num2 = num_next - num1;
        num1 = num_temp;
		print
    }
    return 0;
}