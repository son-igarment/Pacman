//
//  sdl_load_texture.cpp
//  EnTT Pacman
//
//  Created by Phạm Lê Ngọc Sơn
//  Copyright  2024 Phạm Lê Ngọc Sơn. All rights reserved.
//

#include "sdl_load_texture.hpp"

#include "sdl_check.hpp"

SDL::Texture SDL::loadTexture(SDL_Renderer *renderer, const animera::TextureInfo &info) {
  SDL::Texture tex{SDL_CHECK(SDL_CreateTexture(
    renderer,
    SDL_PIXELFORMAT_ABGR8888,
    SDL_TEXTUREACCESS_STATIC,
    info.width, info.height
  ))};
  std::unique_ptr data = animera::decompressTexture(info);
  assert(data);
  SDL_CHECK(SDL_UpdateTexture(tex.get(), nullptr, data.get(), info.pitch));
  SDL_CHECK(SDL_SetTextureBlendMode(tex.get(), SDL_BLENDMODE_BLEND));
  return tex;
}
