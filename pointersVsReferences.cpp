/* 
		-------------- DIFFERENCE BETWEEN pointers & reference variables --------------
_______________________________________________________________________________________________
____________ pointers ______________________|______________ reference variable _______________|
											|												  |
1. can perform arithmetic operations on		| 1. can not perform arithmetic operations on     |
pointers									| references									  |
											|												  |	
2. pointer may or may not be initialized	| 2. reference var must be initialized with an    |
at time of declaration (wild pointer)		| existing variable at time of declaration        |
											|                                                 |
3. pointer can be reassigned to point to	| 3. reference var can not be reassigned to refer |
another variable (if not const)				| another variable                                |
											|                                                 |  
4. pointer can be dereferenced				| 4. reference var can not be dereferenced        |
____________________________________________|_________________________________________________|

*/
