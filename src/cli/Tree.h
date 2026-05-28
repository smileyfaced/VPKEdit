#pragma once

#include <vpkpp/PackFile.h>
#include <set>

void prettyPrintPackFile(std::unique_ptr<vpkpp::PackFile>& packFile);
inline std::set<std::string> storeExtensions;
