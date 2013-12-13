<?php
drupal_add_js(drupal_get_path('module', 'lluvianieve') .'/js/snow.js');
drupal_add_css(drupal_get_path('module', 'lluvianieve') .'/css/lluvia-nieve.css');

$active_smart = ($active ? true : '! /Android|webOS|iPhone|iPad|iPod|BlackBerry|IEMobile|Opera Mini/i.test(navigator.userAgent) ')
	
?>
<script>
(function($){
	$(document).ready(function(){
		var position = "<?php echo ($position ? "style='position:fixed;'" : '')?>";
		$(document.body).append('<div id="lluvia-nieve" '+position+'></div>');
		$(document.body).addClass('navidad');
		
		if(<?php echo $active_smart ?>) {
			$.fn.snow({ minSize: <?php echo $minsize; ?>, maxSize: <?php echo $maxsize; ?>, newOn: <?php echo $frequency; ?>, flakeColor: '<?php echo $color; ?>' });
		}
	});
})(jQuery);
</script>