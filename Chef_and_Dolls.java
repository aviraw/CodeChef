/*
Chef and Dolls
 

Chef is fan of pairs and he likes all things that come in pairs. He even has a doll collection in which the dolls come in pairs. One day while going through his collection he found that there are odd number of dolls. Someone had stolen a doll!!!

Help chef find which type of doll is missing..

Input
The first line contains an integer T, the number of test cases.
The first line of each test case contains an integer N, the number of dolls.
The next N lines are the types of dolls that are left.

Output
For each test case, display the type of doll that doesn't have a pair, in a new line.

*/



import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
	    Scanner sc = new Scanner(System.in);
		// Get the input for cycles of input
		int cycle = sc.nextInt();
		while(cycle-- > 0) {
		    // Get no.of inputs to take
		    int n = sc.nextInt();
		    int stolen = 0;
		    while(n-- > 0) {
		        // XOR to get non pair numbers
		        stolen ^= sc.nextInt();
		    }
		    System.out.println(stolen);
		}
	}
}
