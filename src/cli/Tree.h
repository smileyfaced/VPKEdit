#pragma once

#include <vpkpp/PackFile.h>
#include <set>

void prettyPrintPackFile(std::unique_ptr<vpkpp::PackFile>& packFile);
std::set<std::string> storeExtensions;
