#pragma once

#include "vector"
#include "Shape.h"
#include "Vector3.h"
#include "Camera.h"
#include "ColourCache.h"
#include <vector>
#include "Texture.h"

class World {
private:
    int width, height, maxBounce, spp, chunkSizeX, chunkSizeY, chunkCountX, chunkCountY;
    float aspect;
    Texture& texture;
    std::vector<Shape *> shapes;
    bool colour(Ray& ray, HitRecord& out);
    void renderChunk(int chunkID, int* out, Camera& cam);
    void renderChunks(std::vector<int> ids, int* out, Camera& cam);
public:
    World(int, int, Texture&, int = 4, int = 1);
    ~World();
    void addShape(Shape *);
    void render(int*, int threads);
    Vector3 trace(Ray ray, int);
};
