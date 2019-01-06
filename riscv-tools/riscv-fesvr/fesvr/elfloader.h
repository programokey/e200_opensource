// See LICENSE for license details.

#ifndef _ELFLOADER_H
#define _ELFLOADER_H

#include "elf.h"
#include <map>
#include <string>

class memif_t;
std::map<std::string, uint64_t> load_elf(const char* fn, memif_t* memif, reg_t* entry);

#endif
