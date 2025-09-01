#ifndef DATASTORAGE_H
#define DATASTORAGE_H

#include <string>

class DataStorage {
public:
    DataStorage(const std::string& dir);
    bool saveFile(const std::string& srcPath, const std::string& fileName);
    bool getFile(const std::string& fileName, const std::string& destPath) const;
    bool removeFile(const std::string& fileName);
    void listFiles() const;
private:
    std::string storageDir;
};

#endif

