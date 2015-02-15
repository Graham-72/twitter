<?php
/**
 * @file
 * Page callbacks for Twitter Signin module.
 */

/**
 * Settings form for Twitter Signin.
 */
function twitter_signin_admin_settings($form, &$form_state) {
  $form = array();

  $img_path = backdrop_get_path('module', 'twitter_signin') . '/images';
  $results = file_scan_directory($img_path, '/.png/');

  $options = array();
  foreach ($results as $image) {
    $options[$image->filename] = theme('image', array('uri' => $image->uri));
  }

  $form['twitter_signin_button'] = array(
    '#type' => 'radios',
    '#title' => t('Select sign-in button'),
    '#options' => $options,
    '#default_value' => config_get('twitter_signin.settings','twitter_signin_button'),
  );

  $form['twitter_signin_register'] = array(
    '#title' => t('Automatically register new users'),
    '#type' => 'radios',
    '#options' => array(t('No'), t('Yes')),
    '#default_value' => config_get('twitter_signin.settings','twitter_signin_register'),
    '#description' => t('Warning, if you enable this, new user accounts will be created without email addresses.'),
  );


  $form['actions']['#type'] = 'actions';
  $form['actions']['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Save configuration'),
  );

  return $form;
}

// Add a submit function to process config
function twitter_signin_admin_settings_submit($form, &$form_state) {
  $config = config('twitter_signin.settings');
  $config->set('twitter_signin_button', $form_state['values']['twitter_signin_button']);
  $config->set('twitter_signin_register', $form_state['values']['twitter_signin_register']);
  $config->save();
  backdrop_set_message(t('The configuration options have been saved.'));
}
