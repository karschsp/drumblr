<style type='text/css'>
#top {
  background:url(images/cube.png) 0px -60px repeat-x; */
  /* background: <?php print $top ?>; */
}

#branding {
  background: <?php print $navbar ?>;
  color: <?php print $navbartext ?>;
}

.block .block-title,
#page-title ul.links li.active a,
#page-title ul.links li a.active {
  background-color:<?php print $background ?>;
  }

.pager li.pager-current,
#tabs .page-tabs li.active a,
#tabs .page-tabs li a.active {
  background-color:<?php print $background ?>;
  }

input.form-submit:hover {
  border-color:<?php print designkit_colorshift($background, '#000000', .2) ?>;
  border-bottom-color:<?php print designkit_colorshift($background, '#000000', .4) ?>;
  background-color:<?php print $background ?>;
  }
</style>
