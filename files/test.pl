#!/usr/bin/perl 


use warnings;
my $prt_format="";
my %counts;
open IN ,"<" , "gate.txt" or die;
while(<IN>){
    $line = $_;
    chomp ($line);
    $counts{lc($line)}++;
}
foreach $key (sort keys %counts){
    $prt_format = $prt_format.sprintf("%-12s:&-4s\n", $key , $counts{$key});
}
print $prt_format;

print "Hello, World!\n";
