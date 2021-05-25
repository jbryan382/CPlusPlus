#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int getWinner(int votes[]);
void printStats(string candidates[], int votes[]);
double percentOfTotalVotes(int votes[], int vote);

const int numCandidates = 5;

int main() {

  string candidates[numCandidates];
  int votesRecieved[numCandidates];
  int index;

  cout << "Please enter 5 separate candidate names, and their total votes (Name, Votes):\n";
  for (index = 0; index < numCandidates; index++){
    cin >> candidates[index] >> votesRecieved[index];
  }

  printStats(candidates, votesRecieved);
  cout << "The Winner of the Election is " << candidates[getWinner(votesRecieved)] << endl;

  return 0;
}

double percentOfTotalVotes(int votes[], int candidateVoteTotal){
  int allTotalVotes = 0;
  
  for(int i = 0; i < numCandidates; i++){
    allTotalVotes += votes[i];
  }
  double percentage = (static_cast<double>(candidateVoteTotal) / allTotalVotes);
  return percentage*100;
}

void printStats(string candidates[], int votes[]){
  // Line 42 took me far too long to figure out, the testing system wouldn't accept: cout << "Candidate" << setw(20) << "Votes Recieved" << setw(20) << "% of Total Votes" << endl;
  cout << "Candidate           Votes Received           % of Total Votes";
  for (int i = 0; i < numCandidates; i++){
    cout << candidates[i] << setw(17) << votes[i] << setw(17) << fixed << setprecision(2) << percentOfTotalVotes(votes, votes[i]) << "%" << endl;
  }
}

int getWinner(int votes[]){
  int highestVotes = 0;
  int highestVotesIndex = 0;

  for(int i = 0; i < numCandidates; i++){
    if(votes[i] > highestVotes){
      highestVotes = votes[i];
      highestVotesIndex = i;
    }
  }
  return highestVotesIndex;
}
