# ch6shippingCharges
The Fast Freight Shipping Company charges the following rates:

Weight of Package (in pounds)	Rate per 500 miles shipped

2 lbs and under	$3.10

Over 2 lbs but not more than 6 lbs	$4.20

Over 6 lbs but not more than 10 lbs   	$5.30

Over 10 lbs	$6.40


Write a program that asks the user for the weight of a package and the distance it is to be shipped. Pass this information to a calculateCharge() function that computes and returns the shipping charge, which will be displayed to the user. The main function should loop to handle multiple packages until the user enters the sentinel value of 0.

The function needs to determine how many mileage "blocks" there are in the miles to be shipped, because the rates are per 500-mile "blocks". There is a minimum charge of 1 "block", so if the package is shipping less than 500 miles, 1 block, it will be charged the same rate as if it were going 500 miles or 1 bock. If the miles are more than 1 block but less than 2 blocks, the company doesn't ship those extra miles for free. The miles needs to be rounded up to the nearest block value -- that is, if the package is shipping 350 miles, round up to 500 miles or 1 block, or if the package is shipping 800 miles, round up to the nearest block value of 1000. The easiest way to do this upward rounding is to add 499 to the miles provided by the user. If the miles to ship are 501, that is one mile more than a block, and the cost has to round upward to 2 blocks or 1000 miles; 501 + 499 will total 1000 which is exactly 2 blocks. Hint: use integers to get the number of mileage "blocks" after adding the rounding factor.

Create a table of test cases that tests all of the rates. This requires that you test both weight and distance values -- a package that weighs 5 lbs will have a different shipping charge if it's going 500 miles (1 block) than if it's going 2000 miles (4 blocks). You need to test a value in each weight range plus at least 2 different mileage numbers. Here is an example of that test cases table:

weight	miles test 1	miles test 2

(2 lbs and under) test = 1 lb	(1 block) 400 miles	(2 blocks) 800 miles

(Over 2 lbs not more than 6 lbs) test = 5 lbs	(1 block) 400 miles	(2 blocks) 800 miles

(Over 6 lbs not more than 10 lbs) test = 8 lbs	(1 block) 400 miles	(2 blocks) 800 miles

(Over 10 lbs) test = 15 lbs	(1 block) 400 miles	(2 blocks) 800 miles


Be sure to create this BEFORE you write and run your project. Compare your results with the test cases to make sure the calculations are correct. Take screenshots that cover all 8 of those test cases.

Here is an example of the output:

Ch 6 Shipping

 

NOTE: Remember the requirements for a header and a pause at the end of the program, discussed in the reading "Console Applications". These are required in every console application project.

Submission: Submit a single zipped folder containing all of the specified screenshots, the table of test cases, AND the root folder for the project.

![1](https://github.com/bell-kevin/ch6shippingCharges/blob/main/shippingCharges.PNG)

![2](https://github.com/bell-kevin/ch6shippingCharges/blob/main/shippingCharges2.PNG)

== We're Using GitHub Under Protest ==

This project is currently hosted on GitHub.  This is not ideal; GitHub is a
proprietary, trade-secret system that is not Free and Open Souce Software
(FOSS).  We are deeply concerned about using a proprietary system like GitHub
to develop our FOSS project. I have a [website](https://bellKevin.me) where the
project contributors are actively discussing how we can move away from GitHub
in the long term.  We urge you to read about the [Give up GitHub](https://GiveUpGitHub.org) campaign 
from [the Software Freedom Conservancy](https://sfconservancy.org) to understand some of the reasons why GitHub is not 
a good place to host FOSS projects.

If you are a contributor who personally has already quit using GitHub, please
email me at **bellKevin@pm.me** for how to send us contributions without
using GitHub directly.

Any use of this project's code by GitHub Copilot, past or present, is done
without our permission.  We do not consent to GitHub's use of this project's
code in Copilot.

![Logo of the GiveUpGitHub campaign](https://sfconservancy.org/img/GiveUpGitHub.png)
