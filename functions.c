# include <stdio.h>
void message1( ) ;
void message2( ) ;
int main( )
{
/* The order in which functions gets called is imp
not the order in which they r defined 
However, it is advisable to define the functions in the same order in which they 
are called. This makes the program easier to understand.*/ 
message1( ) ;
message2( ) ;
return 0 ;
}
void message2( )
{
printf ( "But the butter was bitter\n" ) ;
}
void message1( )
{
printf ( "Mary bought some butter\n" ) ;
}