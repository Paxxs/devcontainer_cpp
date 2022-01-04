#include <iostream>
#include <string>

using namespace std;

int main()
{
    cout << "😉 Hello World 你好世界\n";
    cout << "Input:___\b\b\b";
    string data;
    getline(cin, data);
    cout << "Output: " << data << "\n\n";
    return 0;
}