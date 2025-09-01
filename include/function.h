#ifndef FUNCTION_H
#define FUNCTION_H

#include <string>
#include "datastorage.h"

void saveFileCmd(DataStorage& ds, const std::string& srcPath, const std::string& fileName);
void getFileCmd(const DataStorage& ds, const std::string& fileName, const std::string& destPath);
void removeFileCmd(DataStorage& ds, const std::string& fileName);
void listFilesCmd(const DataStorage& ds);

#endif

