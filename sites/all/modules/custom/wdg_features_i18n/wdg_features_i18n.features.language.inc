<?php
/**
 * @file
 * wdg_features_i18n.features.language.inc
 */

/**
 * Implements hook_locale_default_languages().
 */
function wdg_features_i18n_locale_default_languages() {
  $languages = array();

  // Exported language: fr.
  $languages['fr'] = array(
    'language' => 'fr',
    'name' => 'French',
    'native' => 'Français',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 0,
    'formula' => '',
    'domain' => '',
    'prefix' => 'fr',
    'weight' => 0,
  );
  return $languages;
}
