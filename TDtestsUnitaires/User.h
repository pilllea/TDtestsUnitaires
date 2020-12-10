#pragma once
class User
{
	//Choice of action given by the user
	int choice;

public:
	/// <summary>
	/// Ask the user what action he/she wish to perform
	/// </summary>
	void setChoice();
	/// <summary>
/// Retreive the user's choice
/// </summary>
	int getChoice();
	/// <summary>
	/// Retrieve a number from the user
	/// </summary>
	int askAnumber();
};

