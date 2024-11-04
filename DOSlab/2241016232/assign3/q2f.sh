#spandan patel
echo "enter two number :"
read num1
read num2
sum=$(echo $num1+$num2|bc -l)
diff=$(echo "$num1-$num2"|bc -l)
mul=$(echo "$num1*$num2"|bc -l)
Qut=$(echo "scale=2; $num1/$num2"|bc -l)
echo "Sum : $sum"
echo "diff : $diff"
echo "mul : $mul"
echo "Qut : $Qut"