//
// Created by legend on 4/14/20.
//

#pragma once

#include "Vector3.h"
#include "stb_image.h"

class Texture {
private:
    int width{}, height{}, channels{};
    int* data = nullptr;
    bool textured = false;
    Vector3 colour;
public:
    Texture() = default;
    Texture(float r, float g, float b);
    Texture(char* path);
    Vector3 getUV(float u, float v);
    ~Texture();
};