echo "enter a char "
read a
if [[ $a =~ [a-z] ]]; then
    echo "$a is a lower case alphabet "
elif [[ $a =~ [A-Z] ]]; then
    echo "$a is a upper case alphabet "
elif [[ $a =~ [0-9] ]]; then
    echo "$a is a number"
else 
    echo " $a is a special symbol"
fi