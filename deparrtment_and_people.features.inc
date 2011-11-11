<?php
/**
 * @file
 * deparrtment_and_people.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function deparrtment_and_people_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function deparrtment_and_people_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => "3.0");
  }
}

/**
 * Implements hook_node_info().
 */
function deparrtment_and_people_node_info() {
  $items = array(
    'animeclub_department' => array(
      'name' => t('AnimeClub_Department'),
      'base' => 'node_content',
      'description' => t('与田动漫社机构部门介绍'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'animeclub_event' => array(
      'name' => t('事件'),
      'base' => 'node_content',
      'description' => t('日程安排'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'stars' => array(
      'name' => t('Stars'),
      'base' => 'node_content',
      'description' => t('与田名人'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
