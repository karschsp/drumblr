<?php

/**
 * Implementation of hook_taxonomy_default_vocabularies().
 */
function drumblr_settings_taxonomy_default_vocabularies() {
  return array(
    'tags' => array(
      'name' => 'Tags',
      'description' => '',
      'help' => '',
      'relations' => '1',
      'hierarchy' => '0',
      'multiple' => '0',
      'required' => '0',
      'tags' => '1',
      'module' => 'features_tags',
      'weight' => '0',
      'nodes' => array(
        'page' => 'page',
        'photo' => 'photo',
        'quote' => 'quote',
        'text' => 'text',
        'video' => 'video',
      ),
    ),
  );
}
