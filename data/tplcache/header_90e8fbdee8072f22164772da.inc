<?php
if(!isset($GLOBALS['_vars'])) $GLOBALS['_vars'] = array(); 
$fields = array();
?><header class="mui-bar mui-bar-nav">
	<span id="spCurrentCity">正在加载...</span>
	<h1 class="mui-title mui-logo"><a href="/"><img src="/images/logo.png"></a></h1>
	<a id="offCanvasBtn" href="#offCanvasSide" class="mui-pull-right mui-btn-link mui-icon mui-icon-bars"></a>
</header>
<div id="allmap" style="display: none"></div>
<!-- <script type="text/javascript" src="/js/rem.js"></script> -->
<script type="text/javascript" src="/js/jquery.min.js"></script>
<script type="text/javascript" src="http://api.map.baidu.com/api?v=2.0&ak=MuNvHFgbfd42G9ZcLoB7sBvSECNMwzUW"></script>
<script type="text/javascript">
	// 百度地图API功能
	var map = new BMap.Map("allmap");
	var point = new BMap.Point(116.331398, 39.897445);
	map.centerAndZoom(point, 12);

	function myFun(result) {
		var cityName = result.name;
		map.setCenter(cityName);
		$("#spCurrentCity").html(cityName);
	}
	var myCity = new BMap.LocalCity();
	myCity.get(myFun);
</script>