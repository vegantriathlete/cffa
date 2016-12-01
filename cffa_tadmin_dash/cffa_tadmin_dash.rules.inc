<?php

/**
 * @file
 * Rules integration for CFFA applicants
 */

/**
 * Implements hook_rules_event_info().
 */
function cffa_tadmin_dash_rules_event_info() {
  $items = array(
    'cffa_application_ready_for_review' => array(
      'label' => t('After an application has been set to be reviewed'),
      'group' => t('CFFA Trustee Admin'),
      'variables' => array(
        'account' => array(
          'type' => 'user',
          'label' => t('User who\'s application is ready for review'),
        ),
        'application' => array(
          'type' => 'node',
          'bundle' => 'grant_application',
          'label' => t('Application that is ready for review'),
        ),
      ),
    ),
    'cffa_application_rejected' => array(
      'label' => t('After rejecting an application'),
      'group' => t('CFFA Trustee Admin'),
      'variables' => array(
        'account' => array(
          'type' => 'user',
          'label' => t('User who was rejected'),
        ),
        'application' => array(
          'type' => 'node',
          'bundle' => 'grant_application',
          'label' => t('Application rejected'),
        ),
      ),
    ),
    'cffa_application_accepted' => array(
      'label' => t('After accepting an application'),
      'group' => t('CFFA Trustee Admin'),
      'variables' => array(
        'account' => array(
          'type' => 'user',
          'label' => t('User who was accepted'),
        ),
        'application' => array(
          'type' => 'node',
          'bundle' => 'grant_application',
          'label' => t('Application accepted'),
        ),
      ),
    ),
  );
  return $items;
}
