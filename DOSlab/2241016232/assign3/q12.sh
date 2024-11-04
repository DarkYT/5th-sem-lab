echo "enter enter num1 operator num2 :"
if [ $# -ne 3 ]; then 
    echo "envalid input"
    exit 1
fi
num1=$1
operator=$2
num2=$3

case $operator in 
    "+")
        echo "echo sum of two number is : $((num1+num2))";;
    "-")
        echo "echo sub of two number is : $((num1-num2))";;
    "*")
        echo "echo mul of two number is : $((num1*num2))";;
    "/")
        echo "echo div of two number is : $(echo "$num1/$num2"|bc -l)";;
    "%")
        echo "echo mod of two number is : $((num1%num2))";;
    "^")
        echo "echo power of two number is : $((num1^num2))";;
esac