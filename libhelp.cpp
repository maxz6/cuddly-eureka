#include <iostream>
#include <cstdlib>
#include <string>

void getHelp() {
   const char* author_ptr = std::getenv("AUTHOR");
   const char* version_ptr = std::getenv("VERSION");
   if (author_ptr) {
       std::string author = author_ptr;
       std::cout << "AUTHOR: " << author << '\n';
   } else {
       std::cerr << "author not set!" << '\n';
   }
   if (version_ptr) {
       std::string version = version_ptr;
       std::cout << "VERSION: " << version << '\n';
   } else {
       std::cerr << "version not set!" << '\n';
   }
}
