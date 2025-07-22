#include "function.h"
#include <iostream>
using namespace std;

void saveFileCmd(DataStorage& ds, const string& srcPath, const string& fileName) {
    if (ds.saveFile(srcPath, fileName))
        cout << "Файл сохранён." << endl;
    else
        cout << "Ошибка при сохранении файла." << endl;
}

void getFileCmd(const DataStorage& ds, const string& fileName, const string& destPath) {
    if (ds.getFile(fileName, destPath))
        cout << "Файл скопирован." << endl;
    else
        cout << "Ошибка при копировании файла." << endl;
}

void removeFileCmd(DataStorage& ds, const string& fileName) {
    if (ds.removeFile(fileName))
        cout << "Файл удалён." << endl;
    else
        cout << "Ошибка при удалении файла." << endl;
}

void listFilesCmd(const DataStorage& ds) {
    ds.listFiles();
}

