<?php
/**
 * @file
 * Callbacks de administraci&oacute;n del módulo lluvianieve.
 */

/**
 * Define el formulario de opciones de configuraci&oacute;n.
 */
function lluvianieve_configuracion() {

  drupal_add_js(drupal_get_path('module', 'lluvianieve') .'/js/colorPicker/jquery.colorPicker.min.js');
  drupal_add_css(drupal_get_path('module', 'lluvianieve') .'/js/colorPicker/colorPicker.css');
  drupal_add_js(drupal_get_path('module', 'lluvianieve') .'/js/lluvia-nieve-admin.js');
  
  $form['info'] = array(
    '#type' => 'fieldset',
    '#title' => 'Configuraci&oacute;n',
    '#collapsible' => FALSE,	
  ); 
  $form['info']['lluvianieve_position'] = array(
    '#title' => t('Posici&oacute;n fija'),  
    '#type' => 'checkbox',
    '#default_value' => variable_get('lluvianieve_position', FALSE),
    '#description' => t('CSS position fixed'),
  );
  $form['info']['lluvianieve_minsize'] = array(
    '#title' => t('Tama&ntilde;o m&iacute;nimo'),  
    '#type' => 'textfield',
	'#size' => 10,
    '#default_value' => variable_get('lluvianieve_minsize', 10), 
    '#description' => t('Tama&ntilde;o m&iacute;nimo del copo de nieve, predeterminado 10.'),
	'#required' => TRUE,  
  );
  $form['info']['lluvianieve_maxsize'] = array(
    '#title' => t('Tama&ntilde;o m&aacute;ximo'),  
    '#type' => 'textfield',
	'#size' => 10,
    '#default_value' => variable_get('lluvianieve_maxsize', 20), 
    '#description' => t('Tama&ntilde;o m&aacute;ximo del copo de nieve, predeterminado 20.'),
	'#required' => TRUE,  
  );
  $form['info']['lluvianieve_frequency'] = array(
    '#title' => t('Frecuencia'),  
    '#type' => 'textfield',
	'#size' => 10,
    '#default_value' => variable_get('lluvianieve_frequency', 500), 
    '#description' => t('Frecuencia en milisegundos que aparecen de nuevo los copos de nieve, predeterminado 500.'),
	'#required' => TRUE,  
  );
  $form['info']['lluvianieve_color'] = array(
    '#title' => t('Color'),  
    '#type' => 'textfield',
	'#size' => 10,
    '#default_value' => variable_get('lluvianieve_color', '#fff'), 
    '#description' => t('Color del copo de nieve, color predeterminado blanco.'),
	'#required' => TRUE,
  );
  $form['info']['lluvianieve_activar_smartphone'] = array(
    '#title' => t('Activar en dispositivos m&oacute;viles'),  
    '#type' => 'checkbox',
    '#default_value' => variable_get('lluvianieve_activar_smartphone', FALSE),
  );
   
  return system_settings_form($form);
}
