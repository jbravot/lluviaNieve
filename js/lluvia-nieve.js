/**
 * JavaScript para Lluvia Nieve
 * @version 1 (31. Dic 2013)
 * @author @jbravot (jonathan Bravo)
 * @requires jQuery, jquery.snow
 * @see jonathanbravo.com
 */
(function($){
	$(document).ready(function(){
		$(document.body).append('<div id="lluvia-nieve" '+Drupal.settings.lluviaNieve.position+'></div>');
		$(document.body).addClass('navidad');
		if(! /Android|webOS|iPhone|iPad|iPod|BlackBerry|IEMobile|Opera Mini/i.test(navigator.userAgent) || Drupal.settings.lluviaNieve.active_smart) {
			$.fn.snow({ minSize: Drupal.settings.lluviaNieve.minsize, maxSize: Drupal.settings.lluviaNieve.maxsize, newOn: Drupal.settings.lluviaNieve.frequency, flakeColor: Drupal.settings.lluviaNieve.color });
		}
	});
})(jQuery);