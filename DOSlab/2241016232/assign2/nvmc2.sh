filename="q4file.sh"
if [ $# -eq 0 ]; then
  echo "Error : File '$filename' does not exist"
  exit 1
fi
filename=$1
linecount=$(wc -l < $filename)
wordcount=$(wc -w < $filename)
charcount=$(wc -m < $filename)
echo "$linecount"
echo "$wordcount"
echo "$charcount"
