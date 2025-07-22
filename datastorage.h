#ifndef DATASTORAGE_H
#define DATASTORAGE_H

#include <string>
#include <filesystem>
using namespace std;

class DataStorage {
public:
    DataStorage(const string& dir);
    bool saveFile(const string& srcPath, const string& fileName);
    bool getFile(const string& fileName, const string& destPath) const;
    bool removeFile(const string& fileName);
    void listFiles() const;
private:
    string storageDir;
};

#endif

