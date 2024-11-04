#spandan patel
echo "enter two number :"
read num1
read num2
remi=$(echo "$num1/$num2"|bc -l)
echo "sum of two number is : $((num1+num2))"
echo "difference of two number is : $((num1-num2))"
echo "Product of two number is : $((num1*num2))"
echo "Quotient of two number is : $remi "
echo "Remainder of two number is : $((num1%num2))"
w=$(echo $num1+1|bc -l)
echo $w
y=$