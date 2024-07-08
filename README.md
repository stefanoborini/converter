# converter for signaloid

Simply import the repository on signaloid platform and execute with the following command line arguments (example).

    1500 uniform 1.1 1.3

First argument is the amount to convert. 
Second argument is a string defining the distribution of the conversion factor. Currently only two options are allowed, ``uniform`` and ``gaussian``:

* If second argument is ``uniform``: third argument is the lowest value, and fourth argument is the highest value of the uniform distribution.
* If second argument is ``gaussian``: third argument is the gaussian distribution mu, and fourth argument is the sigma.

