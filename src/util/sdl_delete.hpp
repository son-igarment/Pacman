//
//  sdl_delete.hpp
//  EnTT Pacman
//
//  Created by Phạm Lê Ngọc Sơn
//  Copyright  2024 Phạm Lê Ngọc Sơn. All rights reserved.
//

#ifndef UTIL_SDL_DELETE_HPP
#define UTIL_SDL_DELETE_HPP

#include <memory>
#include <SDL_render.h>

namespace SDL {

struct DeleteWindow {
  void operator()(SDL_Window *ptr) const noexcept {
    SDL_DestroyWindow(ptr);
  }
};

struct DeleteTexture {
  void operator()(SDL_Texture *ptr) const noexcept {
    SDL_DestroyTexture(ptr);
  }
};

struct DeleteSurface {
  void operator()(SDL_Surface *ptr) const noexcept {
    SDL_FreeSurface(ptr);
  }
};

struct DeleteRenderer {
  void operator()(SDL_Renderer *ptr) const noexcept {
    SDL_DestroyRenderer(ptr);
  }
};

using Window = std::unique_ptr<SDL_Window, DeleteWindow>;
using Texture = std::unique_ptr<SDL_Texture, DeleteTexture>;
using Surface = std::unique_ptr<SDL_Surface, DeleteSurface>;
using Renderer = std::unique_ptr<SDL_Renderer, DeleteRenderer>;

}

#endif
