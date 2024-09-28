#version 410 core

layout (location=0)out vec4 fragColour;
in vec3 landColour;
in vec2 vertUV;
in vec3 position;

void main(void)
{
    //hola
    fragColour.rgb=landColour;

/*    if(position.z<0)
    {
        fragColour= vec4(0.0,0.5,0.8,1.0);
    }
    else
        if(position.z>0.5)
        {
            fragColour= vec4(0.9,0.8,0.4,1.0);
        }
        else
        {
            fragColour= vec4(0.1,0.3,0.3,1.0);
        }
*/
}
