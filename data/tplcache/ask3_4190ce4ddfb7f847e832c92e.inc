<?php
if(!isset($GLOBALS['_vars'])) $GLOBALS['_vars'] = array(); 
$fields = array();
?><!DOCTYPE HTML>

<html xmlns="http://www.w3.org/1999/xhtml">
<head>
<meta charset="utf-8">
<meta http-equiv="X-UA-Compatible" content="IE=edge">
<meta name="viewport" content="width=device-width, initial-scale=1">
<title><?php echo $navtitle;?>-<?php echo $cfg_ask_sitename;?></title>
<meta name="keywords" content="法律咨询  律师在线解答  免费法律咨询   实时法律咨询" />
<meta name="description" content="法易通法律法务法律咨询网，聚合遍布全国四线以上城市的优秀律师团，提供律师在线解答法律咨询服务。全国免费法律咨询热线18202835355。" />
<link href="/favicon.ico" type="image/x-icon" rel="icon" />
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
<!--<div class="nav-box">
    <div class="container">
        <div class="row">
            <div class="col-xs-12">
                <nav>
                    <ul class="list-unstyled">
                        <li class="p-r">
                            <p><a class="text-darkgray" href="/ask/">法律咨询首页</a></p>
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
</div>-->
</header>
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
<!-- 问答头部 -->
<div class="olask-mod body ">
    <div class="top-box">
        <div class="container">
            <div class="row">
                <div class="col-xs-12">
                    <div class="breadcrumb-box visible-lg clean-m clean-p">
                        <p> <span class="icon-font text-blue">&#xe610;</span> <a href="/ask/" class=" text-blue">首页</a> - <span >在线法律咨询</span> </p>
                    </div>
                </div>
            </div>
        </div>
    </div>
    <div class="main-body container" style="margin-bottom: -100px;">
        <div class="banner"><img src="/templets/lawyer/images/banner.png" width="100%" alt=""></div>
        <div class="row p-r">
            <div class="col-xs-12 col-lg-9">
              	<?php
					//调用价格
					global $dsql;
					$sql = "Select * From dede_askprice";
					$row=$dsql->getone($sql);
				?>
               <form action="?ct=question&ac=ask_save" target="_blank" id="QnaIndexForm" method="post" accept-charset="utf-8">
                        <div style="display:none;">
                            <input type="hidden" name="reward" value="<?php echo $row['major'];?>" id="QnaCredit"/>
                            <input type="hidden" name="ClassLevel1" value="25" id="ClassLevel1"/>
                            <input type="hidden" name="ClassLevel2" value="合同事务" id="classname"/>
                        </div>
                <div class="lvshizhinan-body">
                    <div class="lszn-leimu">
                        <div class="lszn-lm-title" style="padding-left: 10px;">
                            <div class="title-l">
                                <h2 style="border-bottom: none;">类&nbsp;&nbsp;&nbsp;&nbsp;型：</h2>
                            </div>
                        </div>
                        <div class="lszn-lm-inner" style="padding-left: 10px;">
							<a target="_self" href="javascript:;" class="lm-kuai  lanse"><span class="tubiao"><img src="/templets/lawyer/images/htsw.png" width="30px" height="30px"></span>合同事务</a>
							<a target="_self" href="javascript:;" class="lm-kuai "><span class="tubiao"><img src="/templets/lawyer/images/jtsg.jpg" width="30px" height="30px"></span>交通事故</a>
							<a target="_self" href="javascript:;" class="lm-kuai "><span class="tubiao"><img src="/templets/lawyer/images/hyjt.jpg" width="30px" height="30px"></span>婚姻家庭</a>
							<a target="_self" href="javascript:;" class="lm-kuai "><span class="tubiao"><img src="/templets/lawyer/images/fcjf.jpg" width="30px" height="30px"></span>房产纠纷</a>
							<a target="_self" href="javascript:;" class="lm-kuai "><span class="tubiao"><img src="/templets/lawyer/images/zwjf.jpg" width="30px" height="30px"></span>债权债务</a>
							<a target="_self" href="javascript:;" class="lm-kuai "><span class="tubiao"><img src="/templets/lawyer/images/zscq.jpg" width="30px" height="30px"></span>知识产权</a>
							<a target="_self" href="javascript:;" class="lm-kuai "><span class="tubiao"><img src="/templets/lawyer/images/xsss.jpg" width="30px" height="30px"></span>刑事诉讼</a>
							<a target="_self" href="javascript:;" class="lm-kuai "><span class="tubiao"><img src="/templets/lawyer/images/shpc.jpg" width="30px" height="30px"></span>损害赔偿</a>
							<a target="_self" href="javascript:;" class="lm-kuai "><span class="tubiao"><img src="/templets/lawyer/images/yljf.jpg" width="30px" height="30px"></span>医疗纠纷</a>
							<a target="_self" href="javascript:;" class="lm-kuai "><span class="tubiao"><img src="/templets/lawyer/images/ldgs.jpg" width="30px" height="30px"></span>劳动工伤</a>
							<a target="_bl_selfank" href="javascript:;" class="lm-kuai "><span class="tubiao"><img src="/templets/lawyer/images/gsfw.jpg" width="30px" height="30px"></span>公司法务</a>
							<a target="_self" href="javascript:;" class="lm-kuai "><span class="tubiao"><img src="/templets/lawyer/images/zxqt.jpg" width="30px" height="30px"></span>咨询其他</a>
						</div>
                    </div>
                </div>
                <div class="qnas-box p-r">
                    <div class="ask-pay-bar">
                    	<div class="changprice">价格：<p>￥</p><span><?php echo $row['major'];?></span></div>
                    	<div class="topic"><span class="active major"><h5>专业</h5>解答</span><span class="senior"><h5>资深</h5>解答</span><span class="project"><h5>出方案</h5>解答</span></div>
					</div>
                    
                        <h4 class="text-black"> 问题名称 </h4>
                        <input type="text" name="title" placeholder="问题需要清晰易懂,不能少于8个汉字，也不能过多" required>
                        <h4 class="text-black" style="margin-top: 20px;"> 案情描述 <small class=""> &nbsp;
                            您已输入 <span class="text-red" id="wordCount">0</span> 个汉字（不少于8个汉字） <span class="text-red">*</span> </small> </h4>
                        <textarea name="content" class="w6" placeholder="例如：我与妻子协议离婚，现在想把婚后买的房子协议归儿子所有。但是儿子还不到十八岁，请问可以把房子过户给未成年的子女吗？需要什么手续呢？" id="QnaQuestion" required></textarea>
                        <div class="p-r input-bar h100p o-h">
                            <div class="input-part" id="unLogin"> 
                                <?php if(preg_match("/7/",$safe_gdopen)){?>
                                <label for="" class="code">验证码：</label>
                                <input name="vdcode" value="" maxLength="6" maxlength="100" class="code" type="text" id="vdcode"/>
                                <img src="<?php echo $cfg_ask_basehost;?>/include/vdimgck.php" alt="看不清？点击更换" align="absmiddle" style="cursor:pointer" onclick="this.src=this.src+'?'" />
                                <?php }?>
                            </div>
                        </div>
                        <!--<div class="recharge-warning jifen-tiaozheng" style="display:none;">
                            <h4>剩余：<span class="score">0</span> 积分 <span class="line">|</span> <span class="remark">温馨提示：</span><span id="tips">您的积分不足无法提交问题，请 <a target="_blank" href="/CreditOrders/recharge">充值积分</a>。</span></h4>
                        </div>-->
                        <input  name="submit" type="submit" value="提交问题" style="color: #fff;font-weight: bold; width: 40%; background:linear-gradient(#ffb400, #d99900);opacity: 1;" class="btn btn-block btn-yellow" id="askbtn"/>
                    </form>
                </div>
                <!--<?php pasterTempletDiy("lawyer/changyan.htm"); ?>-->
                <?php pasterTempletDiy("plus/comment.htm"); ?>
            </div>
        </div>
    </div>
</div>
<?php pasterTempletDiy("lawyer/footer2.htm"); ?>
<!--  debug --> 
<!-- javascript --> 
<script type="text/javascript">

	$(function(){
		//选择栏目
		$(".lszn-lm-inner a").click(function(){
			$(this).addClass("lanse").siblings().removeClass('lanse');
			var classname = $(this).text();
			$('#classname').val(classname);
		});
		//价格选择
		$(".major").click(function(){
			$(this).addClass("active").siblings().removeClass('active');
			var price = "<?php echo $row['major'];?>";
			$('#QnaCredit').val(price);
			$(".changprice span").html(price);
		});
		$(".senior").click(function(){
			$(this).addClass("active").siblings().removeClass('active');
			var price = "<?php echo $row['senior'];?>";
			$('#QnaCredit').val(price);
			$(".changprice span").html(price);
		});
		$(".project").click(function(){
			$(this).addClass("active").siblings().removeClass('active');
			var price = "<?php echo $row['project'];?>";
			$('#QnaCredit').val(price);
			$(".changprice span").html(price);
		});
		/*$(".price").click(function(){

			$(this).addClass('default').siblings().removeClass('default');

			var name = $(this).attr('id');

			if(name == 'price1')

			{

				$('#QnaCredit').val("20");

				$('.detail').html("20元，聊表心意");			

				//$('.detail').html("免费往往是最贵的，律师将毫无保留，不营销的为您解答<span class='diyicitishi'>首次提问，可选 0 元咨询</span>");//2018-02-11首次免费功能取消		

			}			

			else if(name == 'price2')

			{

				$('#QnaCredit').val("50");

				$('.detail').html("50元，敬谢不敬");

				//$('.detail').html("律师将【优先】无保留，不营销的为您解答");

			}		

			else if(name == 'price3')

			{

				$('#QnaCredit').val("80");

				$('.detail').html("80元，镂骨铭记");

				//$('.detail').html("至少2名律师【优先】无保留，不营销的为您解答");

			}		

			else if(name == 'price4')

			{

				$('#QnaCredit').val("110");

				$('.detail').html("110元，结草衔环");

				//$('.detail').html("建议有较多问题或问题比较复杂想详细了解的用户选择");

			}

			tips();

		});	*/



		$("#btn-sms").click(function(){

			if(!check_mobile())

			{

				return false;

			}

			$('#btn-sms').addClass('disable');

			$('#btn-sms').attr('disabled',true);

			sendSMS();

		});

	});



	function words_deal()

	{

		var curLength=$("#QnaQuestion").val().length;

		$("#wordCount").html(curLength);

	}



	$("#btnSmsLogin").click(function(){



		var qnaSmsCode=$('#QnaSmsCode').val();

		var mobile=$('#QnaMobile').val();



		if(mobile=="")

		{

			alert('请输入手机号码!');

			return false;

		}

		if(qnaSmsCode=="")

		{

			alert('请输入验证码!');

			return false;

		}

		$.ajax({

			type: "POST",

			url: 'Customers/ajaxSmsLogin',

			data: {'username':mobile,'smsCode':qnaSmsCode,'type':'qna'},

			dataType: "json",

			success: function(data)

			{

				if(data.success)

				{

					$("#unLogin").addClass('hide');																			

					$(".score").html(data.Customer.credit);

					tips();

					$(".recharge-warning").addClass("show");					

					$("#askbtn").attr("disabled",false);							

				}

				else

				{

					$("#askbtn").attr("disabled",true);

					alert('验证错误，请重试！');

				}

			},

			error:function(xhr,t,tr){

				$("#askbtn").attr("disabled",true);

				//alert(tr);

			}

		});	

	});



	function sendSMS()

	{

		if(check_mobile())

		{

			$("#btn-sms").attr('value','发送中...');

		$.ajax({

			type: "GET",

			url: 'Customers/getsms?rnd='+new Date().getTime()/1000,

			data:'mobile='+$.trim($('#QnaMobile').val()),

			dataType: 'html',

			success: function(data)

			{

				if(data=='success')

				{

					lSeconds=60;

					$("#btn-sms").attr('value','已成功发送');

					

					displayInterval();				

				}

				else if(data=='error')

				{

					alert('该用户不存！');

					$('#btn-sms').removeClass('disable');

					$('#btn-sms').attr('disabled',false);

				}

				else

				{

					alert('获取短信出错，请重试或联系管理员！');

					$('#btn-sms').removeClass('disable');

					$('#btn-sms').attr('disabled',false);

				}

			},

			'error':function(){

				alert('获取短信出错，请重试或联系管理员！');

				$('#btn-sms').removeClass('disable');

				$('#btn-sms').attr('disabled',false);

			}

		});	

		}	

	}



	var lSeconds = 60;

	function displayInterval(){		

		$("#btn-sms").unbind('click');

		timeIntervalSMS=setInterval(function(){

			if(lSeconds<=1){

			    $('#btn-sms').removeClass('disable');

			    $('#btn-sms').attr('disabled',false);

				$("#btn-sms").attr('value','重新发送');

				clearInterval(timeIntervalSMS);

				$("#btn-sms").click(function(){

					$('#btn-sms').addClass('disable');

					$('#btn-sms').attr('disabled',true);

					sendSMS();

				});

				return;

			}

			lSeconds--;

			$('#btn-sms').addClass('disable');

			$("#btn-sms").attr('value',lSeconds+"秒后重发");

		}, 1000);

	}



	//手机验证

	function check_mobile()

	{

		var m=$.trim($('#QnaMobile').val());

		if(m!='')

		{

			var reg = /^1[34578]\d{9}$/;

			

			var result = false;

			if (reg.test(m))

				result=true;		

			if (result)

			{

				return true;

			}else{

				alert("请输入正确的手机号");

				return false;

			}

		}else{

			

			alert("请输入手机号");

			return false;

		}

	}



	var wasSubmitted = false;

	function submitAnswer()

	{

		var valid = 1;

		var msg = "";



		if( parseInt($(".score").html()) < parseInt($("#QnaCredit").val()))

		{

			msg= msg+"积分不足";

			valid = 0;

		}



		if( $("#QnaQuestion").val() == '' )

		{

			msg= msg+"请输入事件原委";

			valid = 0;

		}



		if( $("#QnaQuestion").val().length < 8 )

		{

			msg= msg+"提问不得少于8个字符";

			valid = 0;

		}



		if(valid)

		{

			if(!wasSubmitted) 

			{

				wasSubmitted = true;

				$("#QnaIndexForm").submit();

			}

		}else

		{

			alert(msg);

		}

	}

	

$("#QnaQuestion").keyup(function(){

	words_deal();

});



function searchSubmit(id)

{

	$('#searchForm'+id).submit();

}



function aClickAsk(id)

{

	var q = $("#searchtext"+id).val();

	window.location.href="/ask/add?q="+q;

}



function tips()

{

	var leftCredit = parseInt($(".score").html());

	var useCredit = parseInt($("#QnaCredit").val());

	if(leftCredit >= useCredit)

	{

		$("#tips").html('积分可用于在线咨询律师，还可用于<a target="_blank" href="/hetong">下载合同范本</a>');

	}

	else

	{

		$("#tips").html('您的积分不足无法提交问题，请 <a target="_blank" href="/CreditOrders/recharge">充值积分</a>。');

	}

}

</script> 
<script type="text/javascript">

function clearInput()

{

	if($("#search-input").val()== '请描述您的案例或者问题...')

	{

		$("#search-input").val("");

	}

}

</script> 
<script type="text/javascript">

	$(function(){

		$.ajax({

			type: "GET",

			url: 'Contracts/ajaxGetCount',			

			dataType: "html",

			success: function(data)

			{

				$("#contractCount").html(data);

			},

			error:function(xhr,t,tr){				

				//alert(tr);

			}

		});

	})

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