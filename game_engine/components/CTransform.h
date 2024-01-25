//
// Created by mrmi on 24.1.24..
//

#ifndef CIRCLEDRAWER_CTRANSFORM_H
#define CIRCLEDRAWER_CTRANSFORM_H

/**
 * @brief The CTransform class represents the Transform component for the Entity-Component-System (ECS) system.
 *
 * This component is responsible for storing the position of an entity in 2D space.
 */
class CTransform {
public:
    float m_x = 0; /**< The x-coordinate of the entity's position. */
    float m_y = 0; /**< The y-coordinate of the entity's position. */

    /**
     * @brief Constructor for the CTransform class.
     *
     * @param x The initial x-coordinate of the entity's position.
     * @param y The initial y-coordinate of the entity's position.
     */
    CTransform(float x, float y);
};

#endif //CIRCLEDRAWER_CTRANSFORM_H

