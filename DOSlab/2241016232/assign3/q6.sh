#Spanda patel
echo "enter the year"
read ye
if [ $((ye%400)) -eq 0 ]; then 
    echo "$ye is a leap year"
elif [ $((ye%100)) -eq 0 ] && [ ! $((ye%4)) -eq 0 ]; then 
    echo "$ye is a leap year"
else
    echo "$ye is not a leap year"
fi
