#include "sphere.h"
#include "ray.h"
#include "plane.h"

// Determine if the ray intersects with the sphere
Hit Sphere::Intersection(const Ray& ray, int part) const {
    TODO;
    Hit hit;
    double dlt;
    double t;
    dlt = pow(dot(ray.endpoint - center, ray.direction), 2)-((ray.endpoint - center).magnitude() - radius * radius);
    t=dot(ray.endpoint - center, ray.direction) - sqrt(dlt);
    if (dlt >= 0) {
        hit.dist = t;
        return hit;
    }
    return {0, 0, 0};
}
vec3 Sphere::Normal(const vec3& point, int part) const
{
    vec3 normal;
    normal = point-center;
    TODO; // compute the normal direction
    return normal;
}

Box Sphere::Bounding_Box(int part) const
{
    Box box;
    TODO; // calculate bounding box
    return box;
}
