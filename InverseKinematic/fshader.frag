#ifdef GL_ES
// default precision to medium
precision mediump int;
precision mediump float;
#endif

varying vec3 v_color;

void main(void)
{
    gl_FragColor.rgb = v_color;
    gl_FragColor.a = 1.0;
}
