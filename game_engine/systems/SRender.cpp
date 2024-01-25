//
// Created by mrmi on 24.1.24..
//

#include "SRender.h"

void SRender::render() {
    const int window_width = 1280;
    const int window_height = 720;
    sf::RenderWindow window(sf::VideoMode(window_width, window_height), "SFML circle bouncer");
    window.setFramerateLimit(60);

    ImGui::SFML::Init(window);
    sf::Clock deltaClock;

    ImGui::GetStyle().ScaleAllSizes(1.0f);

    float colors[3] = {0.0f, 1.0f, 1.0f};
    float circle_radius = 50;
    int circle_segments = 32;
    float circle_speed_x = 1.0f;
    float circle_speed_y = 1.0f;
    bool drawCircle = true;
    bool drawText = true;

    sf::CircleShape circle(circle_radius, circle_segments);
    circle.setPosition(10.0f, 10.0f);

    sf::Font my_font;
    if (!my_font.loadFromFile("../res/fFinish.ttf")) {
        std::cerr << "Failed to load font\n";
        exit(-1);
    }

    sf::Text text("Sample text", my_font, 24);
    text.setPosition(0, window_height - (float) text.getCharacterSize());

    char displayString[255] = "Sample text";

    while (window.isOpen()) {
        sf::Event event{};
        while (window.pollEvent(event)) {
            ImGui::SFML::ProcessEvent(window, event);
            if (event.type == sf::Event::Closed) {
                window.close();
            }

            if (event.type == sf::Event::KeyPressed) {
                std::cout<<"Key pressed with code "<<event.key.code<<"\n";
                std::cout<<"key code: "<<sf::Keyboard::X<<"\n";
            }

            if (event.key.code == sf::Keyboard::X) {
                circle_speed_x *= -1.0f;
            }
        }

        ImGui::SFML::Update(window, deltaClock.restart());
        ImGui::Begin("Window title");
        ImGui::Text("Window text");
        ImGui::Checkbox("Draw circle", &drawCircle);
        ImGui::SameLine();
        ImGui::Checkbox("Draw text", &drawText);
        ImGui::SliderFloat("Radius", &circle_radius, 0.0f, 300.0f);
        ImGui::SliderInt("Sides", &circle_segments, 3, 64);
        ImGui::ColorEdit3("Color circle", colors);
        ImGui::InputText("Text", displayString, 255);
        if (ImGui::Button("Set Text")) {
            text.setString(displayString);
        }
        ImGui::SameLine();
        if (ImGui::Button("Reset Circle")) {
            circle.setPosition(0, 0);
        }
        ImGui::End();

        circle.setFillColor(sf::Color(colors[0]*255, colors[1]*255, colors[2]*255));
        circle.setPointCount(circle_segments);
        circle.setRadius(circle_radius);
        circle.setPosition(circle.getPosition().x + circle_speed_x, circle.getPosition().y + circle_speed_y);

        window.clear();
        if (drawCircle) {
            window.draw(circle);
        }
        if (drawText) {
            window.draw(text);
        }
        ImGui::SFML::Render(window);
        window.display();
    }

    ImGui::SFML::Shutdown();
}
