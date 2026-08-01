// Source - https://stackoverflow.com/a/3024202
// Posted by user229044, modified by community. See post 'Timeline' for change history
// Retrieved 2026-07-28, License - CC BY-SA 4.0

#include <iostream>

int main(int argc, char** argv) {
    std::cout << "Have " << argc << " arguments:\n";
    for (int i = 0; i < argc; ++i) {
        std::cout << argv[i] << "\n";
    }
}

