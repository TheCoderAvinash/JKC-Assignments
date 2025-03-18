# What is a Multiplexer? 
> ## A Multiplexer (MUX) is a digital electronic device used to select and transmit one of several input signals to a single output line, based on a control signal or set of control signals. It is essentially a multi-input, single-output switch.

# What do you mean by Positional Number System?
> ## A Positional Number System is a numeral system where the value of a digit depends on its position within a number. Common examples include the decimal, binary, and hexadecimal systems.

# Convert (124)decimal into binary.
> ## (1111100)binary 

# Convert (7321.1025)octal to ()binary.
> ## (3793.1301)decimal and (111011010001.001000010101)binary

# 2's complement for (100010100.10010)binary.
> ### 1's complement -> (011101011.01101)binary ((it's reversed 0->1, 1->0))
> ## 2's complement -> (011101011.01110)binary ((adding 0.00001))

# What is Boolean Algebra?
> ## Boolean Algebra is a branch of mathematics that deals with binary variables and logical operations (AND, OR, NOT) to simplify expressions and solve problems in computer science and digital circuit design.

# Define Cache Memory.
> ## Cache memory is a small, high-speed storage located between the CPU and main memory, designed to store frequently accessed data, reducing access time and improving overall system performance.

# What is the use of Data Bus?
> ## A data bus is used to transfer data between components in a computer system, such as between the CPU, memory, and input/output devices, enabling communication and data exchange. 

# What is Program Counter?
> ## The Program Counter (PC) is a register in the CPU that holds the address of the next instruction to be executed, ensuring the sequential execution of programs in memory. 

# What do you mean by Operational Code?
> ## Operational Code, or OpCode, is a part of instruction given in the computer's machine language that specifies the operation to be performed, such as addition, subtraction or data transfer.

# What is the basic concept of Stack Addressing?
> ## Stack Addressing is an addressing method where the data is accessed from or stored at the top of the stack. Operations like push, or pop are performed in this method.

# What do you mean by Locality of Reference?
> ## Locality of Reference refers to the tendency of a program to access a small/localised set of memory locations repeatedly, either spatially(nearby) or temporarily(recently stored), optimising performance.

# Define Address Space and Memory Space.
> ## Address Space is the range of memory addresses a system can use, while memory space refers to the actual physical/virtual memory available for storing data or instructions.

# What is Overflow? How to detect Overflow?
> ## Overflow occurs when the calculation exceeds the maximum limit that can be stored in a register. Overflow can be detected by monitoring the carry or sign bit after an arithmetic operation.

# What is stack pointer?
> ## Stack Pointer is a register in the CPU that tracks the memory location of the topmost element of a stack. It stores the most recent data that has been pushed onto the stack or the next available location.

# What is a Flip-Flop?
> ## A flip-flop is a fundamental digital electronic circuit used to store and manipulate a single bit of data. It is a bistable multivibrator, meaning it has two stable states, typically representing binary 0 or 1. Flip-flops are essential components in sequential logic circuits, as they retain their state until instructed to change, making them ideal for memory storage, data transfer, and synchronization in digital systems.

# Write down the differences between combinational and sequential circuits.
>### 1. Outputs from Combinational Circuits are affected immediately on changing the inputs. On the other hand, Sequential Circuit are time-dependent outputs, as it depends on current input(s) and past sequence of inputs.
>### 2. Combinational Circuits do not have any record for the previous inputs, whereas sequential circuits store the previous inputs. It is possible through the presence of memory elements(register/flip-flops)
>### 3. Combinational circuits do not have a feedback loop or time-dependancy, but sequential circuits have feedback loop and are time-dependent in nature.
> ### Examples: Combi- Adders, Multiplexers, Encoders, Logic Gates. Sequen- Flip-flops, registers, counters, memory devices

| **Feature**                 | **Combinational Circuits**           | **Sequential Circuits**             |
|-----------------------------|--------------------------------------|-------------------------------------|
| **Output Dependence**       | Depends only on current inputs      | Depends on current and past inputs |
| **Memory**                  | No memory, no history of inputs     | Has memory (stores past states)    |
| **Examples**                | Adders, multiplexers, logic gates   | Flip-flops, registers, counters    |
| **Time Dependence**         | No time dependence                  | Time-dependent (clock-driven)      |

# Draw the block diagram of 2 to 4 line decoder with the help of truth table 
>## Circuit ![](https://www.elprocus.com/wp-content/uploads/2-to-4-Decoder-Circuit-1.jpg)
>## Truth Table ![](https://www.elprocus.com/wp-content/uploads/truth-table1.jpg)

# Prove the De-Morgan's theorem with the help of truth table.
>## First De-Morgan's theorem: (A ∧ B)' = A' ∨ B'
> |-- **A** --|-- **B** --|-**A ∧ B**-|-**(A ∧ B)'** -|--- **A'** ---|-- **B'** --|---**A' ∨ B'**---|<br>|-------|------|----------|-------------|--------|---------|-------------|<br>|-- 0 --|-- 0--|--- 0 ---- |----- 1 ------|-- 1 ---|--- 1 -- |----- 1 -----|<br>|-- 0 --|-- 1--|--- 0 ---- |----- 1 ------|-- 1 ---|--- 0 -- |----- 1 -----|<br>|-- 1 --|-- 0--|--- 0 ---- |----- 1 ------|-- 0 ---|--- 1 -- |----- 1 -----|<br>|-- 1 --|-- 1--|--- 1 ---- |----- 0 ------|-- 0 ---|--- 0 -- |----- 0 -----|

>## Second De-Morgan's theorem: (A ∨ B)' = A' ∧ B'
> |--**A**--|--**B**--|---**A ∧ B**---|---**(A ∧ B)'**---|--**A'**--|--**B'**--|--**A' ∨ B'**--|<br>
|------|-----|------------|---------------|------|-------|------------|<br>
|-- 0 --|- 0 -|---- 0 -----|------ 1 ------|-- 1 --|-- 1 --|---- 1 -----|<br>
|-- 0 --|- 1 -|---- 0 ----|------ 1 -------|-- 1 --|-- 0 --|---- 1 -----|<br>
|-- 1 --|- 0 -|---- 0 ----|------ 1 -------|-- 0 --|-- 1 --|---- 1 -----|<br>
|-- 1 --|- 1 -|---- 1 ----|------ 0 -------|-- 0 --|-- 0 --|---- 0 -----|


# Explain the function of ROM chip.
>## A **ROM (Read-Only Memory)** chip is a type of non-volatile storage used in electronic devices to permanently store data. Unlike RAM, ROM retains its contents even when the power is switched off. It is primarily used to store firmware or software that does not need frequent updates, such as the system's bootstrap code, device drivers, or embedded software in various systems. ROM chips provide essential instructions required to boot up a computer or device, ensuring that critical system operations are available immediately after powering on. Its data is typically written during manufacturing and cannot be easily modified afterward.

# What is register? Specify the different types of register according to different I/O types.
> ## A **register** is a small, high-speed storage location within a computer's CPU used to hold data, addresses, or control information temporarily during processing. Registers enable fast access to critical data and instructions. Depending on their I/O functions, registers can be categorized into several types:
>#### 1. **Data Registers**: Store temporary data during operations (e.g., Accumulator).
>#### 2. **Address Registers**: Store memory addresses (e.g., Program Counter).
>#### 3. **Control Registers**: Manage CPU and peripheral device operations (e.g., Status Register).
>#### 4. **I/O Registers**: Facilitate data transfer between the CPU and I/O devices.
>#### 5. **Shift Registers**: Convert data between serial and parallel formats for I/O operations.

# State the different modes of data transfer in I/O organisation.

>## In I/O organization, different modes of data transfer define how data moves between the CPU, memory, and I/O devices. The primary modes are:
>#### 1. **Programmed I/O (PIO)**: The CPU directly controls the data transfer, checking device status and initiating transfers, leading to high CPU involvement.
>#### 2. **Interrupt-Driven I/O**: The CPU is interrupted by the I/O device when it's ready to transfer data, allowing the CPU to perform other tasks while waiting.
>#### 3. **Direct Memory Access (DMA)**: The DMA controller handles data transfer between I/O devices and memory, minimizing CPU involvement and improving efficiency, especially for large transfers.
>#### 4. **Memory-Mapped I/O**: I/O devices are mapped to memory addresses, and the CPU accesses them using regular memory instructions.
>#### 5. **Channel I/O**: A specialized controller, the channel, manages data transfers independently of the CPU, enhancing throughput and handling complex operations.