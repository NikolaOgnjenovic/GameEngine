//
// Created by mrmi on 24.1.24..
//

#ifndef CIRCLEDRAWER_ENGINE_H
#define CIRCLEDRAWER_ENGINE_H

#include "../entities/EntityManager.h"
#include "../systems/SRender.h"

/**
 * @brief The Engine class represents the main game engine for the CircleDrawer application.
 *
 * It manages the EntityManager and rendering system.
 */
class Engine {
    std::unique_ptr<EntityManager> m_entityManager; /**< Unique pointer to the EntityManager. */

public:
    /**
     * @brief Constructor for the Engine class.
     */
    Engine();

    /**
     * @brief Runs the game engine.
     */
    void run();

    /**
     * @brief Unique pointer to the rendering system.
     */
    std::unique_ptr<SRender> sRender;
};

#endif //CIRCLEDRAWER_ENGINE_H

