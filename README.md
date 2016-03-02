<div>
<p>Build instruction :</p>
  <ul>
    <li>Require cmake 2.8+</li>
    <li>Boost 1.48 copy the boost libraries in 3rd folder. Ex 3rd/boost ( Please check the boost build instruction below)</li>
    <li>Minimum G++ 4.4</li>
    <li>Unzip and Untar conference.tar.gz</li>
    <li>Go to directory 3rd and create a soft link to boost library .ln .s /your/home/directory/boost boost.</li>
    <li>To create Out Of Source Build, go to build directory and enter comment .cmake ...</li>
    <li>To build test conference solution , from the build directory enter command make.</li>
    <li>To create in source build, please repeat step 6 and 7 in the conference directory</li>
  </ul>
</div>
<div>
<p>Boost Build instruction:</p>
  <ul>
    <li>Download the boost 1.48 library from http://sourceforge.net/projects/boost/files/boost/1.48.0/boost_1_48_0.tar.gz</li>
    <li>Unzip and Untar boost_1_48_0.tar.gz</li>
    <li>From command go to folder boost_1_48_0</li>
    <li>Run ./booststrap.sh .prefix=/your/home/directory/boost</li>
    <li>./b2 variant=release install link=shared</li>
    <li>Once the build is completed , boost will get installed at ./your/home/directory/boost.</li>
  </ul>
</div>
<div>
<p>Running Ctest:</p>
<ul>
  <li>to run sample data , via CTest , just enter command ctest -VV in build directory</li>
  <li>To build only test, use command make test.</li>
</ul>
</div>
<div>
<p>Run instruction:</p>
<ul>
<li>to feed talk text on console, just run executable ./conference with no parameter.</li>
<li>To feed Talk file to ./conference , just pass file path parameter after the command.</li>
<li>make sure you have sufficient rights to run the executable, use chmod u+x .</li>
</ul>
</div>
<div>
<p>Assumptions:</p>
<ul>
<li>Talk text always end with .lightning. or with .MMMmin. , where .MMM. stand for minutes.</li>
<li>Currently only tested on linux machine, dont think any change require for windows.</li>
<li>Talk text should be less than 80 chars.</li>
<li>System take Talk length greater than 180 and 240, it will try to schedule them but simply reject talks which are greater than 180 and 240.</li>
<li>Doesn't support unicode Talk text.</li>
</ul>
</div>
