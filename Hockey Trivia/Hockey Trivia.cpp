// Hockey Trivia.cpp : main project file.

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int main(){

	string ans;
	string questions[10];
	string answers[10];
	int score = 0;

	questions[0] = "Who was the most recent inductee of the Hockey Hall of Fame? \n a) Dave Andreychuk \n b) Pavel Datsyuk \n c) Mike Modano \n d) Alexander Ovechkin \n e) None of the above \n";
	questions[1] = "Which player had the most career wins? \n a) Jaromir Jagr \n b) Bobby Orr \n c) Wayne Gretzky \n d) Brett Hull \n e) Gordie Howe \n";
	questions[2] = "Which goalie had the most shutouts? \n a) Carey Price \n b) Martin Brodeur \n c) Glenn Hall \n d) Roberto Luongo \n e) Terry Sawchuk \n";
	questions[3] = "Which Canadian player was not born in Ottawa? \n a) Derek Roy \n b) Dan Boyle \n c) Marc Methot \n d) Sidney Crosby \n e) Jean-Gabriel Pageau \n";
	questions[4] = "What team in NHL histroy has the most Stanley Cup wins? \n a) Chicago Blackhawks \n b) Pittsburgh Penguins \n c) Montreal Canadiens \n d) Toronto Maple Leafs \n e) Los Angeles Kings \n";
	questions[5] = "What artist sung 'The Hockey Song'? \n a) Gordan Lightfoot \n b) Leonard Cohen \n c) Stompin' Tom Connors \n d) Stan Rogers \n e) None of the above \n";
	questions[6] = "Who is currently the youngest NHL player? \n a) Nolan Patrick \n b) Mikhail Sergachev \n c) Tyson Jost \n d) Julius Honka \n e) Nico Hischier \n";
	questions[7] = "Who is currently the youngest NHL captain? \n a) Connor McDavid \n b) Sidney Crosby \n c) Jonathan Toews \n d) Gabriel Landeskog \n e) Steve Yzerman \n";
	questions[8] = "What goalie was the first to score a goal? \n a) Martin Brodeur \n b) Mike Smith \n c) Patrick Roy \n d) Ron Hextall \n e) Billy Smith \n";
	questions[9] = "Which country came up with hockey? \n a) Russia \n b) Canada \n c) USA \n d) Czech Republic \n e) China \n";
	
	answers[0] = "a";
	answers[1] = "c";
	answers[2] = "b";
	answers[3] = "d";
	answers[4] = "c";
	answers[5] = "c";
	answers[6] = "e";
	answers[7] = "a";
	answers[8] = "d";
	answers[9] = "b";

	for (int i = 0; i < 10; i++) {
		cout << questions[i] << "\n";
		cin >> ans;
		if (ans == answers[i]) {
			cout << "\nCongratulations! \n\n";
			score++;
			cout << "Score: " << (score) << "\n\n";
		}
		else {
			cout << "\nIncorrect! \n\n";
			cout << "Score: " << (score) << "\n\n";
		}
	}


}
