<?php

/**
 * @file
 * Rules integration for CFFA applicants
 */

/**
 * Implements hook_rules_event_info().
 */
function cffa_cron_reject_applications_rules_event_info() {
  $items = array(
    'cffa_reject_incomplete_application' => array(
      'label' => t('Reject an Incomplete application after 6 months'),
      'group' => t('CFFA Cron'),
      'variables' => array(
        'account' => array(
          'type' => 'user',
          'label' => t('User who submitted the application'),
        ),
        'application' => array(
          'type' => 'node',
          'bundle' => 'grant_application',
          'label' => t('Application that is supposed to be rejected'),
        ),
      ),
    ),
  );
  return $items;
}
