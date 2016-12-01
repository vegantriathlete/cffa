<?php

/**
 * @file
 * Rules integration for CFFA applicants
 */

/**
 * Implements hook_rules_event_info().
 */
function cffa_app_dash_rules_event_info() {
  $items = array(
    'cffa_new_application_submitted' => array(
      'label' => t('After a new application has been submitted'),
      'group' => t('CFFA Applicant'),
      'variables' => array(
        'account' => array(
          'type' => 'user',
          'label' => t('User who submitted the application'),
        ),
      ),
    ),
    'cffa_application_submitted' => array(
      'label' => t('After an application has been submitted'),
      'group' => t('CFFA Applicant'),
      'variables' => array(
        'account' => array(
          'type' => 'user',
          'label' => t('User who submitted the application'),
        ),
        'application' => array(
          'type' => 'node',
          'bundle' => 'grant_application',
          'label' => t('Application that has been submitted'),
        ),
      ),
    ),
  );
  return $items;
}
