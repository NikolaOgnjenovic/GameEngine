//
// Created by mrmi on 24.1.24..
//

#ifndef CIRCLEDRAWER_ENTITYMANAGER_H
#define CIRCLEDRAWER_ENTITYMANAGER_H

#include <vector>
#include <map>
#include "Entity.h"

typedef std::vector<std::shared_ptr<Entity>> EntityVec; /**< Type definition for a vector of shared pointers to entities. */
typedef std::map<std::string, EntityVec> EntityMap; /**< Type definition for a map of entity vectors indexed by tag. */

/**
 * @brief The EntityManager class manages entities in the Entity-Component-System (ECS) system.
 *
 * It provides methods for adding, updating, and retrieving entities.
 */
class EntityManager {
    EntityVec m_entities; /**< Vector containing all entities in the system. */
    EntityVec m_toAdd; /**< Vector containing entities to be added during the next update. */
    EntityMap m_entityMap; /**< Map containing entities grouped by tag. */
    size_t m_totalEntities = 0; /**< Total number of entities managed by the EntityManager. */

public:
    /**
     * @brief Constructor for the EntityManager class.
     */
    EntityManager();

    /**
     * @brief Updates the state of the EntityManager and its entities.
     */
    void update();

    /**
     * @brief Adds a new entity with the specified tag to the EntityManager.
     *
     * @param tag The tag to be associated with the new entity.
     * @return A shared pointer to the newly created entity.
     */
    std::shared_ptr<Entity> addEntity(const std::string& tag);

    /**
     * @brief Gets all entities managed by the EntityManager.
     *
     * @return A reference to the vector of entities.
     */
    EntityVec& getEntities();

    /**
     * @brief Gets all entities with the specified tag.
     *
     * @param tag The tag used to filter entities.
     * @return A reference to the vector of entities with the specified tag.
     */
    EntityVec& getEntities(const std::string& tag);
};

#endif //CIRCLEDRAWER_ENTITYMANAGER_H
