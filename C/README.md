# Questions

## What does 1 word mean?

If we have a 32-**bit** processor, then the processor reads 32/8=4 **bytes** at a time, which means that 1 word is equal to 4 bytes.

If we have a 64-**bit** processor, then the processor reads 64/8=8 **bytes** at a time, which means that 1 word is equal to 8 bytes.

## What is structure padding?

Structure padding means,
the process of adding one or more empty bytes between the different data types to align data in memory. This is done by the compiler itself.

You can try out the below commands in the same directory, to understand better.

```sh
make structPaddingSample
```

## What is inline functions?

Functions that can be replaced by their definition at the call location.

Typically,
the definitions of these functions are very small
and
function calls are repetitive in nature.

You can try out the below commands in the same directory, to understand better.

```sh
make inlineFunctionSample
```

## Difference between inline function and macro function?

| inline Functions                        | macro as a Function                    |
| --------------------------------------- | -------------------------------------- |
| parsed by the compiler                  | expanded by the preprocessor           |
| does type checking                      | type checking of arguments is not done |
| defined using the **#define** directive | defined by the **inline** keyword      |


## Meaning of volatile keyword?

if we want any variable to be **NOT** stored in the processor registers, we will indicate the same to the compiler using the keyword volatile.

## C program Compilation Steps?

Compilation process in C happens in four steps:
+ pre-processing,
+ compiling,
+ assembling,
+ linking

## Union vs struct difference ?

| Union                                                        | struct                                                 |
| ------------------------------------------------------------ | ------------------------------------------------------ |
| block of memory that has only storage for the largest member | block of memory where memory for members don't overlap |

## Difference between EOS and RTOS?

## What is time slicing in CPU scheduling?

## What are software timers in RTOS?

## What is the difference between hardware interrupt and software interrupt?

## How to do pre-order, in-order and post-order traversal in BST?

## Write a simple BST tree implementation, i.e add, remove an sub-tree from a BST.

## function pointers in C? How to use them?
