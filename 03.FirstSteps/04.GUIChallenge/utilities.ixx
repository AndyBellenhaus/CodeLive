module;

#include <SFML/Graphics.hpp>

export module utilities;

export void app()
{
  sf::RenderWindow window(sf::VideoMode({400, 400}), "SFML works!");
  sf::CircleShape shape(100.f);
  shape.setFillColor(sf::Color::Blue);

  sf::Event event;
  while (window.isOpen())
  {
    while (window.pollEvent(event)) // ✅ Übergabe per Referenz
    {
      if (event.type == sf::Event::Closed) // ✅ Vergleich mit enum-Wert
        window.close();
    }

    window.clear();
    window.draw(shape);
    window.display();
  }
}
