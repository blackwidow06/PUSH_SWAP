*This project has been created as part of the 42 curriculum by malavaud.*

# Push Swap

## Description

**push_swap** is a project from the 42 curriculum focused on sorting algorithms and optimization.  
The program receives a list of integers and must output a **sequence of operations** that sorts these numbers in ascending order **using only two stacks (A and B)** and a restricted set of instructions (`sa`, `sb`, `ss`, `pa`, `pb`, `ra`, `rb`, `rr`, `rra`, `rrb`, `rrr`).

The goal is to produce **the shortest and most efficient sequence of moves possible**, respecting strict limits defined in the subject.

## Instructions 

### Requirements

* macOS or Linux
* A C compiler (gcc)

### Compilation

Run the following command at the root of the repository:

```bash
make
```

To recompile from scratch:

```bash
make fclean && make
```
### Execution

Run the program:

```bash
./push_swap <numbers>
```

Example:

```bash
./push_swap "3" "2" "1"
```

This will output a sequence of operations such as:

```bash
sa
rra
```

### Exemple Error Output

If any input is invalid (duplicates, non_integers...) the program must display:

```bash
Error
```
Exemple of invalid inputs:

```bash
./push_swap "4 3 a"
./psuh_swap " 1 2 2"
./push_swap "1111111111111111111111"
```

## Ressources

### Documentation & References 

* 42 subject PDF for *push_swap*
* Articles on radix sorting and index compression
* Guides on stack operations and algorithm design


### How AI Was Used

AI (ChatGPT) was used to:

* Rephrase and structure the README
* Provide examples of wording and organization
* Suggest conventional sections and descriptions
