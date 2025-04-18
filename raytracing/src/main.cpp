#include "./utilities/general.h"

#include "./utilities/camera.h"
#include "./hittable/hittable.h"
#include "./hittable/hittable_list.h"
#include "./hittable/sphere.h"



int main() {

    // World
    hittable_list world;
    world.add(std::make_shared<sphere>(point3(0, 0, -1), 0.5));
    world.add(std::make_shared<sphere>(point3(0, -100.5, -1), 100));

    // Camera
    camera cam;

    cam.aspect_ratio = 16.0 / 9.0;
    cam.image_width = 400;
    cam.samples_per_pixel = 100;
    cam.max_depth = 50;

    cam.render(world);
    
}