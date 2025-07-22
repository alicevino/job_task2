#ifndef FUNCTION_H
#define FUNCTION_H

#include <string>
#include "datastorage.h"
using namespace std;

void saveFileCmd(DataStorage& ds, const string& srcPath, const string& fileName);
void getFileCmd(const DataStorage& ds, const string& fileName, const string& destPath);
void removeFileCmd(DataStorage& ds, const string& fileName);
void listFilesCmd(const DataStorage& ds);

#endif

