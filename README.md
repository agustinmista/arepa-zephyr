# arepa-zephyr

Programming microcontrollers using the arepa language

## Instructions

```
# Open a docker container with the Zephyr toolchain installed
$ ./scripts/start_zephyr
# Build the project
$ ./scripts/build blinky adafruit_trinket_m0
# Flash the board (assuming it's attached to /dev/ttyACM0)
$ ./scripts/flash
```

