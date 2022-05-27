#include <zephyr/zephyr.h>
#include <zephyr/drivers/led_strip.h>
#include <zephyr/drivers/spi.h>

#include "trinket.h"

// ---------------------------------------- //
// Adafruit Trinket M0 driver               //
// ---------------------------------------- //

// User LED

static const struct gpio_dt_spec user_led = GPIO_DT_SPEC_GET(DT_ALIAS(led0), gpios);

void user_led_init() {
	gpio_pin_configure_dt(&user_led, GPIO_OUTPUT_ACTIVE);
}

void user_led_toggle() {
	gpio_pin_toggle_dt(&user_led);
}

void user_led_on() {
	gpio_pin_set_dt(&user_led, 1);
}

void user_led_off() {
	gpio_pin_set_dt(&user_led, 0);
}

// DotStar RGB LED

const struct device* dotstar_led;

void dotstar_led_init() {
	dotstar_led = DEVICE_DT_GET_ANY(apa_apa102);
	struct led_rgb black = { .r = 0, .g = 0, .b = 0 };
	led_strip_update_rgb(dotstar_led, &black, 1);
}

void dotstar_led_set_rgb(int r, int g, int b) {
	struct led_rgb color = { .r = (char) r, .g = (char) g, .b = (char) b };
	led_strip_update_rgb(dotstar_led, &color, 1);
}

// Sleep

void sleep(int millis) {
	k_msleep(millis);
}

// Printing

void print_string(char* str) {
	printk("%s\n", str);
}