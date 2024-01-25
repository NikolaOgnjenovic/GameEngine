//
// Created by mrmi on 24.1.24..
//

#ifndef CIRCLEDRAWER_SRENDER_H
#define CIRCLEDRAWER_SRENDER_H

#include <iostream>
#include <memory>
#include <fstream>
#include <SFML/Graphics.hpp>
#include "imgui.h"
#include "imgui-SFML.h"

/**
 * @brief The SRender class represents the rendering system for the game engine.
 *
 * It provides static methods for rendering the game world.
 */
class SRender {
public:
    /**
     * @brief Renders the game world.
     */
    static void render();
};

#endif //CIRCLEDRAWER_SRENDER_H

