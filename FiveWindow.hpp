#include <SFML/Graphics.hpp>
#include <string>
#include <vector>
#include <cstdlib>
#include <iostream>
#include <ctime>

using namespace sf;

class FiveWindow : public RenderWindow {
  using RenderWindow::RenderWindow;
public:
  FiveWindow(const int blockWidht, const int fieldSize, const std::string texture_path);
  void run();
  void clickHandler(int x, int y);
  void shuffle();
  void stepBack();
  std::vector<std::vector<int>> grid; // Определение конфигурации поля

protected:
  Texture texture;
  int     blockWidht;
  int     fieldSize;
  //std::vector<std::vector<int>> grid;
  std::vector<Sprite>			  sprite; // Кнопки от 1 до 15
  std::pair<int, int>       lastMove; // Координаты последнего клика
};