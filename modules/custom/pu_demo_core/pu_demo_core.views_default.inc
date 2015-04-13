<?php
/**
 * @file
 * pu_demo_core.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function pu_demo_core_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'demo';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'system';
  $view->human_name = 'Demo';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Demo';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: System: Module/Theme/Theme engine filename */
  $handler->display->display_options['fields']['filename']['id'] = 'filename';
  $handler->display->display_options['fields']['filename']['table'] = 'system';
  $handler->display->display_options['fields']['filename']['field'] = 'filename';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'demo';
  $export['demo'] = $view;

  return $export;
}
