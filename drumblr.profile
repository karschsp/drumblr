<?php
// $Id$

/**
 * Return a description of the profile for the initial installation screen.
 */
function drumblr_profile_details() {
  return array(
    'name' => 'Drumblr',
    'description' => 'A Drupal-based tumblr clone',
  );
}

/**
 * Return an array of the modules to be enabled when this profile is installed.
 *
 * The following required core modules are always enabled:
 * 'block', 'filter', 'node', 'system', 'user'.
 *
 * @return
 * An array of modules to be enabled.
 */
function drumblr_profile_modules() {
  $modules = array();
  
  // Core modules
  $modules[] = 'block';
  $modules[] = 'contact';
  $modules[] = 'dblog';
  $modules[] = 'filter';
  $modules[] = 'help';
  $modules[] = 'menu';
  $modules[] = 'node';
  $modules[] = 'path';
  $modules[] = 'system';
  $modules[] = 'taxonomy';
  $modules[] = 'color';
  $modules[] = 'user';
  $modules[] = 'update';
  $modules[] = 'install_profile_api';

  // Contrib modules
  $modules[] = 'admin';
  $modules[] = 'adminrole';
  $modules[] = 'auto_nodetitle';
  $modules[] = 'filefield';
  $modules[] = 'imagefield';
  $modules[] = 'ctools'; 
  $modules[] = 'designkit';
  $modules[] = 'emvideo';
  $modules[] = 'emimage';
  $modules[] = 'emfield';
  $modules[] = 'features';
  $modules[] = 'imageapi';
  $modules[] = 'imagecache';
  $modules[] = 'imagecache_ui';
  $modules[] = 'pathauto';
  $modules[] = 'poormanscron';
  $modules[] = 'token';
  $modules[] = 'drumblr_settings';

  // CCK modules
  $modules[] = 'content';
  $modules[] = 'content_copy';
  $modules[] = 'fieldgroup';
  $modules[] = 'nodereference';
  $modules[] = 'number';
  $modules[] = 'optionwidgets';
  $modules[] = 'text';
  $modules[] = 'userreference';

  return $modules;
}

function drumblr_profile_task_list() {
  global $conf;
  $conf['site_name'] = 'Drumblr';
}

function drumblr_profile_tasks(&$task, $url) {
  // Load install_profile_api() functions
  install_include(drumblr_profile_modules());

  // Set site theme.
  install_disable_theme('garland');
  install_enable_theme('tao');
  install_enable_theme('rubik');
  install_enable_theme('cube');
  install_default_theme('drumbl');

  /* drumblr_roles_add();
  drumblr_users_add();
  drumblr_menus_add();
  drumblr_types_add();
  drumblr_taxonomy_add();
  drumblr_blocks_add();
  drumblr_blocks_remove();

  // Create a welcome page.
  $node = new stdClass();
  $node->type = 'page';
  $node->title = st('Welcome to Drumblr.');
  $node->body = st("Welcome to your new Drumblr site.  Get started  by using the menu items to the left to post your content.");
  $node->format = 1;
  $node->status = 1;
  $node->revision = 1;
  $node->promote = 1;
  
  $node = node_submit($node);
  $node->uid = 1;
  node_save($node);

  // Uninstall the install_profile_api helper module.
  module_disable(array('install_profile_api'));
  drupal_set_installed_schema_version('install_profile_api', SCHEMA_UNINSTALLED);
}