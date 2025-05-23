//
//  sdl_load_texture.hpp
//  EnTT Pacman
//
//  Created by Phạm Lê Ngọc Sơn
//  Copyright  2024 Phạm Lê Ngọc Sơn. All rights reserved.
//

#ifndef UTIL_SDL_LOAD_TEXTURE_HPP
#define UTIL_SDL_LOAD_TEXTURE_HPP

#include "sprites.hpp"
#include "sdl_delete.hpp"

namespace SDL {

Texture loadTexture(SDL_Renderer *, const animera::TextureInfo &);

}

#endif
