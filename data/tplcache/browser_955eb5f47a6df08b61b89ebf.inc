<?php
if(!isset($GLOBALS['_vars'])) $GLOBALS['_vars'] = array(); 
$fields = array();
?><!DOCTYPE HTML>
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
<meta charset="utf-8"> 
<meta http-equiv="X-UA-Compatible" content="IE=edge">
<meta name="viewport" content="width=device-width, initial-scale=1">
<title><?php echo $toptypeinfo['name']?>-<?php echo $cfg_ask_sitename;?></title>
<meta name="keywords" content="法律咨询  律师在线解答  买卖购销法律咨询  买卖购销" />
<meta name="description" content="法易通法律法务买卖购销法律咨询网，聚合遍布全国四线以上城市的优秀律师团，提供律师在线解答买卖购销法律咨询服务。" /> 
<link rel="stylesheet" type="text/css" href="/templets/lawyer/css/layout-new.css" />
<link rel="stylesheet" type="text/css" href="/templets/lawyer/css/style-new.css" />
<link rel="stylesheet" type="text/css" href="/templets/lawyer/css/bootstrap.min.css" />
<link rel="stylesheet" type="text/css" href="/templets/lawyer/css/box.css" />
<script type="text/javascript" src="/templets/lawyer/js/jquery-1.8.1.min.js"></script>
<script type="text/javascript" src="/templets/lawyer/js/modal.min.js"></script>
<script type="text/javascript" src="/templets/lawyer/js/box.js"></script>
<script type="text/javascript" src="/templets/lawyer/js/iealert.js"></script>
<script type="text/javascript">
	$(function(){
		$('.web-header .user-box ul > li:nth-of-type(2) div.fl b').click(function(){
			$('.web-header .user-box ul > li:nth-of-type(2) div.fl ol').show();
			$('.model-box').show();
		});
		$('.model-box').click(function(){
			$('.web-header .user-box ul > li:nth-of-type(2) div.fl ol').hide();
			$('.web-header .inner-box .fr > div.dropdown ul.menu').hide();
			$(this).hide();
		});
		$('.web-header .inner-box .fr > div.dropdown span').click(function(){
			$('.web-header .inner-box .fr > div.dropdown ul.menu').show();
			$('.model-box').show();
		})
		$("#search-btn").leanModal();
		$("body").iealert();
		$('footer .link .row .inner-box .top-box ul li').click(function(){
			$(this).addClass('click').siblings().removeClass('click');
			var numb = $(this).index()
			$('footer .link .row .inner-box .bottom-box div').eq(numb).show().siblings().hide()
		});
	});
	</script>
</head>
<body>
<?php pasterTempletDiy("lawyer/header2.htm"); ?>
    <div class="nav-box">
        <div class="container">
            <div class="row">
                <div class="col-xs-12">
                    <nav>
                        <ul class="list-unstyled">
                            <li class="p-r">
                                <p><a class="text-darkgray" href="/ask">法律咨询首页</a></p>
                            </li>
                            <?php
								$temp = 0;
								foreach($asktypes as $asktype)
								{
									if($asktype['reid'] == 0) {
										if($temp > 0) echo "</li></ol></div></li>\n";
										if($cfg_ask_rewrite == 'Y') $url= $asktype['id'];
										else $url='?ct=browser&tid='.$asktype['id'];
										echo '<li class="p-r click"><p><a class="text-darkgray" href="'.$url.'">'.$asktype['name'].'</a></p><div class="inner-box p-a"><ol class="list-unstyled">';
										$temp++;
									} else {
										if($cfg_ask_rewrite == 'Y') $url= 't'.$asktype['id'];
										else $url='?ct=browser&tid2='.$asktype['id'];
										echo '<li><a href="'.$url.'">'.$asktype['name'].'</a></li>';
									}
								}
								echo "</li></ol></div></li>\n";
							?>
                        </ul>
                    </nav>
                </div>
            </div>
        </div>
    </div>
</header>
<!-- 问答头部 -->
<div id="lean_overlay">
    <form class="form-inline p-r" action="?ct=search" method="post" name="search">
        <div class="search-bar">
            <div class="input-part">
                <input id="exampleInputEmail2"  type="text" placeholder="搜索在线问答" name="q">
            </div>
            <button class="text-white btn btn-link " type="submit"><img width="29" height="25" alt="搜索" src="/templets/lawyer/images/search.png"></button>
        </div>
        <div class="inner-box"></div>
    </form>
</div>
<div class="lvshijieda-body">
    <div class="breadcrumb-box visible-lg">
        <div class="container">
            <div class="row">
                <div class="col-xs-12">
                    <p> <span class="icon-font text-blue">&#xe610;</span> <?php echo $nav?> </p>
                </div>
            </div>
        </div>
    </div>
    <div class="jieda-3-mod">
        <div class="container">
            <div class="row">
                <div class="l-box col-lg-9 col-xs-12">
                    <div class="bg-white">
                       <div class="h100p o-h">
                            <div class="fl">
                                <h4 class="text-blue w3"> 最新经营管理法律咨询 </h4>
                            </div>
                            <div class="search-bar fr">
                                <form id="searchForm1" action="?ct=search" method="post" name="search">
                                    <input placeholder="请输入您的案例问题" id="searchtext1" name="q" type="text" class="fl">
                                    
                                    <input type="submit" id="asksear" class="text-center text-white fl" value="搜索提问">
                                    <a href="?ct=question&ac=ask" class="text-white fl">
                                    <p class="text-center">我要提问</p>
                                    </a>
                                </form>
                            </div>
                        </div>
                        <h5 class=" "> <span><?php echo $toptypeinfo['name']?> </span>
                        <?php if($tid || $tid2){
							foreach($subtypeinfos as $subtypeinfo)
							{
								if($tid2 == $subtypeinfo['id'])
								{
									echo '<span>'.$subtypeinfo['name'].'('.$subtypeinfo['asknum'].')</span>';
								}else{
									if($cfg_ask_rewrite == 'Y') $url= 't'.$subtypeinfo['id'];
									else $url='?ct=browser&tid2='.$subtypeinfo['id'];
									echo '<span><a href="'.$url.'">'.$subtypeinfo['name'].'</a>('.$subtypeinfo['asknum'].')</span>';
								}
							}
						 }?> </h5>
                        <ul class="list-unstyled">
                           <?php
							foreach($asks as $ask)
							{
								if($cfg_ask_rewrite == 'Y') $url= 'tid-'.$ask['tid'].'.html';
								else $url='?ct=browser&tid='.$ask['tid'];
								$typedata = ' <a href="'.$url.'">'.$ask['tidname'].'</a>';
								if($ask['tid2'] != 0)
								{
									if($cfg_ask_rewrite == 'Y') $url= 'tid2-'.$ask['tid'].'.html';
									else $url='?ct=browser&tid2='.$ask['tid'];
									$typedata = ' <a href="'.$url.'">">'.$ask['tid2name']."</a>";
								}
							?>
                            <li class="p-r"> <span class="p-a w5-5"><?php echo MyDate('Y-m-d',$ask['dateline']);?></span>
                               
                                <div class="dot p-a"></div>
                                <h3 class="w4">  <a class="text-darkgray" href="<?php echo $ask['qurl'];?>"><?php echo cn_substr($ask['title'],50);?></a> <span class="fr"> 已回答 </span> </h3>
                            </li>
                            <?php }?>
                        </ul>
                        <!--<div class="web-page">
                            <h1> <span class="current">1</span> <span><a href="/ask/maimaigouxiao/p2.html">2</a></span> </h1>
                        </div>-->
                    </div>
                </div>
                <div class="r-box col-xs-3 visible-lg">
                    <div class="pin">
                        <div class="inner-bar bg-white text-center">
                            <h2 class="text-center">好服务，敢于邀请你来</h2>
                            <h3 class="text-center">体验</h3>
                            <ol class="list-unstyled">
                                <li class="text-center"> <a href="/ask/?ct=question&ac=ask_complete" target="_blank"><img src="/templets/lawyer/images/function-4.png" alt="咨询" /></a>
                                    <p class="text-center">在线专业解答</p>
                                    <a href="/ask/?ct=question&ac=ask_complete" target="_blank" class="btn-part">首次咨询免费</a> </li>
                                <li class="text-center"> <a href="/Orders/create/52a960c9b6593"><img src="/templets/lawyer/images/function-3.png" alt="劳动合同" /></a>
                                    <p class="text-center">最新合同范本下载</p>
                                    <a href="/hetong" class="btn-part">首次下载免费</a> </li>
                            </ol>
                            <a href="/Exams" target="_blank" class="btn-bar"> 你给企业做体检了吗 </a> </div>
                    </div>
                </div>
            </div>
        </div>
    </div>
</div>
<?php pasterTempletDiy("lawyer/footer2.htm"); ?>
<script type="text/javascript">
	$(function(){
		$(".pin").pin({
			containerSelector: ".jieda-3-mod"
		});
	});
	</script> 
<script type="text/javascript">
$(function(){
	$('.cpgb-fixed-dingbu').click(function(){
		$(window).scrollTop(0);
	});
	$(window).scroll(function () {
		if ($(window).scrollTop() > 1018 ) {			
			$(".cpgb-fixed-dingbu").css("display","block");
		}else if($(window).scrollTop() < 1016){			
			$(".cpgb-fixed-dingbu").css("display","none");
		}
	});
})
BizQQWPA.addCustom({aty: '1', a: '0', nameAccount: 4008515666, selector: 'BizQQBottomCommon'});
</script> 
</body>
</html>