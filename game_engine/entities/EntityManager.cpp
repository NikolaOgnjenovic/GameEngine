//
// Created by mrmi on 24.1.24..
//

#include "EntityManager.h"

EntityManager::EntityManager() {
    m_totalEntities = 0;
}

void EntityManager::update() {
    // Add all pending entities to the manager data
    for (const auto& e : m_toAdd) {
        m_entities.push_back(e);
        m_entityMap[e->m_tag].push_back(e);
    }
    m_toAdd.clear();

    // Remove all pending entities from the manager data
    // TODO
}

std::shared_ptr<Entity> EntityManager::addEntity(const std::string& tag) {
    auto e = std::shared_ptr<Entity>(new Entity(tag, m_totalEntities++));
    m_toAdd.push_back(e);

    return e;
}

EntityVec& EntityManager::getEntities() {
    EntityVec entities;
    for (const auto& e : m_entities) {
        if (e->m_alive) {
            entities.push_back(e);
        }
    }

    return entities;
}

EntityVec& EntityManager::getEntities(const std::string &tag) {
    EntityVec entities;
    for (const auto& e : m_entityMap[tag]) {
        entities.push_back(e);
    }

    return entities;
}
