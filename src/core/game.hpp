//
//  game.hpp
//  EnTT Pacman
//
//  Created by Phạm Lê Ngọc Sơn
//  Copyright  2024 Phạm Lê Ngọc Sơn. All rights reserved.
//

#ifndef CORE_GAME_HPP
#define CORE_GAME_HPP

#include <random>
#include "maze.hpp"
#include <SDL_scancode.h>
#include "util/sdl_quad_writer.hpp"
#include <entt/entity/registry.hpp>

class Game {
public:
  void init();
  void input(SDL_Scancode);
  bool logic();
  void render(SDL::QuadWriter &, int);

private:
  enum class State {
    playing,
    won,
    lost
  };

  entt::registry reg;
  MazeState maze;
  int dots = 0;
  std::mt19937 rand;
  State state = State::playing;
  int ticks = 0;
  bool scattering = true;
};

#endif
