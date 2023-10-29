#include<stdio.h>
#include<required.h>
#include<string.h>
#define MAX 10

typedef struct{
	string name;
	int vote;
}
candidate;

candidate candidates[MAX];
int total_candidates;

bool count_vote(string name);
void print_winner();

int main(int argc, string argv[]){
	int i;
	if(argc <2 )
	{
		printf("Must have atleast 3 candidates.");
		return 1;
	}
	total_candidates=argc-1;
	if(total_candidates>MAX)
	{
		printf("Too many candidates!");
		return 2;
	}
	for(i=0; i<total_candidates; i++)
	{
		candidates[i].name=argv[i+1];
		candidates[i].vote=0;
	}
	int voter_count=get_int("How many voters?\n");
	for(i=0; i<voter_count; i++)
	{
		string name=get_string("Vote: ");
		if(!count_vote(name))
		{
			printf("Invalid\n");
		}
	}
	print_winner();
}

bool count_vote(string name)
{
	int i;
	for(i=0; i<total_candidates; i++)
	{
		if(strcmp(name,candidates[i].name)==0)
		{
			candidates[i].vote++;
			return true;
		}else
		{
			return false;
		}
	}
}
void print_winner()
{
	int i;
	int maxVotes=0;
	for(i=0; i<total_candidates; i++)
	{
		if(candidates[i].vote>maxVotes)
		{
			maxVotes=candidates[i].vote;
		}
	}
	for(i-0; i<total_candidates; i++)
	{
		if(candidates[i].vote==maxVotes)
		{
			printf("Winner %s\n",candidates[i].name);
		}
	}
	return;
}
