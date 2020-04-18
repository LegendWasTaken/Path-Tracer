//
// Created by legend on 3/20/20.
//

#pragma once

#include "Shape.h"
#include "Ray.h"
#include "Vector3.h"

class Shape;

struct HitRecord {
public:
    HitRecord(Shape* s, Ray r) : ray(r) {
        hit = false;
        distance = -1.0f;
        shape = s;
    }
    bool hit;
    float distance;
    Ray ray;
    Vector3 emission;
    Vector3 albedo;
    Shape* shape;
    Vector3 intersectionPoint;
    Vector3 normal;
};
