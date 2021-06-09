#include <iostream>
#include <string.h>
#include <vector>

class Question
{
private:
	std::string question;
	unsigned points;
public:
	std::string getQuestion() const {
		return question;
	}
	unsigned getPoints() const {
		return points;
	}
	virtual void print(std::ostream& os) const = 0;
	virtual void read(std::istream& is) = 0;
	virtual unsigned ask() const = 0;
};

class ClosedQuestion : public Question {
private:
	std::vector<std::string> answers;
	int correct;
public:
	unsigned ask() const override {
		int givenAnswer;
		std::cout << getQuestion() << '\n';
		for (int i = 0; i < answers.size; i++)
		{
			std::cout << answers[i] << '\n';
		}
		std::cin >> givenAnswer;
		if (givenAnswer == correct)
		{
			return getPoints();
		}
		else
		{
			return 0;
		}
	}

	void print(std::ostream& os) const {
		os << 0 << getQuestion() << '\n' << getPoints() << '\n' << correct;
	}

	void read(std::istream& is) {
		char* buffer = new char[256];
		is.getline(buffer, 250);
		//set_question(temp);
		is >> correct;
	}
};

class OpenQuestion : public Question {
private:
	std::string correctAnswer;
public:
	unsigned ask() const override {

		std::string answer;
		std::cout << getQuestion() << '\n';
		std::cin >> answer;
		if (answer == correctAnswer)
		{
			return getPoints();
		}
		else
		{
			return 0;
		}
	}
	void print(std::ostream& os) const {
		os << 1 << getQuestion() << '\n' << getPoints() << '\n' << correctAnswer;
	}

	void read(std::istream& is) {
		char* buffer = new char[256];
		is.getline(buffer, 250);
		//set_question(temp);
	}
};

class Test {
private:
	std::vector<Question*> questions;

public:
	void read(std::istream& is)
	{
		int count;
		is >> count;
		for (int i = 0; i < count; i++)
		{
			int type;
			is >> type;
			if (1 == type)
			{
				Question* open = new OpenQuestion();
				open->read(is);
				questions.push_back(open);
			}
			else
			{
				Question* closed = new ClosedQuestion();
				closed->read(is);
				questions.push_back(closed);
			}
			
		}
	}
	void askAll() const {
		for (int i = 0; i < questions.size; i++)
		{
			questions[i]->ask();
		}
	}
};

struct Node {
	int data;
	Node* next;
};

class List {
private:
	Node* start;
public:
	void pushFront(int data) {
		Node* temp = new Node{ data };
		temp->next = start;
		start = temp;
	}

	void eraseDuplicates() {
		Node* current = start;

		while (current)
		{
			Node* next = current->next;
			while (next)
			{
				if (current->data == next->data)
				{
					current->next = next->next;
					delete next;
				}
			}
		}


	}
};





int main() {


}