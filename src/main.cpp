#include <iostream>
#include "function.h"

int main() {
    DataStorage ds("storage");
    std::string cmd, arg1, arg2;

    std::cout << "Команды: save <путь_к_файлу> <имя_в_хранилище>, get <имя_в_хранилище> <куда_скопировать>, remove <имя_в_хранилище>, list, exit" << std::endl;

    while (true) {
        std::cout << "> ";
        std::cin >> cmd;
        if (cmd == "save") {
            std::cin >> arg1 >> arg2;
            saveFileCmd(ds, arg1, arg2);
        } else if (cmd == "get") {
            std::cin >> arg1 >> arg2;
            getFileCmd(ds, arg1, arg2);
        } else if (cmd == "remove") {
            std::cin >> arg1;
            removeFileCmd(ds, arg1);
        } else if (cmd == "list") {
            listFilesCmd(ds);
        } else if (cmd == "exit") {
            break;
        } else {
            std::cout << "Неизвестная команда." << std::endl;
        }
    }
    return 0;
}

