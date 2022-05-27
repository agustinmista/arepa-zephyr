// ---------------------------------------- //
// Adafruit Trinket M0 driver               //
// ---------------------------------------- //

// User LED

void user_led_init();
void user_led_toggle();
void user_led_on();
void user_led_off();

// DotStar RGB LED

void dotstar_led_init();
void dotstar_led_set_rgb(int r, int g, int b);

// Sleep

void sleep(int millis);

// Printing

void print_string(char* str);