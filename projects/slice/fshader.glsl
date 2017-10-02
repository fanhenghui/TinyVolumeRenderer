#version 330 core
uniform sampler2D tex;
in vec2 fTexCoord;
layout(location = 0) out vec4 color;
void main()
{
  color = vec4(texture(tex, fTexCoord).rgb, 1.0f);
};