//
// Created by mrmi on 24.1.24..
//

#ifndef CIRCLEDRAWER_CSHAPE_H
#define CIRCLEDRAWER_CSHAPE_H

/**
 * @brief Enumeration representing different shape types.
 */
enum ShapeType {
    Circle,     /**< Circle shape type. */
    Rectangle   /**< Rectangle shape type. */
};

/**
 * @brief The CShape class represents the Shape component for the Entity-Component-System (ECS) system.
 *
 * This component is responsible for storing the type of shape associated with an entity.
 */
class CShape {
    ShapeType m_shapeType; /**< The type of shape associated with the entity. */

public:
    /**
     * @brief Constructor for the CShape class.
     *
     * @param shapeType The type of shape to be assigned to the entity.
     */
    explicit CShape(ShapeType shapeType);
};

#endif //CIRCLEDRAWER_CSHAPE_H