#include <iostream>
#include <set>
#include <sstream>
#include <string>
using namespace std;

int main() {
    set<char> mySet;
    string input;

    getline(cin, input);

    // Extracting characters between '{' and '}'
    string elements = input.substr(input.find('{') + 1, input.find('}') - input.find('{') - 1);

    // Using stringstream for parsing individual characters
    stringstream ss(elements);
    string element;
    while (getline(ss, element, ',')) {
        // Removing leading and trailing whitespaces
        element.erase(0, element.find_first_not_of(' '));
        element.erase(element.find_last_not_of(' ') + 1);

        // Extracting the first character
        char value = element[0];

        mySet.insert(value);
    }
    int len=mySet.size();
    cout << len<<endl;


    return 0;
}
