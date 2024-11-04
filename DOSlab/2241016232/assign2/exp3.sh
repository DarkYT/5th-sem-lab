echo "enter name"
read name
echo "hello $name"
read num1
read num2
sum1=$((num1+num2))
echo "$sum1"
sum=$(echo $num1 + $num2|bc)
echo "$sum"

case $day in 
    "Monday")
        echo "it's the start of eh week"
