import re

string = input()

print(re.sub(r'asian(?=( [a-z]+){5,})', 'global', string))
