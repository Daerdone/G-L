float modulo(in float a, in float b)
{
    return a-(b*floor(a/b));
}

void mainImage( out vec4 fragColor, in vec2 fragCoord )
{
    // Normalized pixel coordinates (from 0 to 1)
    vec2 uv = fragCoord/iResolution.xy;

    // Time varying pixel color
    vec3 col = modulo(uv.x, 0.1) <= 0.001 ? vec3(0, 0, 0) : vec3(1, 1, 0);

    // Output to screen
    fragColor = vec4(col,1.0);
}
 