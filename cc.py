ch = input("")
if((ch>='a' and ch<= 'z') or (ch>='A' and ch<='Z')):
  if(ch=='a' or ch=='A' or ch=='E' or ch=='e' or ch=='i' or ch=='O' or ch=='o' or ch=='I' or ch=='U' or ch=='u'):
    print("Vowel")
  else:
    print("consonent")      
else:
  print("invalid")
