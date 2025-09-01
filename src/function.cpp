#include "function.h"
#include <iostream>

void saveFileCmd(DataStorage& ds, const std::string& srcPath, const std::string& fileName) {
    if (ds.saveFile(srcPath, fileName))
        std::cout << "Файл сохранён." << std::endl;
    else
        std::cout << "Ошибка при сохранении файла." << std::endl;
}

void getFileCmd(const DataStorage& ds, const std::string& fileName, const std::string& destPath) {
    if (ds.getFile(fileName, destPath))
        std::cout << "Файл скопирован." << std::endl;
    else
        std::cout << "Ошибка при копировании файла." << std::endl;
}

void removeFileCmd(DataStorage& ds, const std::string& fileName) {
    if (ds.removeFile(fileName))
        std::cout << "Файл удалён." << std::endl;
    else
        std::cout << "Ошибка при удалении файла." << std::endl;
}

void listFilesCmd(const DataStorage& ds) {
    ds.listFiles();
}

