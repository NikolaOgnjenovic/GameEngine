//
// Created by mrmi on 24.1.24..
//

#include "CName.h"

#include <utility>

CName::CName(std::string name): m_name(std::move(name)) {}
