<?php
/**
 * @file
 * caw_course_event_series_vocabulary.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function caw_course_event_series_vocabulary_taxonomy_default_vocabularies() {
  return array(
    'event_series_categories' => array(
      'name' => 'Course/Event Series Category',
      'machine_name' => 'event_series_categories',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
