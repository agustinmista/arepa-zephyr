#include <zephyr/zephyr.h>
// #include <zephyr/device.h>
// #include <zephyr/drivers/gpio.h>
// #include <zephyr/drivers/led_strip.h>
// #include <zephyr/drivers/spi.h>
// #include <zephyr/sys/util.h>

#include "trinket.h"

// Semaphore colors

void red()    { dotstar_led_set_rgb(255, 0,   0); }
void green()  { dotstar_led_set_rgb(0,   255, 0); }
void yellow() { dotstar_led_set_rgb(255, 255, 0); }

// Entry point

void main() {

	user_led_init();
	dotstar_led_init();

	while (1) {

		print_string("Go!");
		green();
		sleep(3000);

		print_string("Caution!");
		yellow();
		sleep(2000);

		print_string("Stop!");
		red();
		sleep(3000);

		print_string("Caution!");
		yellow();
		sleep(1000);

	}
}
