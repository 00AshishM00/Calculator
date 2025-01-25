This is my first project.first commit 12:02 pm IST 2025 jan 12 sunday 

tools-

Visual studio

cmake

git


My goal with this project is to make a simple c++ Calculator app with modular design and good input handling. I guess I manage to pull that off.

I have configured this for windows environment,because I do not known how to configure this for other environment and I do not have access to a mac or linux device,but you can modify the Cmakelist.

I do not how icon configuration going work without Visual Studio?.thats you have to figure it out.

Icon file website https://www.iconarchive.com/show/android-style-honeycomb-icons-by-wwalczyszyn/Calculator-icon.html

----Now to setup the project (windows)----

1.find a desirable place on your drive.

2.Open CMD/right click Open in Terminal.

3.type- git clone https://github.com/00AshishM00/Calculator.git (I hope you have git installed).// cloning the repository. 

4.type- cd Calculator. // change directory to Calculator.

5.type- mkdir Build.// it will create a folder call Build.

6.type- cd Build.// change directory to Build.

7.type- cmake -S.. -B. //"-S.." means where the cmake source file is and in this case one directory back in Calculator. "-B." means where the build directory is in this case current directory Build.

8.press- enter //it will create a visual studio solution file.

9.open- the solution file and make the Calculator project as the start-up project.

10.Do- whatever you want


Last commit 12:28 PM IST 2025 jan 25 saturday.

And the name is...............Ashish


