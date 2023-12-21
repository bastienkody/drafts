#! /usr/bin/perl

print "Enter a sting: ";
my $wd = <STDIN>;

my $i = 0;
my $j = length($wd) -1;

while ($j > 0)
{
	if (substr($wd, $i, 1) eq substr($wd, $j-1, 1))
	{
		$i++;
		$j--;
	}
	else
	{
		print "The string is not a palindrome.\n";
		exit 0;
	}	
}
print "The string is a palindrome!\n";
exit 0;
