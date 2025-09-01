#include "datastorage.h"
#include <filesystem>
#include <iostream>

namespace fs = std::filesystem;

DataStorage::DataStorage(const std::string& dir) : storageDir(dir) {
    if (!fs::exists(storageDir)) {
        fs::create_directory(storageDir);
    }
}

bool DataStorage::saveFile(const std::string& srcPath, const std::string& fileName) {
    try {
        fs::copy_file(srcPath, storageDir + "/" + fileName, fs::copy_options::overwrite_existing);
        return true;
    } catch (...) {
        return false;
    }
}

bool DataStorage::getFile(const std::string& fileName, const std::string& destPath) const {
    try {
        fs::copy_file(storageDir + "/" + fileName, destPath, fs::copy_options::overwrite_existing);
        return true;
    } catch (...) {
        return false;
    }
}

bool DataStorage::removeFile(const std::string& fileName) {
    try {
        return fs::remove(storageDir + "/" + fileName);
    } catch (...) {
        return false;
    }
}

void DataStorage::listFiles() const {
    for (const auto& entry : fs::directory_iterator(storageDir)) {
        std::cout << entry.path().filename() << std::endl;
    }
}

