open(DEF,">../src/cspice.def");
print DEF "LIBRARY cspice\nEXPORTS\n";
for $file ("../include/SpiceZfc.h","../include/SpiceZpr.h") {
 open(H,$file);
 while($line=<H>) {
  if ($line =~ /^\s*extern\s+[\w\_]+\s*\*?\s+([\w\_]+)\s*\(/) {
   # print DEF "   $1 @".(++$count)."\n";
   print DEF "   $1\n";
 }}
 close(H);
}
close(DEF);
