#filename ="dtcal.sh"
#if [ ! -f "$filename" ]; then
 #echo "Error : File '$filename' does not exist"
 #exit 1
#fi
#linecount =$(wc -l < $filename)
#wordcount =$(wc -w<$filename)
#charcount =$(wc -m<$filename)
#echo "$linecount"
#echo "$wordcount"
#echo "$charcount"

filename="dtcal.sh"
if [ ! -f "$filename" ]; then
  echo "Error : File '$filename' does not exist"
  exit 1
fi
linecount=$(wc -l < $filename)
wordcount=$(wc -w < $filename)
charcount=$(wc -m < $filename)
echo "$linecount"
echo "$wordcount"
echo "$charcount"
