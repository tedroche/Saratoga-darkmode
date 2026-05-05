# Saratoga-darkmode
Support a simple switcher to force light or dark mode, or follow system settings, when proper CSS files are in place

Similar to the sibling repository for darkmode-cell-*.* these three files should be installed in the base
directory of your weather site, and the following changes added to your files:

in the file top.php, locate the line 

`require_once("Settings.php");` 

and add below it:

`include("darkmode.inc");`

Further down in the same file, locate the line 

`<link rel="stylesheet" type="text/css" href="<?php echo $SITE['CSSscreen']; ?>" media="screen" title="screen" />`

and add the new line:

`<?php include("darkmode-setstyle.inc"); ?>`

To add the form to allow switching from Light to Dark or System, add the line:

`<?php include("darkmode-form.inc"); ?>`

Where you'd like the form to appear, to your page footer, or your sidebar (I use menubar.php, others choose other menuing systems)

Copy your CSS file (set in Settings as $SITE['CSSscreen'] or with Theme Switcher, if used) to the same name with "-dark" 
added before the ".css" file, and change the colors to suit your tastes. Examples are included, but I hope you have better
color sense than me.
