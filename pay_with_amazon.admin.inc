<?php

/**
 * @file
 * Administrative page callbacks for the pay_with_amazon module.
 */

/**
 * Implements hook_admin_settings() for module settings configuration.
 */
function pay_with_amaon_admin_settings_form($form_state) {
  $form['account'] = array(
    '#type' => 'fieldset',
    '#title' => t('General settings'),
  );

  $form['account']['pwa_merchantid'] = array(
    '#title' => t('Merchant ID'),
    '#type' => 'textfield',
    '#default_value' => variable_get('pwa_merchantid', ''),
    '#description' => t('You can find this value from ') . 'https://sellercentral.amazon.in/gp/cba/seller/account/settings/user-settings-view.html';
    '#size' => 50,
    '#maxlength' => 50,
    '#required' => TRUE,
  );
  $form['account']['pwa_access_key_id'] = array(
    '#title' => t('Access Key ID'),
    '#type' => 'textfield',
    '#default_value' => variable_get('pwa_access_key_id', ''),
    '#size' => 50,
    '#maxlength' => 50,
    '#required' => TRUE,
  );
  $form['account']['pwa_secret_key_id'] = array(
    '#title' => t('Secret Key ID'),
    '#type' => 'textfield',
    '#default_value' => variable_get('pwa_secret_key_id', ''),
    '#size' => 50,
    '#maxlength' => 50,
    '#required' => TRUE,
  );

  return system_settings_form($form);
}
