# Electorial-Voting-System
I have developed a project which is helpful for online voting using c programming
#include&lt;stdio.h&gt;

#define CANDIDATE_COUNT

#define CANDIDATE1 &quot;BJP&quot;
#define CANDIDATE2 &quot;AAP&quot;
#define CANDIDATE3 &quot;INC&quot;
#define CANDIDATE4 &quot;BSP&quot;

int votesCount1=0, votesCount2=0, votesCount3=0,
votesCount4=0, spoiledtvotes=0;

void castVote(){
int choice;
printf(&quot;\n\n ### Please choose your Candidate ####\n\n&quot;);
printf(&quot;\n 1. %s&quot;, CANDIDATE1);
printf(&quot;\n 2. %s&quot;, CANDIDATE2);
printf(&quot;\n 3. %s&quot;, CANDIDATE3);
printf(&quot;\n 4. %s&quot;, CANDIDATE4);

printf(&quot;\n 5. %s&quot;, &quot;None of These&quot;);

printf(&quot;\n\n Input your choice (1 - 4) : &quot;);
scanf(&quot;%d&quot;,&amp;choice);

switch(choice){
case 1: votesCount1++; break;
case 2: votesCount2++; break;
case 3: votesCount3++; break;
case 4: votesCount4++; break;
case 5: spoiledtvotes++; break;
default: printf(&quot;\n Error: Wrong Choice !! Please retry&quot;);
//hold the screen
getchar();
}
printf(&quot;\n thanks for vote !!&quot;);
}

void votesCount(){
int pin;
printf(&quot;Enter pin&quot;);
scanf(&quot;%d&quot;,&amp;pin);
if(pin==9318){

printf(&quot;\n\n ##### Voting Statics ####&quot;);
printf(&quot;\n %s - %d &quot;, CANDIDATE1, votesCount1);
printf(&quot;\n %s - %d &quot;, CANDIDATE2, votesCount2);
printf(&quot;\n %s - %d &quot;, CANDIDATE3, votesCount3);
printf(&quot;\n %s - %d &quot;, CANDIDATE4, votesCount4);
printf(&quot;\n %s - %d &quot;, &quot;Spoiled Votes&quot;, spoiledtvotes);
}
else{
printf(&quot;wrong pin&quot;);
}
}
void getLeadingCandidate(){
printf(&quot;\n\n #### Leading Candidate ####\n\n&quot;);
if(votesCount1&gt;votesCount2 &amp;&amp;
votesCount1&gt;votesCount3 &amp;&amp; votesCount1 &gt;votesCount4)
printf(&quot;[%s]&quot;,CANDIDATE1);
else if (votesCount2&gt;votesCount3 &amp;&amp;
votesCount2&gt;votesCount4 &amp;&amp; votesCount2 &gt;votesCount1)
printf(&quot;[%s]&quot;,CANDIDATE2);
else if(votesCount3&gt;votesCount4 &amp;&amp;
votesCount3&gt;votesCount2 &amp;&amp; votesCount3 &gt;votesCount1)
printf(&quot;[%s]&quot;,CANDIDATE3);
else if(votesCount4&gt;votesCount1 &amp;&amp;
votesCount4&gt;votesCount2 &amp;&amp; votesCount4 &gt;votesCount3)

printf(&quot;[%s]&quot;,CANDIDATE4);
else
printf(&quot;----- Warning !!! No-win situation----&quot;);

}

int main()
{
int i;
int choice;

do{
printf(&quot;\n\n ###### Welcome to Election 2022 #####&quot;);
printf(&quot;\n\n 1. Cast the Vote&quot;);
printf(&quot;\n 2. Find Vote Count&quot;);
printf(&quot;\n 3. Find leading Candidate&quot;);
printf(&quot;\n 0. Exit&quot;);

printf(&quot;\n\n Please enter your choice : &quot;);
scanf(&quot;%d&quot;, &amp;choice);

switch(choice)
{
case 1: castVote();break;
case 2: votesCount();break;
case 3: getLeadingCandidate();break;
default: printf(&quot;\n Error: Invalid Choice&quot;);
}
}while(choice!=0);

getchar();

return 0;
}
