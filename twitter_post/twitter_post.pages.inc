<?php
/**
 * @file
 *
 * Page callbacks for Twitter Post module.
 */

/**
 * Settings form callback
 */
function twitter_post_admin_settings($form, &$form_state) {
  $config = config('twitter_post.settings');
  $form['twitter_post_types'] = array(
    '#title' => t('Node types'),
    '#type' => 'checkboxes',
    '#description' => t('Choose which node types should support posting to Twitter.'),
    '#options' => node_type_get_names(),
    '#default_value' => $config->get('twitter_post_types'),
  );

  $form['twitter_post_default_format'] = array(
    '#type' => 'textfield',
    '#title' => t('Default format string'),
    '#maxlength' => 140,
    '#description' => t('The given text will be used as a template for posting to Twitter.com. ' . 'The following token replacements are available: !url, !url-alias, !tinyurl, !title, !user and !timestamp'),
    '#default_value' => $config->get('twitter_post_default_format'),
  );

  $form['twitter_post_default_value'] = array(
    '#type' => 'checkbox',
    '#title' => t('Post to Twitter by default'),
    '#default_value' => $config->get('twitter_post_default_value'),
    '#description' => t('When active, tweets will be automatically posted when the node is first published.'),
  );

  $form['twitter_post_on_update'] = array(
    '#type' => 'checkbox',
    '#title' => t('Post to Twitter on node update'),
    '#description' => t('When active, tweets will be posted to Twitter on node update; this can lead to apparently duplicate tweets, so may not be wanted.'),
    '#default_value' => $config->get('twitter_post_on_update'),
    '#states' => array(
      'visible' => array(
        'input[name="twitter_post_default_value"]' => array('checked' => TRUE),
      ),
    ),
  );

  // Add a submit button
  $form['actions']['#type'] = 'actions';
  $form['actions']['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Save configuration'),
  );

  return $form;
}

// Add a submit function to process config
function twitter_post_admin_settings_submit($form, &$form_state) {
  $config = config('twitter_post.settings');
  $config->set('twitter_post_types', $form_state['values']['twitter_post_types']);
  $config->set('twitter_post_default_format', $form_state['values']['twitter_post_default_format']);
  $config->set('twitter_post_default_value', $form_state['values']['twitter_post_default_value']);
  $config->set('twitter_post_on_update', $form_state['values']['twitter_post_on_update']);
  $config->save();
  backdrop_set_message(t('The configuration options have been saved.'));
}