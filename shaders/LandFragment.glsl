#version 410 core

layout (location=0)out vec4 fragColour;
in vec3 landColour;
in vec2 vertUV;
in vec3 position;

void main(void)
{
    fragColour.rgb=landColour;
}
