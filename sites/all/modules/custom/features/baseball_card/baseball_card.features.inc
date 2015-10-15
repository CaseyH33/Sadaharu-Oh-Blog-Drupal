<?php
/**
 * @file
 * baseball_card.features.inc
 */

/**
 * Implements hook_node_info().
 */
function baseball_card_node_info() {
  $items = array(
    'baseball_card' => array(
      'name' => t('Baseball Card'),
      'base' => 'node_content',
      'description' => t('Add your favorite baseball card!'),
      'has_title' => '1',
      'title_label' => t('Card Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
