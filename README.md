<div>
<h1>Problem statement</h1>
<p>You are planning a big programming conference and have received many proposals which have passed the initial screen process but you're having trouble fitting them into the time constraints of the day -- there are so many possibilities! So you write a program to do it for you.</p>
<ul>
<li>The conference has multiple tracks each of which has a morning and afternoon session.</li>
<li>Each session contains multiple talks.</li>
<li>Morning sessions begin at 9am and must finish by 12 noon, for lunch.</li>
<li>Afternoon sessions begin at 1pm and must finish in time for the networking event.</li>
<li>The networking event can start no earlier than 4:00 and no later than 5:00.</li>
<li>No talk title has numbers in it.</li>
<li>All talk lengths are either in minutes (not hours) or lightning (5 minutes).</li>
<li>Presenters will be very punctual; there needs to be no gap between sessions.</li>
</ul>
<p>Note that depending on how you choose to complete this problem, your solution may give a different ordering or combination of talks into tracks. This is acceptable; you don’t need to exactly duplicate the sample output given here.</p>
<p>
Test input :-
------------
</p>
<p>
Writing Fast Tests Against Enterprise Rails 60min
Overdoing it in Python 45min
Lua for the Masses 30min
Ruby Errors from Mismatched Gem Versions 45min
Common Ruby Errors 45min
Rails for Python Developers lightning
Communicating Over Distance 60min
Accounting-Driven Development 45min
Woah 30min
Sit Down and Write 30min
Pair Programming vs Noise 45min
Rails Magic 60min
Ruby on Rails: Why We Should Move On 60min
Clojure Ate Scala (on my project) 45min
Programming in the Boondocks of Seattle 30min
Ruby vs. Clojure for Back-End Development 30min
Ruby on Rails Legacy App Maintenance 60min
A World Without HackerNews 30min
User Interface CSS in Rails Apps 30min
</p>
<p>
Test output :-
-------------
</p>
<p>
Track 1:
</p>
<p>
09:00AM Writing Fast Tests Against Enterprise Rails 60min
10:00AM Communicating Over Distance 60min
11:00AM Rails Magic 60min
12:00PM Lunch
01:00PM Ruby on Rails: Why We Should Move On 60min
02:00PM Common Ruby Errors 45min
02:45PM Accounting-Driven Development 45min
03:30PM Pair Programming vs Noise 45min
04:15PM User Interface CSS in Rails Apps 30min
04:45PM Rails for Python Developers lightning
04:50PM Networking Event
</p>
<p>
Track 2:
</p>
<p>
<p>09:00AM Ruby on Rails Legacy App Maintenance 60min</p>
10:00AM Overdoing it in Python 45min
10:45AM Ruby Errors from Mismatched Gem Versions 45min
11:30AM Lua for the Masses 30min
12:00PM Lunch
01:00PM Clojure Ate Scala (on my project) 45min
01:45PM Woah 30min
02:15PM Sit Down and Write 30min
02:45PM Programming in the Boondocks of Seattle 30min
03:15PM Ruby vs. Clojure for Back-End Development 30min
03:45PM A World Without HackerNews 30min
04:15PM Networking Event
</p>
</div>
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
