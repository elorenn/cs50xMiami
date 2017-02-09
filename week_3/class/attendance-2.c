#include <stdio.h>
#include <string.h>
#include <cs50.h>

void printStudents ( string students [], int count );
void sortStudents ( string students [], int size );
int findStudent ( string find, string students [], int size );
int findStudentBinary ( string find, string students [], int size );

/**
 * Creates an attendance list of students who were present in a class. This 
 * list is implmented as a partially filled array. 
 * Author: Ken Loomis
 */
int main ( void )
{
    // Initialize the capacity to the maximum number of students.
    const int CAPACITY = 200;
    // Set the size of the array to be the capacity.
    string students [ CAPACITY ];
    // Initialize the count to be the current number of students entered so far.
    int count = 0;
    string entry = "";
    
    printf ( "Enter the student's names (1 per line). Type \"done\" when finished:\n" );
    do
    {
        entry = GetString ( );
        if ( strcmp ( entry, "done" ) != 0 && count < CAPACITY )
        {
            // Add the entry to the array at the next available position...
            students [ count ] = entry;
            // And increase the value of count.
            count++;
        }
    }
    while ( strcmp ( entry, "done" ) != 0 && count < CAPACITY );
    
    printStudents ( students, count );
    sortStudents ( students, count );
    printStudents ( students, count );
    
    printf ( "Enter the student's name to find in the list: " );
    string find = GetString ( );
    //int index = findStudent ( find, students, count );
    int index = findStudentBinary ( find, students, count );
    if ( index < 0 )
    {
        printf ( "The student cannot be found.\n" );
    }
    else
    {
        printf ( "The student is present at index = %i.\n", index );
    }
    
    return 0;
}

/**
 * Displays the contents of the students list to the terminal.
 */
void printStudents ( string students [], int size )
{
    printf ( "Student list:\n" );
    for ( int i=0; i < size; i++ )
    {
        printf ( "\t%s\n", students[i] );
    }
}

/**
 * Sorts the contents of the students list so that the list
 * can be quickly searched. Uses a bubble sort.
 */
void sortStudents ( string students [], int size )
{
    bool swapped = true;
    int j = size;
    while ( swapped == true )
    {
        swapped = false;
	    for ( int i = 1; i < j; i++ )
	    {
		    if ( strcmp ( students[i-1], students[i] ) > 0 )
		    {
		        string temp = students[i-1];
			    students[i-1] = students[i];
			    students[i] = temp;
			    swapped = true;
			    //printf ( "Swap: %s:%s\n", students[i-1], students[i]);
		    }
	    }
	    //printStudents ( students, size );
	    j--;
    }
}

/**
 * Searches an attendance list of students who were present in a class for a
 * particular student. If the student is found, the index position of the 
 * student is returned. If the student is not in the list, -1 is returned.
 */
int findStudent ( string find, string students [], int size )
{
    int index = -1;
    for ( int i=0; i < size; i++ )
    {
        if ( strcmp ( find, students[i] ) == 0 )
        {
            index = i;
        }
    }
    return index;
}

/**
 * Searches an attendance list of students who were present in a class for a
 * particular student using a binary search. If the student is found, the 
 * index position of the student is returned. If the student is not in the 
 * list, -1 is returned.
 */
int findStudentBinary ( string find, string students [], int size )
{
    int index = -1;
    int start = 0;
    int end = size-1;
    
    while ( start <= end && index < 0 )
    {
        int mid = ( start + end ) / 2;
        int result = strcmp ( find, students[mid] );
        if ( result < 0 )
        {
            end = mid-1;
        }
        else if ( result > 0 )
        {
            start = mid+1;
        }
        else
        {
            index = mid;
        }
    }
    return index;
}

