#include <iostream>
#include <string>

bool canSayHello(const std::string& s) {
    std::string hello = "hello";
    int helloIndex = 0;

    for (char ch : s) {
        if (ch == hello[helloIndex]) {
            helloIndex++;
            if (helloIndex == hello.size()) {
                return true; // Vasya managed to say hello
            }
        }
    }

    return false; // Vasya didn't manage to say hello
}

int main() {
    std::string s;
    std::cin >> s;

    if (canSayHello(s)) {
        std::cout << "YES" << std::endl;
    } else {
        std::cout << "NO" << std::endl;
    }

    return 0;
}
