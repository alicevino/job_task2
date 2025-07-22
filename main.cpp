#include <iostream>
#include "function.h"
using namespace std;

int main() {
    DataStorage ds("storage");
    string cmd, arg1, arg2;

    cout << "Команды: save <путь_к_файлу> <имя_в_хранилище>, get <имя_в_хранилище> <куда_скопировать>, remove <имя_в_хранилище>, list, exit" << endl;

    while (true) {
        cout << "> ";
        cin >> cmd;
        if (cmd == "save") {
            cin >> arg1 >> arg2;
            saveFileCmd(ds, arg1, arg2);
        } else if (cmd == "get") {
            cin >> arg1 >> arg2;
            getFileCmd(ds, arg1, arg2);
        } else if (cmd == "remove") {
            cin >> arg1;
            removeFileCmd(ds, arg1);
        } else if (cmd == "list") {
            listFilesCmd(ds);
        } else if (cmd == "exit") {
            break;
        } else {
            cout << "Неизвестная команда." << endl;
        }
    }
    return 0;
}

