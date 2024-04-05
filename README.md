# Parallelogram Diagonals Bisect

This C program demonstrates the proof that the diagonals of a parallelogram bisect each other using vectors.

## How It Works

1. The program defines a structure `Point` to represent a 2D point with `x` and `y` coordinates.
2. It contains functions to calculate the midpoint of a line segment given two points (`midpoint`) and to check if two points are equal (`areEqual`).
3. In the `main` function, the user is prompted to input the coordinates of the vertices of the parallelogram (A, B, C, D).
4. The program then calculates the midpoints of the diagonals (AC and BD) using the `midpoint` function.
5. It checks if the midpoints of the diagonals are equal using the `areEqual` function.
6. If the midpoints are equal, the program prints "The diagonals bisect each other." Otherwise, it prints "The diagonals do not bisect each other."

## How to Use

1. Compile the program using a C compiler such as GCC:

    ```
    gcc -o parallelogram_diagonals_bisect parallelogram_diagonals_bisect.c
    ```

2. Run the compiled executable:

    ```
    ./parallelogram_diagonals_bisect
    ```

3. Follow the on-screen prompts to enter the coordinates of the vertices of the parallelogram.

4. The program will then determine whether the diagonals of the parallelogram bisect each other.

## Example

Enter the coordinates of vertex A (x y): 0 0
Enter the coordinates of vertex B (x y): 4 2
Enter the coordinates of vertex C (x y): 6 4
Enter the coordinates of vertex D (x y): 2 6
The diagonals bisect each other.

csharp
Copy code

## License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.