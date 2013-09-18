<?php
/**
 * @file
 * features_ckeditor.features.ckeditor_profile.inc
 */

/**
 * Implements hook_ckeditor_profile_defaults().
 */
function features_ckeditor_ckeditor_profile_defaults() {
  $data = array(
    'Advanced' => array(
      'name' => 'Advanced',
      'settings' => array(
        'ss' => 2,
        'default' => 't',
        'show_toggle' => 't',
        'uicolor' => 'default',
        'uicolor_user' => 'default',
        'toolbar' => '[
    [\'Source\'],
    [\'Link\',\'Unlink\'],
    [\'CreateDiv\',\'Image\',\'Table\',\'SpecialChar\'],
    [\'Maximize\'],
    \'/\',
    [\'Format\',\'-\',\'Bold\',\'Italic\',\'Underline\',\'Strike\',\'-\',\'Subscript\',\'Superscript\'],
    [\'NumberedList\',\'BulletedList\',\'-\',\'Blockquote\'],
    [\'JustifyLeft\',\'JustifyCenter\',\'JustifyRight\',\'JustifyBlock\',\'-\',\'Outdent\',\'Indent\'],
    [\'RemoveFormat\']
]',
        'expand' => 't',
        'width' => '100%',
        'lang' => 'en',
        'auto_lang' => 't',
        'language_direction' => 'default',
        'allowed_content' => 't',
        'extraAllowedContent' => 'pre(*)',
        'enter_mode' => 'p',
        'shift_enter_mode' => 'br',
        'font_format' => 'p;pre;h2;h3;h4',
        'custom_formatting' => 'f',
        'formatting' => array(
          'custom_formatting_options' => array(
            'indent' => 'indent',
            'breakBeforeOpen' => 'breakBeforeOpen',
            'breakAfterOpen' => 'breakAfterOpen',
            'breakBeforeClose' => 'breakBeforeClose',
            'breakAfterClose' => 'breakAfterClose',
            'pre_indent' => 0,
          ),
        ),
        'css_mode' => 'none',
        'css_path' => '',
        'css_style' => 'default',
        'styles_path' => '',
        'filebrowser' => 'imce',
        'filebrowser_image' => 'imce',
        'filebrowser_flash' => 'imce',
        'UserFilesPath' => '%b%f/imce',
        'UserFilesAbsolutePath' => '%d%b%f/imce',
        'forcePasteAsPlainText' => 't',
        'html_entities' => 'f',
        'scayt_autoStartup' => 'f',
        'theme_config_js' => 'f',
        'js_conf' => '',
        'loadPlugins' => array(
          'ckeditor_image' => array(
            'name' => 'ckeditor_image',
            'desc' => 'Plugin that converts image inline styles to attributes/classes.',
            'path' => '%base_path%sites/all/modules/contrib/ckeditor_image/plugins/ckeditor_image/',
            'buttons' => FALSE,
          ),
        ),
      ),
      'input_formats' => array(
        'filtered_html' => 'Filtered HTML',
        'full_html' => 'Full HTML',
      ),
    ),
    'CKEditor Global Profile' => array(
      'name' => 'CKEditor Global Profile',
      'settings' => array(
        'ckeditor_path' => '%l/ckeditor',
      ),
      'input_formats' => array(),
    ),
  );
  return $data;
}
