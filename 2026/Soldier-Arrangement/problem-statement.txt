Q2 — Soldier Arrangement
Problem:

Arrange N soldiers in a line. Each soldier has a value from 1 to R.

Count all valid arrangements satisfying the three rules below.

Rules:
First soldier's value must be 1
Last soldier's value must be 'end' (given)
No two adjacent soldiers can have the SAME value
Example:

N = 4, R = 4, end = 3

Valid sequences (length 4, start = 1, end = 3, no adjacent equal):

1 2 4 3
1 2 1 3
1 3 1 3
1 3 2 3
1 3 4 3
1 4 1 3
1 4 2 3

Answer = 7