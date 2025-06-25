#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    vector<string> msg{"Hello", "World"};

    for (const string& word : msg) {
        cout << word << " ";
    }
    cout << endl;

    std::cout << "Enter a Number: ";
    int x{};
    std::cin >> x;
    std::cout << "You entered " << x << '\n';

    return 0;
}
