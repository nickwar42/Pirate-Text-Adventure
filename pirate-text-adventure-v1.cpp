//My pirate text adventure V1
//Created July 3rd 2020
//V2 will probably have loops. If I ever get to it.
#include <iostream>
#include <string>
#include <cmath>


//Gravestone. RIP dude!
void dead(std::string name){
    std::cout << "---------------------\n";
    std::cout << "---------------------\n";
    std::cout << "----R-----I-----P----\n";
    std::cout << "---------------------\n";
    std::cout << "-LONG LIVE "<< name <<"-\n";
    std::cout << "---------------------\n";
    std::cout << "---------------------\n";
    std::cout << "---------------------\n";

}

//Bounty Campaign
void bounty_hunter(std::string name){

    int path = 0;

    //Introduction
    std::cout << "You Chose: Bounty Hunter\n";
    std::cout << "==================================================\n";
    std::cout << "Welcome to the life of a bounty hunter, " << name << std::endl;
    std::cout << "Ahead, you spot a small, pirate sailboat, perfect for a first bounty. \n";
    std::cout << "Do you: \n1) Try to negotiate\n";
    std::cout << "2) Fire! No negotiating with terrorists!\n";

    std:: cin >> path;

    std::cout << "\n";
    std::cout << "\n";
    std::cout << "\n";


    //Try to negotiate --> Dead
    if(path == 1){
        std::cout << "You Chose: Try to Negotiate\n";
        std::cout << "==================================================\n";
        std::cout << "You pull up to the sailboat, and attempt to negotiate. \n";
        std::cout << "The easily notice you, and climb to sides of your brigate. \n";
        std::cout << "They slice down every one of the british onboard, and sieze the ship. You lose.\n";
        dead(name);

    }
    //Fire --> Spanish Brigate
    else if(path == 2){
        std::cout << "You Chose: Fire!\n";
        std::cout << "==================================================\n";
        std::cout << "You yell 'FIRE', and as you do, 12 cannonballs are shot at the rowboat. \nA little overkill, I'll admit, but you need to make sure there are no survivors.\n";
        std::cout << "You escape, only to notice something emerging the fog. What could it be?\n";
        std::cout << "'Captain! It's a Spanish brigate, he must've followed us from the port! ";
        std::cout << "What should we do?' \n1) Fire!\n";
        std::cout << "2) Attempt to run!\n";

        std::cin >> path;

        std::cout << "\n";
        std::cout << "\n";
        std::cout << "\n";


        //Fire --> Man of War
        if(path == 1){
            std::cout << "You Chose: Fire!\n";
            std::cout << "==================================================\n";
            std::cout << "Hit! And a fatal one at that! ";
            std::cout << "You notice the ship starting to turn. \nAs it does, you fire a volley of shots into the side of it, exposing a weak spot.\n";
            std::cout << "You fire into the weak spot, and KABOOM!\n";
            std::cout << "Suddenly, you notice a behemoth of a Spanish ship that is alerted to your presence.\n";
            std::cout << "'CAPTAIN! IT'S A MAN-OF-WAR!'\n";

            std::cout << "This is a dangerous ship to try to take on, it has 3x the crew, ";
            std::cout << "4x the firepower, and 10x the experience.\n";
            std::cout << "What should we do? \n1) Charge! We have no other choice!\n";
            std::cout << "2) Attempt to flank.\n";

            std::cin >> path;
            std::cout << "\n";
            std::cout << "\n";
            std::cout << "\n";

            //Charge --> Sink
            if(path == 1){
                std::cout << "You Chose: Charge!\n";
                std::cout << "==================================================\n";

                std::cout << "Unfortunately, not the best idea. You charge the ship and are \n";
                std::cout << "quickly and promptly destroyed.\n";
                dead(name);

            }
            //Flank --> Friendship
            else if(path == 2){
                std::cout << "You Chose: Attempt to flank!\n";
                std::cout << "==================================================\n";
                std::cout << "You set the sails to full, and attempt to flank. Your crewmembers start loading the cannons. \n";
                std::cout << "You fire a shot into the rear, and luckily, you hit! The Man-Of-War is retreating!\n";
                std::cout << "You escape the Man-Of-War, and realize something iconic. \n";
                std::cout << "The real bounty is the friends you made along the way. \n";
                std::cout << "==================================================\n";
                std::cout << "Congratulations, you completed the friend-ship ending! \n";
            }
            else{
                std::cout << "Invalid!";
            }

        }
        //Attempt to Run --> Dead
        else if(path == 2){
            std::cout << "You Chose: Attempt to Run!\n";
            std::cout << "==================================================\n";
            std::cout << "You attempt to run, firing a flurry of shots as you turn around.\n";
            std::cout << "Suddenly, you hear a lot bang, then two more.\n";
            std::cout << "They hit the gunpowder storage! Uh oh!\n";
            dead(name);

        }
        else
        {
            std::cout << "Invalid!";
        }
    }
    else
    {
        std::cout << "Invalid!";
    }
}

void treasure_hunter(std::string name){

    int path;

    //Introduction
    std::cout << "You Chose: Treasure Tracker\n";
    std::cout << "==================================================\n";
    std::cout << "Welcome to the life of a treasure tracker, " << name << std::endl;
    std::cout << "You don't know where to start, so you go to a town center. You notice a homeless man beside a tavern, and a port facing East. \n";
    std::cout << "Do you: \n1) Ask the suspicious looking individual.\n";
    std::cout << "2) Check the local tavern.\n";
    std::cout << "3) Sail East, you got this.\n";

    std:: cin >> path;

    std::cout << "\n";
    std::cout << "\n";
    std::cout << "\n";

    if(path == 1){

        std::cout << "You Chose: Ask the suspicious looking individual.\n";
        std::cout << "==================================================\n";
        std::cout << "'Ahoy, I'm looking for treasure, ya know of any nearby?'\n";
        std::cout << "He replies: ";
        std::cout << "'Treasure? That's mine!' \n";
        std::cout << "He slices you open and steals your ship. \n";

        dead(name);
    }
    else if(path == 2){
        std::cout << "You Chose: Check the local tavern.\n";
        std::cout << "==================================================\n";

        std::cout << "You have three choices here. \n";
        std::cout << "1) Take a bounty on a Spanish Brigate.\n";
        std::cout << "2) Sail East.\n";
        std::cout << "3) Sail South.\n";

        std::cin >> path;
        std::cout << "\n";
        std::cout << "\n";
        std::cout << "\n";

        //1) take bounty
        if(path == 1){
            std::cout << "You Chose: Take a bounty\n";
            std::cout << "==================================================\n";
            std::cout << "You head west, only to notice something emerging the fog. What could it be?\n";
            std::cout << "'Captain! It's the Spanish Brigate, he must've followed us from the port! ";
            std::cout << "What should we do?' \n1) Fire!\n";
            std::cout << "2) Attempt to run!\n";

            std::cin >> path;
            std::cout << "\n";
            std::cout << "\n";
            std::cout << "\n";

            if(path == 1){
                std::cout << "You Chose: Fire!\n";
                std::cout << "==================================================\n";
                std::cout << "Hit! And a fatal one at that! ";
                std::cout << "You notice the ship starting to turn. \nAs it does, you fire a volley of shots into the side of it, exposing a weak spot.\n";
                std::cout << "You fire into the weak spot, and KABOOM!\n";
                std::cout << "Suddenly, you notice a behemoth of a Spanish ship that is alerted to your presence.\n";
                std::cout << "'CAPTAIN! IT'S A MAN-OF-WAR!'\n";

                std::cout << "This is a dangerous ship to try to take on, it has 3x the crew, ";
                std::cout << "4x the firepower, and 10x the experience.\n";
                std::cout << "What should we do? \n1) Charge! We have no other choice!\n";
                std::cout << "2) Attempt to flank.\n";

                std::cin >> path;
                std::cout << "\n";
                std::cout << "\n";
                std::cout << "\n";

                //Charge --> dead
                if(path == 1){
                    std::cout << "You Chose: Charge!\n";
                    std::cout << "==================================================\n";

                    std::cout << "Unfortunately, not the best idea. You charge the ship and are \n";
                    std::cout << "quickly and promptly destroyed.\n";
                    dead(name);

                }
                //Flank --> Friendship
                else if(path == 2){
                    std::cout << "You Chose: Attempt to flank!\n";
                    std::cout << "==================================================\n";
                    std::cout << "You set the sails to full, and attempt to flank. Your crewmembers start loading the cannons. \n";
                    std::cout << "You fire a shot into the rear, and luckily, you hit! The Man-Of-War is retreating!\n";
                    std::cout << "You escape the Man-Of-War, and realize something iconic. \n";
                    std::cout << "The real bounty is the friends you made along the way. \n";
                    std::cout << "==================================================\n";
                    std::cout << "Congratulations, you completed the friend-ship ending! \n";
                }
                else{
                    std::cout << "Invalid!";
                }
            }

            else if (path == 2){
                std::cout << "You Chose: Attempt to Run!\n";
                std::cout << "==================================================\n";
                std::cout << "You attempt to run, firing a flurry of shots as you turn around.\n";
                std::cout << "Suddenly, you hear a lot bang, then two more.\n";
                std::cout << "They hit the gunpowder storage! Uh oh!\n";
                dead(name);
            }
        }
        //East --> Whirlpool
        else if(path == 2){
            std::cout << "You Chose: Sail East.\n";
            std::cout << "==================================================\n";

            std::cout << "Whirlpool! ";
            std::cout << "'What's the plan, captain?'\n";
            std::cout << "1) Full Sail!\n";
            std::cout << "2) Fire cannons into it?\n";

            std::cin >> path;

            std::cout << "\n";
            std::cout << "\n";
            std::cout << "\n";

            //Full Sail --> Made it
            if(path == 1){
                std::cout << "You Chose: Full Sail!\n";
                std::cout << "==================================================\n";
                std::cout << "You drop the sails to full, and push full power out of the whirlpool. It's a fight but you eventually break the current.";

                std::cout << "'Where to next, captain?' \n";
                std::cout << "1) Sail On!\n";
                std::cout << "2) Retire. I'm too old for this!\n";


                std::cin >> path;

                std::cout << "\n";
                std::cout << "\n";
                std::cout << "\n";

                //Sail --> explorer
                if(path == 1){

                    //START


                    std::cout << "Sailing south, you ask your barrelman to climb the crows nest.\n";
                    std::cout << "He offers you the following options for further exploration: \n";
                    std::cout << "1) Some rough looking rock cuts.\n";
                    std::cout << "2) A beautiful archipelago. \n";
                    std::cout << "3) Head into the thick fog, despite what could be inside it. \n";

                    std::cin >> path;

                    std::cout << "\n";
                    std::cout << "\n";
                    std::cout << "\n";

                    if(path == 1){
                        std::cout << "You Chose: Rock cuts.\n";
                        std::cout << "==================================================\n";
                        std::cout << "You should've known this was a bad idea, but you head into the rock cut. \n";
                        std::cout << "You Sink. \n";
                        dead(name);

                    }
                    else if(path == 2){
                        std::cout << "You Chose: Archipelago.\n";
                        std::cout << "==================================================\n";

                        std::cout << "Suddenly you crash onto an island with a cave on it. \n";
                        std::cout << "You enter the cave, and see a conveniently placed 'X'. \n";
                        std::cout << "Digging it up, you find a chest, and opening it, you find... \n";
                        std::cout << "Congratulations, " << name << " but the treasure is in another castle! \n";
                        std::cout << "Mis-adventure Ending. \n";

                    }
                    else if(path == 3){
                        std::cout << "You Chose: Thick fog.\n";
                        std::cout << "==================================================\n";

                        std::cout << "Suddenly, you notice a behemoth of a Spanish ship through the fog.\n";
                        std::cout << "'CAPTAIN! IT'S A MAN-OF-WAR!'\n";

                        std::cout << "This is a dangerous ship to try to take on, it has 3x the crew, ";
                        std::cout << "4x the firepower, and 10x the experience.\n";
                        std::cout << "What should we do? \n1) Charge! We have no other choice!\n";
                        std::cout << "2) Attempt to flank.\n";

                        std::cin >> path;
                        std::cout << "\n";
                        std::cout << "\n";
                        std::cout << "\n";

                        //Charge --> Sink
                        if(path == 1){
                            std::cout << "You Chose: Charge!\n";
                            std::cout << "==================================================\n";

                            std::cout << "Unfortunately, not the best idea. You charge the ship and are \n";
                            std::cout << "quickly and promptly destroyed.\n";
                            dead(name);

                        }
                        //Flank --> Friendship
                        else if(path == 2){
                            std::cout << "You Chose: Attempt to flank!\n";
                            std::cout << "==================================================\n";
                            std::cout << "You set the sails to full, and attempt to flank. Your crewmembers start loading the cannons. \n";
                            std::cout << "You fire a shot into the rear, and luckily, you hit! The Man-Of-War is retreating!\n";
                            std::cout << "You escape the Man-Of-War, and realize something iconic. \n";
                            std::cout << "The real bounty is the friends you made along the way. \n";
                            std::cout << "==================================================\n";
                            std::cout << "Congratulations, you completed the friend-ship ending! \n";
                        }
                        else{
                            std::cout << "Invalid!";
                        }
                    }
                    else{
                        std::cout << "Invalid!";
                    }
                }
                //Retire
                else if(path == 2){
                    std::cout << "You Chose: Retire.\n";
                    std::cout << "==================================================\n";
                    std::cout << "You retire, and donate your ship to your lieutenant. ";
                    std::cout << "Secret Ending: Retire.";
                }
            }
            //Fire --> dead
            else if(path == 2){
                std::cout << "You Chose: Fire cannons.\n";
                std::cout << "==================================================\n";
                std::cout << "Why would you think that would work?\n";
                dead(name);
            }
        }
        //South --> Explorer
        else if(path == 3){
            std::cout << "You Chose: Sail South.\n";
            std::cout << "==================================================\n";

            std::cout << "Sailing south, you ask your barrelman to climb the crows nest.\n";
            std::cout << "He offers you the following options for further exploration: \n";
            std::cout << "1) Some rough looking rock cuts.\n";
            std::cout << "2) A beautiful archipelago. \n";
            std::cout << "3) Head into the thick fog, despite what could be inside it. \n";

            std::cin >> path;

            std::cout << "\n";
            std::cout << "\n";
            std::cout << "\n";

            if(path == 1){
                std::cout << "You Chose: Rock cuts.\n";
                std::cout << "==================================================\n";
                std::cout << "You should've known this was a bad idea, but you head into the rock cut. \n";
                std::cout << "You Sink. \n";
                dead(name);

            }
            else if(path == 2){
                std::cout << "You Chose: Archipelago.\n";
                std::cout << "==================================================\n";

                std::cout << "Suddenly you crash onto an island with a cave on it. \n";
                std::cout << "You enter the cave, and see a conveniently placed 'X'. \n";
                std::cout << "Digging it up, you find a chest, and opening it, you find... \n";
                std::cout << "Congratulations, " << name << "but the treasure is in another castle! \n";
                std::cout << "Mis-adventure Ending. \n";
            }
            else if(path == 3){
                std::cout << "You Chose: Thick fog.\n";
                std::cout << "==================================================\n";

                std::cout << "Suddenly, you notice a behemoth of a Spanish ship through the fog.\n";
                std::cout << "'CAPTAIN! IT'S A MAN-OF-WAR!'\n";

                std::cout << "This is a dangerous ship to try to take on, it has 3x the crew, ";
                std::cout << "4x the firepower, and 10x the experience.\n";
                std::cout << "What should we do? \n1) Charge! We have no other choice!\n";
                std::cout << "2) Attempt to flank.\n";

                std::cin >> path;
                std::cout << "\n";
                std::cout << "\n";
                std::cout << "\n";

                //Charge --> Sink
                if(path == 1){
                    std::cout << "You Chose: Charge!\n";
                    std::cout << "==================================================\n";

                    std::cout << "Unfortunately, not the best idea. You charge the ship and are \n";
                    std::cout << "quickly and promptly destroyed.\n";
                    dead(name);
                }
                //Flank --> Friendship
                else if(path == 2){
                    std::cout << "You Chose: Attempt to flank!\n";
                    std::cout << "==================================================\n";
                    std::cout << "You set the sails to full, and attempt to flank. Your crewmembers start loading the cannons. \n";
                    std::cout << "You fire a shot into the rear, and luckily, you hit! The Man-Of-War is retreating!\n";
                    std::cout << "You escape the Man-Of-War, and realize something iconic. \n";
                    std::cout << "The real bounty is the friends you made along the way. \n";
                    std::cout << "==================================================\n";
                    std::cout << "Congratulations, you completed the friend-ship ending! \n";
                }
                else{
                    std::cout << "Invalid!";
                }
            }
            else{
                std::cout << "Invalid!";
            }
        }
        else{
            std::cout << "Invalid!";
        }
    }
    else if(path == 3){
        std::cout << "You Chose: Sail East.\n";
        std::cout << "==================================================\n";

        std::cout << "Whirlpool! ";
        std::cout << "'What's the plan, captain?'\n";
        std::cout << "1) Full Sail!\n";
        std::cout << "2) Fire cannons into it?\n";

        std::cin >> path;

        std::cout << "\n";
        std::cout << "\n";
        std::cout << "\n";

        if(path == 1){
            std::cout << "You Chose: Full Sail!\n";
            std::cout << "==================================================\n";
            std::cout << "You drop the sails to full, and push full power out of the whirlpool. It's a fight but you eventually break the current.";

            std::cout << "'Where to next, captain?' \n";
            std::cout << "1) Sail On!\n";
            std::cout << "2) Retire. I'm too old for this!\n";

            std::cin >> path;

            std::cout << "\n";
            std::cout << "\n";
            std::cout << "\n";

            //Sail --> explorer
            if(path == 1){

                std::cout << "You Chose: Sail On!\n";
                std::cout << "==================================================\n";

                std::cout << "Sailing south, you ask your barrelman to climb the crows nest.\n";
                std::cout << "He offers you the following options for further exploration: \n";
                std::cout << "1) Some rough looking rock cuts.\n";
                std::cout << "2) A beautiful archipelago. \n";
                std::cout << "3) Head into the thick fog, despite what could be inside it. \n";

                std::cin >> path;

                std::cout << "\n";
                std::cout << "\n";
                std::cout << "\n";

                if(path == 1){
                    std::cout << "You Chose: Rock cuts.\n";
                    std::cout << "==================================================\n";

                    std::cout << "You should've known this was a bad idea, but you head into the rock cut. \n";
                    std::cout << "You Sink. \n";
                    dead(name);
                }
                else if(path == 2){
                    std::cout << "You Chose: Archipelago.\n";
                    std::cout << "==================================================\n";

                    std::cout << "Suddenly you crash onto an island with a cave on it. \n";
                    std::cout << "You enter the cave, and see a conveniently placed 'X'. \n";
                    std::cout << "Digging it up, you find a chest, and opening it, you find... \n";
                    std::cout << "Congratulations, " << name << " but the treasure is in another castle! \n";
                    std::cout << "Mis-adventure Ending. \n";
                }
                else if(path == 3){
                    std::cout << "You Chose: Thick fog.\n";
                    std::cout << "==================================================\n";

                    std::cout << "Suddenly, you notice a behemoth of a Spanish ship through the fog.\n";
                    std::cout << "'CAPTAIN! IT'S A MAN-OF-WAR!'\n";

                    std::cout << "This is a dangerous ship to try to take on, it has 3x the crew, ";
                    std::cout << "4x the firepower, and 10x the experience.\n";
                    std::cout << "What should we do? \n1) Charge! We have no other choice!\n";
                    std::cout << "2) Attempt to flank.\n";

                    std::cin >> path;
                    std::cout << "\n";
                    std::cout << "\n";
                    std::cout << "\n";

                    //Charge --> Sink
                    if(path == 1){
                        std::cout << "You Chose: Charge!\n";
                        std::cout << "==================================================\n";

                        std::cout << "Unfortunately, not the best idea. You charge the ship and are \n";
                        std::cout << "quickly and promptly destroyed.\n";
                        dead(name);
                    }
                    //Flank --> Friendship
                    else if(path == 2){
                        std::cout << "You Chose: Attempt to flank!\n";
                        std::cout << "==================================================\n";
                        std::cout << "You set the sails to full, and attempt to flank. Your crewmembers start loading the cannons. \n";
                        std::cout << "You fire a shot into the rear, and luckily, you hit! The Man-Of-War is retreating!\n";
                        std::cout << "You escape the Man-Of-War, and realize something iconic. \n";
                        std::cout << "The real bounty is the friends you made along the way. \n";
                        std::cout << "==================================================\n";
                        std::cout << "Congratulations, you completed the friend-ship ending! \n";
                    }
                    else{
                        std::cout << "Invalid!";
                    }
                }
                else{
                    std::cout << "Invalid!";
                }
            }
            //Retire
            else if(path == 2){
                std::cout << "You Chose: Retire.\n";
                std::cout << "==================================================\n";
                std::cout << "You retire, and donate your ship to your lieutenant. ";
                std::cout << "Secret Ending: Retire.";
            }
        }
        //Fire --> dead
        else if(path == 2){
            std::cout << "You Chose: Fire cannons.\n";
            std::cout << "==================================================\n";
            std::cout << "Why would you think that would work?\n";
            dead(name);
        }
    }
    else {
        std::cout << "Invalid!";
    }
}

// TO DO
void prisoner(std::string name){

    int path = 0;

    std::cout << "You Chose: Prisoner\n";
    std::cout << "==================================================\n";
    std::cout << "Welcome to the life of a prisoner, " << name << std::endl;
    std::cout << "During a storm, you are able to pick the lock to your cell and steal a musket. \n";
    std::cout << "What's next? \n1) Recruit prisoners to help you escape.\n";
    std::cout << "2) Attack the captain of the ship alone.\n";

    std:: cin >> path;

    std::cout << "\n";
    std::cout << "\n";
    std::cout << "\n";

    if(path == 1){
        std::cout << "You Chose: Recruit prisoners\n";
        std::cout << "==================================================\n";
        std::cout << "You break open the holding cell across from you, and are quickly jumped on. Guess you should never trust a pirate.\n";
        dead(name);
    }
    else if(path == 2){
        std::cout << "You Chose: Attack the captain alone\n";
        std::cout << "==================================================\n";
        std::cout << "You charge at the captain, and fire your musket at him. You hit!\n";
        std::cout << "Now that the captain is down, all of his crew turn to you as their leader.\n";
        std::cout << "You head East. \n";
        std::cout << "Suddenly, you notice a whirlpool!\n";
        std::cout << "'What's the plan, captain?'\n";
        std::cout << "1) Full Sail!\n";
        std::cout << "2) Fire cannons into it?\n";

        std::cin >> path;

        std::cout << "\n";
        std::cout << "\n";
        std::cout << "\n";

        //Full Sail --> Made it
        if(path == 1){
            std::cout << "You Chose: Full Sail!\n";
            std::cout << "==================================================\n";
            std::cout << "You drop the sails to full, and push full power out of the whirlpool. It's a fight but you eventually break the current.";

            std::cout << "'Where to next, captain?' \n";
            std::cout << "a) Sail On!\n";
            std::cout << "a) Retire. I'm too old for this!\n";

            std::cin >> path;

            std::cout << "\n";
            std::cout << "\n";
            std::cout << "\n";

            //Sail --> explorer
            if(path == 1){

                std::cout << "Sailing south, you ask your barrelman to climb the crows nest.\n";
                std::cout << "He offers you the following options for further exploration: \n";
                std::cout << "1) Some rough looking rock cuts.\n";
                std::cout << "2) A beautiful archipelago. \n";
                std::cout << "3) Head into the thick fog, despite what could be inside it. \n";

                std::cin >> path;

                std::cout << "\n";
                std::cout << "\n";
                std::cout << "\n";

                if(path == 1){
                    std::cout << "You Chose: Rock cuts.\n";
                    std::cout << "==================================================\n";

                    std::cout << "You should've known this was a bad idea, but you head into the rock cut. \n";
                    std::cout << "You Sink. \n";
                    dead(name);
                }
                else if(path == 2){
                    std::cout << "You Chose: Archipelago.\n";
                    std::cout << "==================================================\n";

                    std::cout << "Suddenly you crash onto an island with a cave on it. \n";
                    std::cout << "You enter the cave, and see a conveniently placed 'X'. \n";
                    std::cout << "Digging it up, you find a chest, and opening it, you find... \n";
                    std::cout << "Congratulations, " << name << " but the treasure is in another castle! \n";
                    std::cout << "Mis-adventure Ending. \n";

                }
                else if(path == 3){
                    std::cout << "You Chose: Thick fog.\n";
                    std::cout << "==================================================\n";

                    std::cout << "Suddenly, you notice a behemoth of a Spanish ship through the fog.\n";
                    std::cout << "'CAPTAIN! IT'S A MAN-OF-WAR!'\n";

                    std::cout << "This is a dangerous ship to try to take on, it has 3x the crew, ";
                    std::cout << "4x the firepower, and 10x the experience.\n";
                    std::cout << "What should we do? \n1) Charge! We have no other choice!\n";
                    std::cout << "2) Attempt to flank.\n";

                    std::cin >> path;
                    std::cout << "\n";
                    std::cout << "\n";
                    std::cout << "\n";

                    //Charge --> Sink
                    if(path == 1){
                        std::cout << "You Chose: Charge!\n";
                        std::cout << "==================================================\n";

                        std::cout << "Unfortunately, not the best idea. You charge the ship and are \n";
                        std::cout << "quickly and promptly destroyed.\n";
                        dead(name);
                    }
                    //Flank --> Friendship
                    else if(path == 2){
                        std::cout << "You Chose: Attempt to flank!\n";
                        std::cout << "==================================================\n";
                        std::cout << "You set the sails to full, and attempt to flank. Your crewmembers start loading the cannons. \n";
                        std::cout << "You fire a shot into the rear, and luckily, you hit! The Man-Of-War is retreating!\n";
                        std::cout << "You escape the Man-Of-War, and realize something iconic. \n";
                        std::cout << "The real bounty is the friends you made along the way. \n";
                        std::cout << "==================================================\n";
                        std::cout << "Congratulations, you completed the friend-ship ending! \n";
                    }
                    else{
                        std::cout << "Invalid!";
                    }
                }
                else{
                    std::cout << "Invalid!";
                }
            }
            //Retire
            else if(path == 2){
                std::cout << "You Chose: Retire.\n";
                std::cout << "==================================================\n";
                std::cout << "You retire, and donate your ship to your lieutenant. ";
                std::cout << "Secret Ending: Retire.";
            }
        }
    }
    else{
        std::cout << "Invalid!";
    }
}

int main(){

    std::string name;
    int path = 0;


    std::cout << "Hello Pirate! What's your name friend? ";
    std::getline(std::cin, name);

    std::cout << "What kind of pirate would you like to be? ";
    std::cout << "1) A Bounty Hunter ";
    std::cout << "2) A Treasure Tracker ";
    std::cout << "3) A Prisoner ";

    std::cin >> path;

    std::cout << "\n";
    std::cout << "\n";
    std::cout << "\n";

    if (path == 1){
        bounty_hunter(name);
    }
    else if (path == 2){
        treasure_hunter(name);
    }
    else if (path == 3){
        prisoner(name);
    }
    else{
        std::cout << "Invalid! Try again with ./a.out";
    }
}
