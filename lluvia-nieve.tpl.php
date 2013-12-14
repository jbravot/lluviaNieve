<?php

$active_smart = ($active ? true : false);
$position = ($position ? "style='position:fixed;'" : '');
drupal_add_js(drupal_get_path('module', 'lluvianieve') .'/js/snow.js');
drupal_add_js(array('lluviaNieve' => array(
	'active_smart' => $active_smart,
	'position' => $position,
	'minsize' => $minsize,
	'maxsize' => $maxsize,
	'frequency' => $frequency,
	'color' => $color,
)), 'setting');
drupal_add_js(drupal_get_path('module', 'lluvianieve') .'/js/lluvia-nieve.js');
drupal_add_css(drupal_get_path('module', 'lluvianieve') .'/css/lluvia-nieve.css');

?>