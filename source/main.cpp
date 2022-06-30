#include "Vector3D.h"

#include <iostream>

int main()
{
    // Image
    constexpr int image_width = 256;
    constexpr int image_height = 256;

    // Render
    std::cout << "P3\n" << image_width << " " << image_height << "\n255\n";

    for (int height{ image_height - 1 }; height >= 0; --height)
    {
        std::cerr << "\rScanlines remaining: " << height << " " << std::flush;
        for (int width{ 0 }; width < image_width; ++width)
        {
            const float red_coefficient{ float(width) / (image_width - 1) };
            const float blue_coefficient{ float(height) / (image_height - 1) };
            const float green_coefficient{ 0.25f };

            const int red{ static_cast<int>(255.999f * red_coefficient) }; 
            const int blue{ static_cast<int>(255.999f * blue_coefficient) }; 
            const int green{ static_cast<int>(255.999f * green_coefficient) };

            std::cout << red << " " << blue << " " << green << "\n";
        }
    }

    std::cerr << "\nDone\n";

    return 0;
}