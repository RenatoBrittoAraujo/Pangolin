#pragma once

#include <vector>

#include <sophus/image/runtime_image.h>
#include <pangolin/maths/conventions.h>
#include <pangolin/render/device_buffer.h>
#include <pangolin/render/device_texture.h>
#include <pangolin/render/colormap.h>

#include <pangolin/gui/draw_layer.h>

namespace pangolin
{

struct DrawnSolids : public Drawable
{
    enum class Type {
        checkerboard
    };

    Type object_type;

    struct Params {
        Type object_type = Type::checkerboard;
    };
    static Shared<DrawnSolids> Create(Params p);
};

}
