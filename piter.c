gcc main.c -o hello
printf("Hello, world!")
gcc main.c -o hello 
./hello
git remote add origin <https://github.com/234567-Petr/ZhuravlevPetr>
git push -u origin master 
git  checkout -b develop
git add main.c
git commit -m "Update program in develop branch"
git push -u origin develop