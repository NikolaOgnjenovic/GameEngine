//
// Created by mrmi on 24.1.24..
//

#ifndef CIRCLEDRAWER_ENTITY_H
#define CIRCLEDRAWER_ENTITY_H

#include <cstddef>
#include <memory>
#include "../components/CTransform.h"
#include "../components/CName.h"
#include "../components/CShape.h"
#include "../components/CBBox.h"

/**
 * @brief The Entity class represents an entity in the Entity-Component-System (ECS) system.
 *
 * Entities are the basic building blocks of the game world, consisting of various components.
 */
class Entity {
    friend class EntityManager;

    const size_t m_id = 0; /**< The unique identifier of the entity. */
    const std::string m_tag = "Default"; /**< The tag associated with the entity. */
    bool m_alive = true; /**< Flag indicating whether the entity is alive or not. */

    /**
     * @brief Private constructor for the Entity class.
     *
     * @param tag The tag to be assigned to the entity.
     * @param id The unique identifier to be assigned to the entity.
     */
    Entity(std::string tag, size_t id);

public:
    std::shared_ptr<CTransform> cTransform; /**< Pointer to the Transform component of the entity. */
    std::shared_ptr<CName> cName; /**< Pointer to the Name component of the entity. */
    std::shared_ptr<CShape> cShape; /**< Pointer to the Shape component of the entity. */
    std::shared_ptr<CBBox> cBBox; /**< Pointer to the BBox (Bounding Box) component of the entity. */
};


#endif //CIRCLEDRAWER_ENTITY_H
