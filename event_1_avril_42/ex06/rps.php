<?php

$choices = array("rock", "paper", "scissors");
$computer_choice = $choices[rand(0,2)];

$user_choice = readline("Choose rock, paper, or scissors: ");

if (strcmp($user_choice, $choices[0]) != 0 && strcmp($user_choice, $choices[1]) != 0 && strcmp($user_choice, $choices[2]) != 0)
{exit("Input must be $choices[0], $choices[1], $choices[2]\n");}

if ($user_choice == "rock" && $computer_choice == "scissors" || 
    $user_choice == "paper" && $computer_choice == "rock" ||
    $user_choice == "scissors" && $computer_choice == "paper")
{echo "You won! The computer chose $computer_choice\n";}
elseif ($computer_choice == "rock" && $user_choice == "scissors" || 
          $computer_choice == "paper" && $user_choice == "rock" ||
          $computer_choice == "scissors" && $user_choice == "paper")
{echo "You lose! The computer chose $computer_choice\n";}
else
{echo "It's a tie! The computer chose $computer_choice\n";}

?>
