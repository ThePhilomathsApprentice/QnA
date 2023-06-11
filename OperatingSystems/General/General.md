# Questions

## What is bit banging?

Bit banging means to operate on the GPIO pins manually using software HAL APIs becuase the hardware is not smart enough to do the protocol specific transactions on its own.

Many microcontrollers have a hardware SPI, and then all you have to do is write a byte to the output register, and the SPI controller will shift the data out, and at the same time receive data from the slave. You can get an interrupt when the transfer is complete, and then read the received data.
But if such intelligence is not present in the hardware, then we'll have to do the protocol specific GPIO pin estting and clearing manualy using the software APIs.
This is called bit banging.
