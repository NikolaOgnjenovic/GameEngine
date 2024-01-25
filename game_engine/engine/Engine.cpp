//
// Created by mrmi on 24.1.24..
//

#include "Engine.h"

void Engine::run() {
    m_entityManager->update();
    sRender->render();
}

Engine::Engine() {
    m_entityManager = std::make_unique<EntityManager>();
}
