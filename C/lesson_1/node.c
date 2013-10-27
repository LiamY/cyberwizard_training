#include <stdio.h>


struct node{	//This is a structure declaration. All declarations of any kind begin with a type followed by a name
	/*
		A struct is a data type that you make yourself. Every struct you make has one of everything that you define it to contain. In this case
		we will be giving the structure 2 attributes. A structure can only contain data types, thus it can contain predefined types like 'int'
		... or other structs!
	*/
	char a;				//This is a basic example of a variable declaration. The syntax goes 'type -> name -> ;'

	struct node* next;	//Aha! Our first instance of a pointer the syntax for a pointer is that there is a '*' before the variable name and after
						//the variable type in the declaration. The variable 'next' is now an envelope with an address in it.
						//An address to what? An address to a 'struct node'.
						//To make things slightly confusing, this line can be written as 'struct nod *next' and it means the same thing.
};

//code execution begins here!
int main(){		//This is a function declaration. Every program must have a main() function so that it knows where to begin code execution.
				//Functions, unlike other declarations, to not need a semicolon at the end as long as they have an open and closing curly brace.
	char input;
	struct node* top_node;
	struct node* new_node;
	top_node = NULL;



	//CODE HERE: make a call to the 'printf()' function so that it prints "Now running node.c" to the terminal after you run the code HINT: first.c
	while(1)	//To understand this line, read about while loops!
	{
		new_node = build_node();

		//CODE HERE: make it print "type a character and press enter"
		
		scanf("%c", input);
		
		//CODE HERE: uncomment the line below and finish it so that it puts the input character into the node
		//new_node.a = ;

		new_node.next = top_node;
		top_node = new_node;

		//CODE HERE: uncomment the line below and finish it so it prints the char in the top node
		//printf("blahblah", blahblah);
	}

	//CODE HERE: make it print "press ctrl-c to exit"
	return 0;	//This is main, so nothing calls this function. So the 0 doesn't go anywhere but you have to put it in anyway or it g++ gets mad
}

//The following few lines are also function declarations. Don't worry about these just yet, their purpose will be explained later.


struct node* build_node(){
	struct node* new_node;
	new_node = (struct node*)malloc(len(struct node));	//Yikes, this one is a little complex. There are several concepts in this line:
														//in order they are - assignment, typecasting, memory allocation, function call
	/*
		Alright so lets break it down:
			new_node = blahblahblah;	sets the variable new_node equal to whatever is on the other side of the equals
			(struct node*)				typecasts the value to a 'struct node pointer' so that it's the same type as 'new_node' 
			malloc(blahblah)			makes space for a variable that doesn't disappear when the function ends
			len(struct node)			returns the length of a 'struct node' data structure
	*/
	return new_node;					//Returns the value stored in 'new_node' to wherever the function was called from
}








