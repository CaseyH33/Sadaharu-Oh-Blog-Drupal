<?php
/**
 * @file
 * team_page.features.inc
 */

/**
 * Implements hook_node_info().
 */
function team_page_node_info() {
  $items = array(
    'team' => array(
      'name' => t('Team'),
      'base' => 'node_content',
      'description' => t('Information about your favorite ball clubs'),
      'has_title' => '1',
      'title_label' => t('Team'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
