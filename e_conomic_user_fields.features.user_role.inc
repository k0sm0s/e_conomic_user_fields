<?php
/**
 * @file
 * e_conomic_user_fields.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function e_conomic_user_fields_user_default_roles() {
  $roles = array();

  // Exported role: e-conomic user.
  $roles['e-conomic user'] = array(
    'name' => 'e-conomic user',
    'weight' => 2,
  );

  return $roles;
}
