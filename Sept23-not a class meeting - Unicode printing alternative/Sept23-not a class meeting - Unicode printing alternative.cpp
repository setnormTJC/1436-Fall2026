#include <iostream>
#include <windows.h>

int main() {
    // Sets standard output stream to process raw UTF-8 bytes
    SetConsoleOutputCP(CP_UTF8); //CP -> "code page"
    //UTF -> unicode transformation format? Unicode -> 64 bits -> 2^64 chars possible

    // Standard cout and regular string literals work fine
    std::cout << "日本語" << std::endl;
    std::cout << "Tiếng Việt" << "\n";
    std::cout << "🌭😭" << "\n";
    return 0;
}