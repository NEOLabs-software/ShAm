#!/bin/bash
echo deez
if [[ 1 -eq 2 ]]
then
  echo 1
else
  echo 2
fi 

# Generate a random number between 1 and 100
target=$(( (RANDOM % 100) + 1 ))

echo "Welcome to the Guessing Game!"

while true; do
    read -p "Enter your guess (1-100): " guess

    if [[ $guess -eq $target ]]; then
        echo "Congratulations! You guessed correctly."
        break
    elif [[ $guess -lt $target ]]; then
        echo "Too low. Try again."
    else
        echo "Too high. Try again."
    fi
done


