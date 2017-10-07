#version 330 core
in  vec3 vPosition;
in  vec2 vTexCoord;
out vec2 fTex2dCoord;
uniform mat4 MVP;
void main()
{
  gl_Position = MVP * vec4(vPosition, 1.0);
  fTex2dCoord = vTexCoord;
};
