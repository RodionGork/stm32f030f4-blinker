# stm32f030f4-blinker

This is a kick-start project to work with STM32F0 controllers.
It uses arm-linux-gnueabi-gcc toolchain for compilation and java tool "BootStm32" for flashing (rxtx-java library needs to be installed also) - though there are also alternative tools (e.g. in Python).

Note that not all header files are needed for this project, but they are added for reference.

###Wiring

VDDA should be connected to power, otherwise chip is in reset state. If package has VSSA - it
also should be connected (to GND).

To enter boot mode it is sufficient to connect BOOT0 to power during reset. Do not get confused
with absent BOOT1 pin - it is in proper state internally.

For TSSOP-20 package

- pin 16 (VDD) to +3.3
- pin 5  (VDDA) to +3.3
- pin 15 (GND) to GND
- pin 1  (BOOT0) to +3.3
- pin 4  (RESET) to GND, temporarily
- pin 17  (USART1_TX) to RX of the FTDI-cable
- pin 18  (USART1_RX) to TX of the FTDI-cable

Not sure, but initially I thought pin 8 and 9 are TX and RX, but this works for me no more. May be worth to try both variants.

