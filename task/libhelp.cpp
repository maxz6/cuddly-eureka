#include <iostream>
#include <cstdlib>
#include <string>

void getHelp() {
    const char* author_ptr = std::getenv("AUTHOR");
    const char* ver_ptr = std::getenv("VERSION");
    const char* desc_ptr = std::getenv("DESCRIPTION");
    if (author_ptr) {
        std::string author = author_ptr;
        std::cout << "AUTHOR: " << author << '\n';
    } else {
        std::cerr << "AUTHOR не задан!" << '\n';
    }
    if (ver_ptr) {
        std::string ver = ver_ptr;
        std::cout << "VERSION: " << ver << '\n';
    } else {
        std::cerr << "VERSION не задан!" << '\n';
    }
    if (desc_ptr) {
        std::string desc = desc_ptr;
        std::cout << "DESCRIPTION: " << desc << '\n';
    } else {
        std::cerr << "DESCRIPTION не задан!" << '\n';
    }
}
