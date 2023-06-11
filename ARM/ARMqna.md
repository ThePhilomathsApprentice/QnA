# Questions

## What bit banding?

Bit banding allows to address 1 bit using an address.
Conventional C bit setting and clearing requires the whole data to be read/updated and then written again requiring multiple machine cycles.
As we dont know what other bits are holding in that memory.
With bit banding, we dont have to care about any other bits in that data.
We can directly set/clear a particular bit using its dedicated address, assuming that particular bit is in the bit-band region.

"Mapping of a complete word of memory onto a single bit in the bit-band region."
