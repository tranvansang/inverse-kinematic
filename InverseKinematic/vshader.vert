#ifdef GL_ES
//set precision to medium
precision mediump int;
precision mediump float;
#endif

uniform mat4 mvp_matrix;

attribute vec2 a_position;
attribute vec3 a_color;

varying vec3 v_color;

void main(void)
{
    gl_Position = mvp_matrix * vec4(a_position, 0, 1);

    //v_texcoord = a_texcoord;
    v_color = a_color;
}
