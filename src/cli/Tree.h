#pragma once

#include <vpkpp/PackFile.h>
#include <set>

void prettyPrintPackFile(std::unique_ptr<vpkpp::PackFile>& packFile);
extern std::set<std::string> storeExtensions;
