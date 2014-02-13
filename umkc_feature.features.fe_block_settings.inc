<?php
/**
 * @file
 * umkc_feature.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function umkc_feature_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-browse_collections'] = array(
    'cache' => -1,
    'css_class' => 'browse-collections',
    'custom' => 0,
    'machine_name' => 'browse_collections',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'umkc_theme' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'umkc_theme',
        'weight' => -19,
      ),
    ),
    'title' => 'Browse Our Collections',
    'visibility' => 1,
  );

  $export['block-slides_block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'machine_name' => 'slides_block',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'umkc_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'umkc_theme',
        'weight' => 0,
      ),
    ),
    'title' => 'Slides Block',
    'visibility' => 0,
  );

  $export['islandora_solr-basic_facets'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'basic_facets',
    'module' => 'islandora_solr',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'umkc_theme' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'umkc_theme',
        'weight' => -21,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['islandora_solr-current_query'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'current_query',
    'module' => 'islandora_solr',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'umkc_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'umkc_theme',
        'weight' => -21,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['islandora_solr-display_switch'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'display_switch',
    'module' => 'islandora_solr',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'umkc_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'umkc_theme',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['islandora_solr-simple'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'simple',
    'module' => 'islandora_solr',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'umkc_theme' => array(
        'region' => 'highlighted',
        'status' => 1,
        'theme' => 'umkc_theme',
        'weight' => -20,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['islandora_solr-sort'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'sort',
    'module' => 'islandora_solr',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'umkc_theme' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'umkc_theme',
        'weight' => -18,
      ),
    ),
    'title' => 'Sort by:',
    'visibility' => 0,
  );

  $export['menu-menu-footer-menu'] = array(
    'cache' => -1,
    'css_class' => 'footer-menu',
    'custom' => 0,
    'delta' => 'menu-footer-menu',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'umkc_theme' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'umkc_theme',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['menu-menu-sidebar-menu'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'menu-sidebar-menu',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => 'about',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'umkc_theme' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'umkc_theme',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['views-galleria_view-block'] = array(
    'cache' => -1,
    'css_class' => 'slideshow',
    'custom' => 0,
    'delta' => 'galleria_view-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'umkc_theme' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'umkc_theme',
        'weight' => -21,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['views-galleria_view-block_1'] = array(
    'cache' => -1,
    'css_class' => 'welcome-message',
    'custom' => 0,
    'delta' => 'galleria_view-block_1',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'umkc_theme' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'umkc_theme',
        'weight' => -20,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  return $export;
}
