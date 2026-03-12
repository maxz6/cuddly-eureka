#include <iostream>
#include <cstdlib>
#include <string>
//#include "libhelp.h"

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

int main(int argc, char *argv[]) {
    for (int i = 0; i < argc; i++) {
        if (std::string(argv[i]) == "--help") {
            getHelp();
            return 0;
        }
    }
    if (argc < 4) {
        std::cerr << "Недостаточно аргументов (" << argc - 1 << "/3)." << '\n';
        return 1;
    }
    int firstLength = std::stoi(argv[1]);
    int secondLength = std::stoi(argv[2]);
    int width = std::stoi(argv[3]);
    int area, totalArea, areaDifference, finalArea;
    if (secondLength == firstLength || width == firstLength) {
        totalArea = secondLength * width;
        area = firstLength * firstLength;
        areaDifference = totalArea - area;
        finalArea = totalArea - areaDifference * 2;
    } else {
        std::cerr << "Итоговая фигура не прямоугольник." << '\n';
        return 1;
    }
    std::cout << "Площадь пересечения салфеток: " << finalArea << '\n';
    return 0;
}
