<?php

/**
 * Implementation of hook_strongarm().
 */
function drumblr_settings_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'allowed_html_1';
  $strongarm->value = '<a> <em> <strong> <cite> <code> <ul> <ol> <li> <dl> <dt> <dd> <img> <b> <blockquote> <p> <br>';

  $export['allowed_html_1'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'anonymous';
  $strongarm->value = 'Anonymous';

  $export['anonymous'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_pattern_photo';
  $strongarm->value = '[type]-[yyyy]-[mm]-[dd]';

  $export['ant_pattern_photo'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_pattern_quote';
  $strongarm->value = '[type] [m] [d], [yyyy]';

  $export['ant_pattern_quote'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_pattern_text';
  $strongarm->value = '[type]-[yyyy]-[mm]-[dd]';

  $export['ant_pattern_text'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_pattern_video';
  $strongarm->value = '[type] [m] [d], [yyyy]';

  $export['ant_pattern_video'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_photo';
  $strongarm->value = '1';

  $export['ant_photo'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_php_photo';
  $strongarm->value = 0;

  $export['ant_php_photo'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_php_quote';
  $strongarm->value = 0;

  $export['ant_php_quote'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_php_text';
  $strongarm->value = 0;

  $export['ant_php_text'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_php_video';
  $strongarm->value = 0;

  $export['ant_php_video'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_quote';
  $strongarm->value = '1';

  $export['ant_quote'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_text';
  $strongarm->value = '2';

  $export['ant_text'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_video';
  $strongarm->value = '1';

  $export['ant_video'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'better_formats_allowed_photo';
  $strongarm->value = array(
    0 => 1,
  );

  $export['better_formats_allowed_photo'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'better_formats_allowed_quote';
  $strongarm->value = array(
    0 => 3,
  );

  $export['better_formats_allowed_quote'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'better_formats_fieldset_title';
  $strongarm->value = '';

  $export['better_formats_fieldset_title'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'better_formats_long_tips_link_text';
  $strongarm->value = '';

  $export['better_formats_long_tips_link_text'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'better_formats_per_node_type';
  $strongarm->value = 1;

  $export['better_formats_per_node_type'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'clean_url';
  $strongarm->value = '1';

  $export['clean_url'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_photo';
  $strongarm->value = 0;

  $export['comment_anonymous_photo'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_quote';
  $strongarm->value = 0;

  $export['comment_anonymous_quote'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_text';
  $strongarm->value = 0;

  $export['comment_anonymous_text'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_video';
  $strongarm->value = 0;

  $export['comment_anonymous_video'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_controls_photo';
  $strongarm->value = '3';

  $export['comment_controls_photo'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_controls_quote';
  $strongarm->value = '3';

  $export['comment_controls_quote'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_controls_text';
  $strongarm->value = '3';

  $export['comment_controls_text'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_controls_video';
  $strongarm->value = '3';

  $export['comment_controls_video'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_photo';
  $strongarm->value = '4';

  $export['comment_default_mode_photo'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_quote';
  $strongarm->value = '4';

  $export['comment_default_mode_quote'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_text';
  $strongarm->value = '4';

  $export['comment_default_mode_text'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_video';
  $strongarm->value = '4';

  $export['comment_default_mode_video'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_order_photo';
  $strongarm->value = '1';

  $export['comment_default_order_photo'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_order_quote';
  $strongarm->value = '1';

  $export['comment_default_order_quote'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_order_text';
  $strongarm->value = '1';

  $export['comment_default_order_text'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_order_video';
  $strongarm->value = '1';

  $export['comment_default_order_video'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_photo';
  $strongarm->value = '50';

  $export['comment_default_per_page_photo'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_quote';
  $strongarm->value = '50';

  $export['comment_default_per_page_quote'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_text';
  $strongarm->value = '50';

  $export['comment_default_per_page_text'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_video';
  $strongarm->value = '50';

  $export['comment_default_per_page_video'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_photo';
  $strongarm->value = '0';

  $export['comment_form_location_photo'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_quote';
  $strongarm->value = '0';

  $export['comment_form_location_quote'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_text';
  $strongarm->value = '0';

  $export['comment_form_location_text'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_video';
  $strongarm->value = '0';

  $export['comment_form_location_video'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_page';
  $strongarm->value = 0;

  $export['comment_page'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_photo';
  $strongarm->value = '0';

  $export['comment_photo'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_photo';
  $strongarm->value = '1';

  $export['comment_preview_photo'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_quote';
  $strongarm->value = '1';

  $export['comment_preview_quote'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_text';
  $strongarm->value = '1';

  $export['comment_preview_text'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_video';
  $strongarm->value = '1';

  $export['comment_preview_video'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_quote';
  $strongarm->value = '0';

  $export['comment_quote'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_photo';
  $strongarm->value = '1';

  $export['comment_subject_field_photo'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_quote';
  $strongarm->value = '1';

  $export['comment_subject_field_quote'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_text';
  $strongarm->value = '1';

  $export['comment_subject_field_text'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_video';
  $strongarm->value = '1';

  $export['comment_subject_field_video'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_text';
  $strongarm->value = '0';

  $export['comment_text'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_video';
  $strongarm->value = '0';

  $export['comment_video'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_photo';
  $strongarm->value = array(
    'title' => '-5',
    'body_field' => '-1',
    'revision_information' => '1',
    'author' => '2',
    'options' => '3',
    'comment_settings' => '4',
    'menu' => '0',
    'path' => '5',
  );

  $export['content_extra_weights_photo'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_quote';
  $strongarm->value = array(
    'title' => '-5',
    'body_field' => '-4',
    'revision_information' => '-1',
    'author' => '0',
    'options' => '1',
    'comment_settings' => '2',
    'menu' => '-2',
    'path' => '3',
  );

  $export['content_extra_weights_quote'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_text';
  $strongarm->value = array(
    'title' => '-5',
    'body_field' => '-1',
    'revision_information' => '2',
    'author' => '1',
    'options' => '3',
    'comment_settings' => '4',
    'menu' => '0',
    'path' => '5',
  );

  $export['content_extra_weights_text'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_video';
  $strongarm->value = array(
    'title' => '-5',
    'body_field' => '-3',
    'revision_information' => '-1',
    'author' => '0',
    'options' => '1',
    'comment_settings' => '2',
    'menu' => '-2',
    'path' => '3',
  );

  $export['content_extra_weights_video'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'default_nodes_main';
  $strongarm->value = '10';

  $export['default_nodes_main'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'emfield_emimage_allow_flickr';
  $strongarm->value = 1;

  $export['emfield_emimage_allow_flickr'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'emfield_emvideo_allow_flickr_sets';
  $strongarm->value = 1;

  $export['emfield_emvideo_allow_flickr_sets'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'emfield_emvideo_allow_vimeo';
  $strongarm->value = 1;

  $export['emfield_emvideo_allow_vimeo'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'emfield_emvideo_allow_youtube';
  $strongarm->value = 1;

  $export['emfield_emvideo_allow_youtube'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'emfield_flvmediaplayer_url';
  $strongarm->value = 'sites/all/plugins/mediaplayer/player.swf';

  $export['emfield_flvmediaplayer_url'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'emfield_imagerotator_url';
  $strongarm->value = '';

  $export['emfield_imagerotator_url'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'emfield_swfobject';
  $strongarm->value = 0;

  $export['emfield_swfobject'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'emfield_swfobject_location';
  $strongarm->value = '';

  $export['emfield_swfobject_location'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'emfield_thumbnail_overlay';
  $strongarm->value = 1;

  $export['emfield_thumbnail_overlay'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'eminline_2';
  $strongarm->value = array(
    'provider_list' => array(
      'providers' => array(
        'flickr_sets' => 'flickr_sets',
        'vimeo' => 'vimeo',
        'youtube' => 'youtube',
      ),
    ),
    'emthumb' => array(
      'emthumb' => array(
        'emthumb_store_local_thumbnail' => 1,
        'emthumb' => 0,
        'emthumb_label' => ' custom thumbnail',
        'emthumb_description' => 'If you upload a custom thumbnail, then this will be displayed when the  thumbnail is called for, overriding any automatic thumbnails by custom providers.',
        'emthumb_max_resolution' => '0',
        'emimport_image_path' => '',
        'emthumb_custom_alt' => 0,
        'emthumb_custom_title' => 0,
        'emthumb_start_collapsed' => 0,
      ),
    ),
    'video' => array(
      'video_width' => '425',
      'video_height' => '350',
      'video_autoplay' => 0,
    ),
    'preview' => array(
      'preview_width' => '425',
      'preview_height' => '350',
      'preview_autoplay' => 0,
    ),
    'tn' => array(
      'thumbnail_width' => '120',
      'thumbnail_height' => '90',
      'thumbnail_default_path' => '',
      'thumbnail_link_title' => '',
    ),
    'meta_data' => array(
      'meta_fields' => array(
        'title' => 0,
        'description' => 0,
      ),
    ),
    'node_display' => 'video_video',
  );

  $export['eminline_2'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'eminline_full_node_2';
  $strongarm->value = 'video_video';

  $export['eminline_full_node_2'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'eminline_preview_2';
  $strongarm->value = array(
    'preview_width' => '425',
    'preview_height' => '350',
    'preview_autoplay' => 0,
  );

  $export['eminline_preview_2'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'eminline_providers_2';
  $strongarm->value = array(
    'flickr_sets' => 'flickr_sets',
    'vimeo' => 'vimeo',
    'youtube' => 'youtube',
  );

  $export['eminline_providers_2'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'eminline_tn_2';
  $strongarm->value = array(
    'thumbnail_width' => '120',
    'thumbnail_height' => '90',
    'thumbnail_default_path' => '',
    'thumbnail_link_title' => '',
  );

  $export['eminline_tn_2'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'eminline_video_2';
  $strongarm->value = array(
    'video_width' => '425',
    'video_height' => '350',
    'video_autoplay' => 0,
  );

  $export['eminline_video_2'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'file_directory_temp';
  $strongarm->value = '/tmp';

  $export['file_directory_temp'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'filter_html_1';
  $strongarm->value = '1';

  $export['filter_html_1'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'filter_html_help_1';
  $strongarm->value = 0;

  $export['filter_html_help_1'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'filter_html_nofollow_1';
  $strongarm->value = 0;

  $export['filter_html_nofollow_1'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'filter_url_length_1';
  $strongarm->value = '72';

  $export['filter_url_length_1'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'filter_url_length_2';
  $strongarm->value = '72';

  $export['filter_url_length_2'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'format';
  $strongarm->value = '1';

  $export['format'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'image_toolkit';
  $strongarm->value = 'gd';

  $export['image_toolkit'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'imageapi_image_toolkit';
  $strongarm->value = 'imageapi_gd';

  $export['imageapi_image_toolkit'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_youtube__use_jw_flv';
  $strongarm->value = 0;

  $export['media_youtube__use_jw_flv'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_page';
  $strongarm->value = array(
    0 => 'status',
  );

  $export['node_options_page'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_photo';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );

  $export['node_options_photo'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_quote';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );

  $export['node_options_quote'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_text';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );

  $export['node_options_text'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_video';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );

  $export['node_options_video'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'teaser_length';
  $strongarm->value = '0';

  $export['teaser_length'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_default';
  $strongarm->value = 'cube';

  $export['theme_default'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_drumblr_settings';
  $strongarm->value = array(
    'toggle_logo' => 1,
    'toggle_name' => 1,
    'toggle_slogan' => 0,
    'toggle_mission' => 1,
    'toggle_node_user_picture' => 0,
    'toggle_comment_user_picture' => 0,
    'toggle_search' => 1,
    'toggle_favicon' => 1,
    'toggle_primary_links' => 1,
    'toggle_secondary_links' => 1,
    'default_logo' => 1,
    'logo_path' => '',
    'logo_upload' => '',
    'default_favicon' => 1,
    'favicon_path' => '',
    'favicon_upload' => '',
    'designkit_color' => array(
      'background' => '#0088cc',
      'top' => '#09787c',
      'navbar' => '#dbb7ad',
      'navbartext' => '#ff9805',
    ),
  );

  $export['theme_drumblr_settings'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_settings';
  $strongarm->value = array(
    'toggle_logo' => 1,
    'toggle_name' => 1,
    'toggle_slogan' => 0,
    'toggle_mission' => 1,
    'toggle_node_user_picture' => 0,
    'toggle_comment_user_picture' => 0,
    'toggle_search' => 0,
    'toggle_favicon' => 1,
    'toggle_primary_links' => 1,
    'toggle_secondary_links' => 1,
    'toggle_node_info_feed' => 0,
    'toggle_node_info_feed_item' => 0,
    'toggle_node_info_page' => 1,
    'toggle_node_info_photo' => 1,
    'toggle_node_info_quote' => 1,
    'toggle_node_info_text' => 1,
    'toggle_node_info_video' => 1,
    'default_logo' => 1,
    'logo_path' => '',
    'logo_upload' => '',
    'default_favicon' => 1,
    'favicon_path' => '',
    'favicon_upload' => '',
  );

  $export['theme_settings'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_admin_role';
  $strongarm->value = '3';

  $export['user_admin_role'] = $strongarm;
  return $export;
}
