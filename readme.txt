Name of the group members:
Dhairya Agrawal 2020A7PS0130H
Vedant Mathur 2020A7PS2047H
Jeet Shah 2020A7PS0155H
Pulkit Agrawal 2020A7PS2052H
Ayush Agrawal 2020A7PS0160H

For each folder, standard commands have to be followed to run the lex and yacc files.
Let the names of the lex and yacc files be foo.l and foo.y respectively.

The following will have to be done to run the files:

yacc -d foo.y
lex foo.l
cc y.tab.c lex.yy.c -ll
./a.out

A input file is kept on in the main folder. Each of the programs excess that input file only.
