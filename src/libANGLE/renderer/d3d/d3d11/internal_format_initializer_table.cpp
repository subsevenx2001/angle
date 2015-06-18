//
// Copyright 2015 The ANGLE Project Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
//
// internal_format_initializer_table:
//   Contains table to go from internal format and dxgi format to initializer function
//   for TextureFormat
//

#include "libANGLE/renderer/d3d/d3d11/internal_format_initializer_table.h"
#include "libANGLE/renderer/d3d/loadimage.h"

namespace rx
{

namespace d3d11
{

// TODO: This should be generated by a JSON file
InitializeTextureDataFunction GetInternalFormatInitializer(GLenum internalFormat,
                                                           DXGI_FORMAT dxgiFormat)
{
    switch (internalFormat)
    {
        case GL_RGB8:
        {
            switch (dxgiFormat)
            {
                case DXGI_FORMAT_R8G8B8A8_UNORM:
                {
                    return Initialize4ComponentData<GLubyte, 0x00, 0x00, 0x00, 0xFF>;
                }
                default:
                    break;
            }
        }
        case GL_RGB565:
        {
            switch (dxgiFormat)
            {
                case DXGI_FORMAT_R8G8B8A8_UNORM:
                {
                    return Initialize4ComponentData<GLubyte, 0x00, 0x00, 0x00, 0xFF>;
                }
                default:
                    break;
            }
        }
        case GL_SRGB8:
        {
            switch (dxgiFormat)
            {
                case DXGI_FORMAT_R8G8B8A8_UNORM_SRGB:
                {
                    return Initialize4ComponentData<GLubyte, 0x00, 0x00, 0x00, 0xFF>;
                }
                default:
                    break;
            }
        }
        case GL_RGB16F:
        {
            switch (dxgiFormat)
            {
                case DXGI_FORMAT_R16G16B16A16_FLOAT:
                {
                    return Initialize4ComponentData<GLhalf, 0x0000, 0x0000, 0x0000, gl::Float16One>;
                }
                default:
                    break;
            }
        }
        case GL_RGB32F:
        {
            switch (dxgiFormat)
            {
                case DXGI_FORMAT_R32G32B32A32_FLOAT:
                {
                    return Initialize4ComponentData<GLfloat, 0x00000000, 0x00000000, 0x00000000,
                                                    gl::Float32One>;
                }
                default:
                    break;
            }
        }
        case GL_RGB8UI:
        {
            switch (dxgiFormat)
            {
                case DXGI_FORMAT_R8G8B8A8_UINT:
                {
                    return Initialize4ComponentData<GLubyte, 0x00, 0x00, 0x00, 0x01>;
                }
                default:
                    break;
            }
        }
        case GL_RGB8I:
        {
            switch (dxgiFormat)
            {
                case DXGI_FORMAT_R8G8B8A8_SINT:
                {
                    return Initialize4ComponentData<GLbyte, 0x00, 0x00, 0x00, 0x01>;
                }
                default:
                    break;
            }
        }
        case GL_RGB16UI:
        {
            switch (dxgiFormat)
            {
                case DXGI_FORMAT_R16G16B16A16_UINT:
                {
                    return Initialize4ComponentData<GLushort, 0x0000, 0x0000, 0x0000, 0x0001>;
                }
                default:
                    break;
            }
        }
        case GL_RGB16I:
        {
            switch (dxgiFormat)
            {
                case DXGI_FORMAT_R16G16B16A16_SINT:
                {
                    return Initialize4ComponentData<GLshort, 0x0000, 0x0000, 0x0000, 0x0001>;
                }
                default:
                    break;
            }
        }
        case GL_RGB32UI:
        {
            switch (dxgiFormat)
            {
                case DXGI_FORMAT_R32G32B32A32_UINT:
                {
                    return Initialize4ComponentData<GLuint, 0x00000000, 0x00000000, 0x00000000,
                                                    0x00000001>;
                }
                default:
                    break;
            }
        }
        case GL_RGB32I:
        {
            switch (dxgiFormat)
            {
                case DXGI_FORMAT_R32G32B32A32_SINT:
                {
                    return Initialize4ComponentData<GLint, 0x00000000, 0x00000000, 0x00000000,
                                                    0x00000001>;
                }
                default:
                    break;
            }
        }
        default:
        {
            return nullptr;
        }
    }
}

}  // namespace d3d11

}  // namespace rx