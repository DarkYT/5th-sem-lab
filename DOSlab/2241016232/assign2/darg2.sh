# display the total no. fo command-line arguments
echo "Total num fo argument: $# "

# check if atleast 2 arguments are passed 
if [ $# -ge 2 ]; 
then
   echo "file name  : $0"
   echo "first argument : $1"
   echo "first argument : $2"
else
   echo "less than two arguments were provided."
fi 

# Display all argument
echo "All arguments : $@"
