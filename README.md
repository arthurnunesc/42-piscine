# 42-piscine

All the code written during the 26 days of my Piscine at 42 Barcelona.

## subjects

- Every document, resource, norm or video given by 42 for each and every project will be on this directory on its specific folder(eg. c00, c01, rush00, etc).

## finished

- This folder contains every try of each project I set as finished. The folder naming convention is "<project_name>_<try_number>"(eg. c00_0 for the first try of the first C project). 

- If any project needs any change to be turned in again, the folder of the last try of the project shall be cloned into the new git repo created by the Intra and stay there until it is turned in again.

- When the project is set as finished in the Intra, it may be added to the finished folder without its respective .git folder to avoid conflicts.

## leftovers

- Houses project files which weren't asked to be turned in but were needed to be created to finish projects(eg. main.c files). The folder naming convention is "<project_name>_files"(eg. c04_files for the `main.c` files of the c04 project).

## how to test them

- If you want to try any of the C code in this repository, you will need to compile(or copy into the same file) both the function you want to run and its respective `main.c` file to be able to run the `a.out` file. For example:

`gcc finished/c04_0/ex02/ft_putnbr.c leftover/c04_files/ex02/main.c`

Note: Some `main.c` files are not present, either because the function is to simple, or because it is present somewhere else in previous projects. 
