#version 410 core
layout (location =0) in vec3 inVert;
/// @brief the normal passed in
layout (location =1) in vec3 inNormal;
/// @brief the in uv
layout( location=2)in vec2 inUV;
///in colour
layout(location=3) in vec3 inColour;

out vec3 landColour;
out vec2 vertUV;
out vec3 position;
uniform mat4 MVP;

void main(void)
{
    position=inVert;
    landColour=inColour;
    vertUV=inUV;
    gl_Position = MVP*vec4(inVert, 1.0);

}
