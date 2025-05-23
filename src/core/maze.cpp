﻿//
//  maze.cpp
//  EnTT Pacman
//
//  Created by Phạm Lê Ngọc Sơn
//  Copyright  2024 Phạm Lê Ngọc Sơn. All rights reserved.
//

#include "maze.hpp"

#include "constants.hpp"

namespace {

Tile stateChar(const char c) {
  switch (c) {
    case ' ': return Tile::empty;
    case '.': return Tile::dot;
    case 'o': return Tile::energizer;
    case '#': return Tile::wall;
    case '-': return Tile::door;
    default:
      assert(false);
      return {};
  }
}

template <std::size_t Size>
void stateStr(MazeState &state, const char (&str)[Size]) {
  assert(state.area() + 1 == Size);
  for (std::size_t i = 0; i != Size - 1; ++i) {
    state[i] = stateChar(str[i]);
  }
}

}

MazeState makeMazeState() {
  MazeState state{tiles};
  const char str[] = {
    "###################"
    "#........#........#"
    "#o##.###.#.###.##o#"
    "#.##.###.#.###.##.#"
    "#.................#"
    "#.##.#.#####.#.##.#"
    "#....#...#...#....#"
    "####.### # ###.####"
    "   #.#       #.#   "
    "####.# ##-## #.####"
    "    .  #   #  .    "
    "####.# ##### #.####"
    "   #.#       #.#   "
    "####.# ##### #.####"
    "#........#........#"
    "#.##.###.#.###.##.#"
    "#o.#..... .....#.o#"
    "##.#.#.#####.#.#.##"
    "#....#...#...#....#"
    "#.######.#.######.#"
    "#.................#"
    "###################"
  };
  stateStr(state, str);
  return state;
}
