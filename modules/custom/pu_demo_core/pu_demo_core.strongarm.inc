<?php
/**
 * @file
 * pu_demo_core.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function pu_demo_core_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'maintenance_mode';
  $strongarm->value = 1;
  $export['maintenance_mode'] = $strongarm;

  return $export;
}
