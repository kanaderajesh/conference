Build instruction :
1.	Require cmake 2.8+
2.	Boost 1.48 copy the boost libraries in 3rd folder. Ex 3rd/boost ( Please check the boost build instruction below)
3.	Minimum G++ 4.4 
4.	Unzip and Untar conference.tar.gz
5.	Go to directory 3rd and create a soft link to boost library .ln .s /your/home/directory/boost boost.
6.	To create Out Of Source Build, go to build directory and enter comment .cmake ...
7.	To build test conference solution , from the build directory enter command make.
8.	To create in source build, please repeat step 6 and 7 in the conference directory

Boost Build instruction:
1.	Download the boost 1.48 library from http://sourceforge.net/projects/boost/files/boost/1.48.0/boost_1_48_0.tar.gz
2.	Unzip and Untar boost_1_48_0.tar.gz
3.	From command go to folder boost_1_48_0
4.	Run ./booststrap.sh .prefix=/your/home/directory/boost
5.	./b2 variant=release install link=shared
6.	Once the build is completed , boost will get installed at ./your/home/directory/boost.

Running Ctest:
1. to run sample data , via CTest , just enter command ctest -VV in build directory
2. To build only test, use command make test.

Run instruction:
1. to feed talk text on console, just run executable ./conference with no parameter.
2. To feed Talk file to ./conference , just pass file path parameter after the command.
3. make sure you have sufficient rights to run the executable, use chmod u+x .

Assumptions:
1.	Talk text always end with .lightning. or with .MMMmin. , where .MMM. stand for minutes.
2.	Currently only tested on linux machine, dont think any change require for windows.
3.  Talk text should be less than 80 chars
4.  System take Talk length greater than 180 and 240, it will try to schedule them but simply reject talks which are greater than 180 and 240.
5.  Doesn't support unicode Talk text.
