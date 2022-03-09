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

        sf::RectangleShape line(sf::Vector2f(sf::Vector2f(150, 5)));
        line.setPosition(window.getSize().x / 2 + 43, window.getSize().y / 2);
        line.setFillColor(sf::Color::Cyan);
        line.rotate(-110);

        sf::RectangleShape line2(sf::Vector2f(sf::Vector2f(150, 5)));
        line2.setPosition(window.getSize().x / 2 - 60, window.getSize().y / 2);
        line2.setFillColor(sf::Color::Red);
        line2.rotate(-70);

        sf::RectangleShape line3(sf::Vector2f(sf::Vector2f(65, 5)));
        line3.setPosition(window.getSize().x / 2 + -40 , window.getSize().y / 2 - 50);
        line3.setFillColor(sf::Color::White);
        //line2.rotate(-70);


        sf::RectangleShape line4(sf::Vector2f(sf::Vector2f(150, 5)));
        line4.setPosition(window.getSize().x / 2 , window.getSize().y / 2 + 200);
        line4.setFillColor(sf::Color::Green);
        line4.rotate(-90);

        sf::RectangleShape line5(sf::Vector2f(sf::Vector2f(90, 5)));
        line5.setPosition(window.getSize().x / 2 + 5, window.getSize().y / 2 +120);
        line5.setFillColor(sf::Color::Cyan);
        line5.rotate(60);

        sf::RectangleShape line6(sf::Vector2f(sf::Vector2f(90, 5)));
        line6.setPosition(window.getSize().x / 2 + 5, window.getSize().y / 2 +120);
        line6.setFillColor(sf::Color::White);
        line6.rotate(310);

        while (window.pollEvent(event))
        {
            // "close requested" event: we close the window
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();

        window.draw(line);
        window.draw(line2);
        window.draw(line3);
        window.draw(line4);
        window.draw(line5);
        window.draw(line6);


        window.display();
    }

    return 0;
}