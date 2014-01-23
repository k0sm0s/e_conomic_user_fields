<?php
/**
 * @file
 * e_conomic_user_fields.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function e_conomic_user_fields_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'user_invoice';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'user invoice';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'User Invoices';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_economic_invoice_accountid' => 'field_economic_invoice_accountid',
    'field_economic_invoice_serialnum' => 'field_economic_invoice_serialnum',
    'field_economic_invoice_date' => 'field_economic_invoice_date',
    'field_economic_invoice_entry' => 'field_economic_invoice_entry',
    'field_economic_invoice_invoice' => 'field_economic_invoice_invoice',
    'field_economic_invoice_text' => 'field_economic_invoice_text',
    'field_economic_invoice_amount' => 'field_economic_invoice_amount',
    'field_economic_invoice_balance' => 'field_economic_invoice_balance',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_economic_invoice_accountid' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_economic_invoice_serialnum' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_economic_invoice_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_economic_invoice_entry' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_economic_invoice_invoice' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_economic_invoice_text' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_economic_invoice_amount' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_economic_invoice_balance' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: economic_invoice_accountid */
  $handler->display->display_options['fields']['field_economic_invoice_accountid']['id'] = 'field_economic_invoice_accountid';
  $handler->display->display_options['fields']['field_economic_invoice_accountid']['table'] = 'field_data_field_economic_invoice_accountid';
  $handler->display->display_options['fields']['field_economic_invoice_accountid']['field'] = 'field_economic_invoice_accountid';
  $handler->display->display_options['fields']['field_economic_invoice_accountid']['label'] = 'accountid';
  $handler->display->display_options['fields']['field_economic_invoice_accountid']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: economic_invoice_serialnumber */
  $handler->display->display_options['fields']['field_economic_invoice_serialnum']['id'] = 'field_economic_invoice_serialnum';
  $handler->display->display_options['fields']['field_economic_invoice_serialnum']['table'] = 'field_data_field_economic_invoice_serialnum';
  $handler->display->display_options['fields']['field_economic_invoice_serialnum']['field'] = 'field_economic_invoice_serialnum';
  $handler->display->display_options['fields']['field_economic_invoice_serialnum']['label'] = 'serialnumber';
  $handler->display->display_options['fields']['field_economic_invoice_serialnum']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: economic_invoice_date */
  $handler->display->display_options['fields']['field_economic_invoice_date']['id'] = 'field_economic_invoice_date';
  $handler->display->display_options['fields']['field_economic_invoice_date']['table'] = 'field_data_field_economic_invoice_date';
  $handler->display->display_options['fields']['field_economic_invoice_date']['field'] = 'field_economic_invoice_date';
  $handler->display->display_options['fields']['field_economic_invoice_date']['label'] = 'date';
  /* Field: Content: economic_invoice_entry */
  $handler->display->display_options['fields']['field_economic_invoice_entry']['id'] = 'field_economic_invoice_entry';
  $handler->display->display_options['fields']['field_economic_invoice_entry']['table'] = 'field_data_field_economic_invoice_entry';
  $handler->display->display_options['fields']['field_economic_invoice_entry']['field'] = 'field_economic_invoice_entry';
  $handler->display->display_options['fields']['field_economic_invoice_entry']['label'] = 'entry';
  $handler->display->display_options['fields']['field_economic_invoice_entry']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: economic_invoice_invoice */
  $handler->display->display_options['fields']['field_economic_invoice_invoice']['id'] = 'field_economic_invoice_invoice';
  $handler->display->display_options['fields']['field_economic_invoice_invoice']['table'] = 'field_data_field_economic_invoice_invoice';
  $handler->display->display_options['fields']['field_economic_invoice_invoice']['field'] = 'field_economic_invoice_invoice';
  $handler->display->display_options['fields']['field_economic_invoice_invoice']['label'] = 'invoice';
  $handler->display->display_options['fields']['field_economic_invoice_invoice']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: economic_invoice_text */
  $handler->display->display_options['fields']['field_economic_invoice_text']['id'] = 'field_economic_invoice_text';
  $handler->display->display_options['fields']['field_economic_invoice_text']['table'] = 'field_data_field_economic_invoice_text';
  $handler->display->display_options['fields']['field_economic_invoice_text']['field'] = 'field_economic_invoice_text';
  $handler->display->display_options['fields']['field_economic_invoice_text']['label'] = 'text';
  /* Field: Content: economic_invoice_amount */
  $handler->display->display_options['fields']['field_economic_invoice_amount']['id'] = 'field_economic_invoice_amount';
  $handler->display->display_options['fields']['field_economic_invoice_amount']['table'] = 'field_data_field_economic_invoice_amount';
  $handler->display->display_options['fields']['field_economic_invoice_amount']['field'] = 'field_economic_invoice_amount';
  $handler->display->display_options['fields']['field_economic_invoice_amount']['label'] = 'amount';
  $handler->display->display_options['fields']['field_economic_invoice_amount']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: economic_invoice_balance */
  $handler->display->display_options['fields']['field_economic_invoice_balance']['id'] = 'field_economic_invoice_balance';
  $handler->display->display_options['fields']['field_economic_invoice_balance']['table'] = 'field_data_field_economic_invoice_balance';
  $handler->display->display_options['fields']['field_economic_invoice_balance']['field'] = 'field_economic_invoice_balance';
  $handler->display->display_options['fields']['field_economic_invoice_balance']['label'] = 'balance';
  $handler->display->display_options['fields']['field_economic_invoice_balance']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: economic_invoice_accountid (field_economic_invoice_accountid) */
  $handler->display->display_options['arguments']['field_economic_invoice_accountid_value']['id'] = 'field_economic_invoice_accountid_value';
  $handler->display->display_options['arguments']['field_economic_invoice_accountid_value']['table'] = 'field_data_field_economic_invoice_accountid';
  $handler->display->display_options['arguments']['field_economic_invoice_accountid_value']['field'] = 'field_economic_invoice_accountid_value';
  $handler->display->display_options['arguments']['field_economic_invoice_accountid_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_economic_invoice_accountid_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_economic_invoice_accountid_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_economic_invoice_accountid_value']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'e_conomic_invoice' => 'e_conomic_invoice',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'user-invoice';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Invoices';
  $handler->display->display_options['menu']['description'] = 'Invoices';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'user-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['user_invoice'] = $view;

  return $export;
}
