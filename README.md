
# Push Swap

Push Swap is a project designed to help you understand and master sorting algorithms. The objective of this project is to sort data on a stack, with a limited set of instructions, using the least number of actions. It involves both creating a sorting algorithm and understanding the complexity of various sorting techniques.

## Table of Contents

- [Introduction](#introduction)
- [Features](#features)
- [Requirements](#requirements)
- [Installation](#installation)
- [Usage](#usage)
- [Contributing](#contributing)
- [License](#license)

## Introduction

The Push Swap project consists of two main programs:
- **Push_swap**: A program that calculates and prints the smallest list of instructions to sort a stack of integers.
- **Checker**: A program that checks if a given sequence of instructions correctly sorts a stack of integers.

## Features

- Implementation of various sorting algorithms.
- Handles stacks of varying sizes.
- Provides a checker program to validate the sorting process.
- Efficiently sorts stacks using the least number of operations.

## Requirements

To build and run Push Swap, you need:
- A UNIX-like operating system (Linux, macOS, etc.)
- `make` utility
- `gcc` compiler

## Installation

Clone the repository to your local machine:

```sh
git clone https://github.com/ddcsoftdev/push-swap.git
cd push-swap
```

Build the project using `make`:

```sh
make
```

This will compile two executables: `push_swap` and `checker`.

## Usage

### Running Push Swap

To generate the sorting instructions for a stack of integers, run the `push_swap` executable followed by the list of integers:

```sh
./push_swap <list_of_integers>
```

Example:

```sh
./push_swap 3 2 5 1 4
```

This will output the list of instructions to sort the given integers.

### Running the Checker

To check if a sequence of instructions correctly sorts a stack of integers, run the `checker` executable followed by the list of integers. Then provide the instructions via standard input:

```sh
./checker <list_of_integers>
```

Example:

```sh
./checker 3 2 5 1 4
```

You can then input the instructions:

```
pb
pb
sa
ra
pa
pa
```

The `checker` will output whether the sequence of instructions successfully sorts the stack.

### Example Session

1. Generate sorting instructions:
    ```sh
    ./push_swap 3 2 5 1 4
    ```
    Output:
    ```
    pb
    pb
    sa
    ra
    pa
    pa
    ```

2. Check the instructions:
    ```sh
    ./checker 3 2 5 1 4
    ```
    Input:
    ```
    pb
    pb
    sa
    ra
    pa
    pa
    ```
    Output:
    ```
    OK
    ```

## Contributing

Contributions are welcome! Please fork the repository and open a pull request to add new features, fix bugs, or improve documentation.

1. Fork the repository.
2. Create a new branch (`git checkout -b feature-branch`).
3. Commit your changes (`git commit -am 'Add new feature'`).
4. Push to the branch (`git push origin feature-branch`).
5. Open a pull request.

## License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.
