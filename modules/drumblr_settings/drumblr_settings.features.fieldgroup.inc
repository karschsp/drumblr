<?php

/**
 * Implementation of hook_fieldgroup_default_groups().
 */
function drumblr_settings_fieldgroup_default_groups() {
  $groups = array();

  // Exported group: group_photo
  $groups['photo-group_photo'] = array(
    'group_type' => 'standard',
    'type_name' => 'photo',
    'group_name' => 'group_photo',
    'label' => 'Photo',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset',
        'description' => '',
      ),
      'display' => array(
        'weight' => '-4',
        'label' => 'hidden',
        'teaser' => array(
          'format' => 'no_style',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'no_style',
          'exclude' => 0,
        ),
        'description' => '',
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
      ),
    ),
    'weight' => '-4',
    'fields' => array(
      '0' => 'field_photo_upload',
      '1' => 'field_photo_url',
    ),
  );

  // Exported group: group_upload_photo
  $groups['text-group_upload_photo'] = array(
    'group_type' => 'standard',
    'type_name' => 'text',
    'group_name' => 'group_upload_photo',
    'label' => 'Upload a photo',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset_collapsed',
        'description' => '',
      ),
      'display' => array(
        'weight' => '-4',
        'label' => 'hidden',
        'teaser' => array(
          'format' => 'no_style',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'no_style',
          'exclude' => 0,
        ),
        'description' => '',
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
      ),
    ),
    'weight' => '-4',
    'fields' => array(
      '0' => 'field_photo_upload',
      '1' => 'field_photo_url',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Photo');
  t('Upload a photo');

  return $groups;
}
