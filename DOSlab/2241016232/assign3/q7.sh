#Spanda patel
echo "enter the marks"
read mark
echo "enter the Attendence"
read att
if [ $mark -ge 20 ] && [ $att -ge 75 ]; then 
    echo "Allowed for semestar"
else
    echo "Not Allowed"
fi