<?php
/**
 * @file
 * caw_course_event_series_vocabulary.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function caw_course_event_series_vocabulary_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'taxonomy_term-event_series_categories-field_node_pathauto_rule'
  $field_instances['taxonomy_term-event_series_categories-field_node_pathauto_rule'] = array(
    'bundle' => 'event_series_categories',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'This path will be used for the pathauto alias setting of the course node. Please match it with the appropriate views page.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_node_pathauto_rule',
    'label' => 'Node Pathauto Rule',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'content_editor_text_format' => 'content_editor_text_format',
          'filtered_html' => 'filtered_html',
          'full_html' => 'full_html',
          'plain_text' => 'plain_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'content_editor_text_format' => array(
              'weight' => -10,
            ),
            'filtered_html' => array(
              'weight' => 0,
            ),
            'full_html' => array(
              'weight' => 1,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
          ),
        ),
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 2,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Node Pathauto Rule');
  t('This path will be used for the pathauto alias setting of the course node. Please match it with the appropriate views page.');

  return $field_instances;
}
