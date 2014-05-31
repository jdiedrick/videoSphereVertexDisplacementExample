// fragment shader
#version 150

// this is how we receive the texture
uniform sampler2DRect tex0;
in vec2 varyingtexcoord;
in vec2 vUv;
out vec4 outputColor;
vec3 color;
in float noise;


void main()
{
    
    //color = vec3( vUv * ( 1. - 2. * noise ), 0.0 );
    //outputColor = vec4( color.rgb, 1.0 );
    outputColor = texture(tex0, vUv);


}
