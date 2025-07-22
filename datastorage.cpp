#include "datastorage.h"
#include <filesystem>
#include <iostream>
using namespace std;
namespace fs = filesystem;

DataStorage::DataStorage(const string& dir) : storageDir(dir) {
    if (!fs::exists(storageDir)) {
        fs::create_directory(storageDir);
    }
}

bool DataStorage::saveFile(const string& srcPath, const string& fileName) {
    try {
        fs::copy_file(srcPath, storageDir + "/" + fileName, fs::copy_options::overwrite_existing);
        return true;
    } catch (...) {
        return false;
    }
}

bool DataStorage::getFile(const string& fileName, const string& destPath) const {
    try {
        fs::copy_file(storageDir + "/" + fileName, destPath, fs::copy_options::overwrite_existing);
        return true;
    } catch (...) {
        return false;
    }
}

bool DataStorage::removeFile(const string& fileName) {
    try {
        return fs::remove(storageDir + "/" + fileName);
    } catch (...) {
        return false;
    }
}

void DataStorage::listFiles() const {
    for (const auto& entry : fs::directory_iterator(storageDir)) {
        cout << entry.path().filename() << endl;
    }
}

