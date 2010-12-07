<?php

/**
 * Implementation of hook_user_default_roles().
 */
function drumblr_settings_user_default_roles() {
  $roles = array();

  // Exported role: administrator
  $roles['administrator'] = array(
    'name' => 'administrator',
  );

  // Exported role: editor
  $roles['editor'] = array(
    'name' => 'editor',
  );

  return $roles;
}
