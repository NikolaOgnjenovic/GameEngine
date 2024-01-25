//
// Created by mrmi on 24.1.24..
//

#include "Entity.h"

#include <utility>

Entity::Entity(std::string tag, size_t id) : m_tag(std::move(tag)), m_id(id), m_alive(true) {}