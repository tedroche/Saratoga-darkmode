<?php 
############################################################################
#   Project:    darkmode support for Saratoga Theme css sites
#   Module:     darkmode-form.inc; see darkmode-top.inc for details & license
#   Purpose:    Presents a radiobutton form to switch modes
############################################################################
?>
<?php if (!empty($SITE['CSSDarkMode']) && $SITE['CSSDarkMode'] != "Disabled") { // Use only if a -dark.css is found ?>
<div>
<form id="darkmodeform" name="darkmodeform" style="width:90%;margin:auto;" method="get" action="" >
  <fieldset>
    <legend>Mode:</legend>
    <?php $checked = ($SITE['CSSDarkMode'] == 'Light') ? ' checked disabled ' : '' ; ?>
    <label for="light">
      <input type="radio" id="light" name="darkmodeswitch" value="Light" <?php echo "$checked "; ?> onchange="this.form.submit()"/>Light
      <br />
    </label>
    <?php $checked = ($SITE['CSSDarkMode'] == 'Dark') ? ' checked disabled ' : '' ; ?>
    <label for="dark">
      <input type="radio" id="dark" name="darkmodeswitch" value="Dark" <?php echo "$checked "; ?> onchange="this.form.submit()" />Dark
      <br />
    </label>
    <?php $checked = ($SITE['CSSDarkMode'] == 'System') ? ' checked disabled ' : '' ; ?>
    <label for="system">
      <input type="radio" id="system" name="darkmodeswitch" value="System" <?php echo "$checked "; ?> onchange="this.form.submit()" />System
      <br />
    </label>
  </fieldset>
</form>
</div>
<?php } // endif display only if -dark.css is found ?>
