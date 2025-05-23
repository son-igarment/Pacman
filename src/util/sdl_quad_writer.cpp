//
//  sdl_quad_writer.cpp
//  EnTT Pacman
//
//  Created by Phạm Lê Ngọc Sơn
//  Copyright © 2024 Phạm Lê Ngọc Sơn. All rights reserved.
//

#include "sdl_quad_writer.hpp"

#include "sdl_check.hpp"

SDL::QuadWriter::QuadWriter(
  SDL_Renderer *renderer,
  SDL_Texture *texture
) : renderer{renderer},
    texture{texture},
    srcRect{0, 0, 0, 0},
    dstRect{0, 0, 0, 0},
    angle{} {}

void SDL::QuadWriter::tilePos(
  const Pos pos, const Pos size, const double ang
) {
  dstRect.x = pos.x;
  dstRect.y = pos.y;
  dstRect.w = size.x;
  dstRect.h = size.y;
  angle = ang;
}

void SDL::QuadWriter::tileTex(const animera::SpriteRect rect) {
  srcRect.x = rect.x;
  srcRect.y = rect.y;
  srcRect.w = rect.w;
  srcRect.h = rect.h;
}

void SDL::QuadWriter::tileTex(const animera::SpriteID id) {
  tileTex(getSpriteRect(id));
}

void SDL::QuadWriter::render() const {
  SDL_CHECK(SDL_RenderCopyEx(
    renderer, texture, &srcRect, &dstRect, angle, nullptr, SDL_FLIP_NONE
  ));
}
