//
// Created by mrmi on 24.1.24..
//

#ifndef CIRCLEDRAWER_CNAME_H
#define CIRCLEDRAWER_CNAME_H


#include <string>

/**
 * @brief The CName class represents the Name component for the Entity-Component-System (ECS) system.
 *
 * This component is responsible for storing the name of an entity.
 */
class CName {
    std::string m_name; /**< The name of the entity. */
public:
    /**
     * @brief Constructor for the CName class.
     *
     * @param name The name to be assigned to the entity.
     */
    explicit CName(std::string  name);
};


#endif //CIRCLEDRAWER_CNAME_H
