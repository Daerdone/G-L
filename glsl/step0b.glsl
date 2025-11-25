void mainImage( out vec4 fragColor, in vec2 fragCoord )
{
    // Normalized pixel coordinates (from 0 to 1)
    vec2 uv = fragCoord/iResolution.xy;

    // Time varying pixel color
    float distanceAuCentre = distance(fragCoord, iResolution.xy / 2.0);
    vec3 col = int(distanceAuCentre) % 20 < 15 ? vec3(0, 0, 0) : vec3(1, 0, 0);

    // Output to screen
    fragColor = vec4(col,1.0);
}
 