/**
 * JavaScript para Lluvia Nieve
 * @version 1 (31. Dic 2013)
 * @author @jbravot (jonathan Bravo)
 * @requires jQuery, jquery.snow
 * @see jonathanbravo.com
 */
(function($){
	$(document).ready(function(){
		$(document.body).append('<div id="lluvia-nieve"></div>');
		$(document.body).addClass('navidad');
		if(! /Android|webOS|iPhone|iPad|iPod|BlackBerry|IEMobile|Opera Mini/i.test(navigator.userAgent) ) {
			$.fn.snow({ minSize: 10, maxSize: 20, newOn: 1000, flakeColor: '#FFF' });
		}
	});
})(jQuery);