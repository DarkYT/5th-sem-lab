#spandan patel
echo "enter the salary  :"
read salary
da=$(echo  "scale=2; $salary*(40/100)"|bc -l)
hra=$(echo  "scale=2; $salary*(20/100)"|bc -l)
total=$(echo " $salary+$da+$hra"|bc -l)
echo "total salary is $total "