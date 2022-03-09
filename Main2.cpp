#include <SFML/Graphics.hpp>

int main()
{
    // create the window
    sf::RenderWindow window(sf::VideoMode(1280, 720), "Legen wait for it Dary");
    sf::ContextSettings settings;
    settings.antialiasingLevel = 8;
    // run the program as long as the window is open
    while (window.isOpen())
    {
        // check all the window's events that were triggered since the last iteration of the loop
        sf::Event event;

        sf::ConvexShape convex;

        convex.setPointCount(4);

        convex.setFillColor(sf::Color(50,112,100));

        convex.setPoint(0, sf::Vector2f(window.getSize().x / 2 + 150, window.getSize().y / 2 - -200));
        convex.setPoint(1, sf::Vector2f(window.getSize().x / 2 - 150, window.getSize().y / 2 - -200));
        convex.setPoint(2, sf::Vector2f(window.getSize().x / 2 - 150, window.getSize().y / 2));
        convex.setPoint(3, sf::Vector2f(window.getSize().x / 2 + 150, window.getSize().y / 2));

        sf::RectangleShape rectangleShape(sf::Vector2f(50,100));
        rectangleShape.setFillColor(sf::Color(255,255,255,180));
        rectangleShape.setPosition(window.getSize().x / 2 - 30, window.getSize().y / 2 + 100);

        sf::RectangleShape rectangleShape2(sf::Vector2f(50,50));
        rectangleShape2.setFillColor(sf::Color(170,100,50,100));
        rectangleShape2.setPosition(window.getSize().x / 2 - 30, window.getSize().y / 2 -50);
        rectangleShape2.setOutlineColor(sf::Color::Red);
        rectangleShape2.setOutlineThickness(3);

        sf::CircleShape triangle(180, 3);
        triangle.setFillColor(sf::Color(50,112,100));
        triangle.setPosition(window.getSize().x / 2 - 180, window.getSize().y / 2 - 270);

        sf::RectangleShape rectangleShape3(sf::Vector2f(60,110));
        rectangleShape3.setFillColor(sf::Color(150,255,255,120));
        rectangleShape3.setPosition(window.getSize().x / 2 + 30, window.getSize().y / 2 -210);
        rectangleShape3.setOutlineThickness(3);
        rectangleShape3.setOutlineColor(sf::Color::Cyan);

        while (window.pollEvent(event))
        {
            // "close requested" event: we close the window
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(convex);
        window.draw(rectangleShape);
        window.draw(rectangleShape3);
        window.draw(triangle);
        window.draw(rectangleShape2);


        window.display();
    }

    return 0;
}
