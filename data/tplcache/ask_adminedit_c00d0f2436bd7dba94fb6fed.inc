<?php
if(!isset($GLOBALS['_vars'])) $GLOBALS['_vars'] = array(); 
$fields = array();
?><link rel="stylesheet" type="text/css" href="/templets/lawyer/css/layout-new.css" />
<link rel="stylesheet" type="text/css" href="/templets/lawyer/css/style-new.css" />
<link rel="stylesheet" type="text/css" href="/templets/lawyer/css/bootstrap.min.css" />
<link rel="stylesheet" type="text/css" href="/templets/lawyer/css/box.css" />
<script type="text/javascript" src="/templets/lawyer/js/jquery-1.8.1.min.js"></script>
<div class="olask-mod body">
  <div class="main-body container">
    <div class="row p-r">
      <div class="col-xs-12 col-lg-9">
        <form action="?ct=adminAnswer&ac=edit_save" id="QnaIndexForm" method="post" accept-charset="utf-8">
          <div style="display:none;">
          	<input type="hidden" name="askaid" value="<?php echo $askaid; ?>" />
            <!--<input type="hidden" name="reward" value="<?php echo $row['major'];?>" id="QnaCredit"/>
            <input type="hidden" name="ClassLevel1" value="25" id="ClassLevel1"/>
            <input type="hidden" name="ClassLevel2" value="合同事务" id="classname"/>-->
          </div>
          <!--<div class="lvshizhinan-body">
            <div class="lszn-leimu" style="padding-top:0px;">
              <div class="lszn-lm-title" style="padding-left: 10px;">
                <div class="title-l">
                  <h2 style="border-bottom: none;">类&nbsp;&nbsp;&nbsp;&nbsp;型：</h2>
                </div>
              </div>
              <div class="lszn-lm-inner" style="padding-left: 10px;"> <a target="_blank" href="javascript:;" class="lm-kuai  lanse"><span class="tubiao"><img src="/templets/lawyer/images/htsw.png" width="30px" height="30px"></span>合同事务</a> <a target="_blank" href="javascript:;" class="lm-kuai "><span class="tubiao"><img src="/templets/lawyer/images/jtsg.jpg" width="30px" height="30px"></span>交通事故</a> <a target="_blank" href="javascript:;" class="lm-kuai "><span class="tubiao"><img src="/templets/lawyer/images/hyjt.jpg" width="30px" height="30px"></span>婚姻家庭</a> <a target="_blank" href="javascript:;" class="lm-kuai "><span class="tubiao"><img src="/templets/lawyer/images/fcjf.jpg" width="30px" height="30px"></span>房产纠纷</a> <a target="_blank" href="javascript:;" class="lm-kuai "><span class="tubiao"><img src="/templets/lawyer/images/zwjf.jpg" width="30px" height="30px"></span>债权债务</a> <a target="_blank" href="javascript:;" class="lm-kuai "><span class="tubiao"><img src="/templets/lawyer/images/zscq.jpg" width="30px" height="30px"></span>知识产权</a> <a target="_blank" href="javascript:;" class="lm-kuai "><span class="tubiao"><img src="/templets/lawyer/images/xsss.jpg" width="30px" height="30px"></span>刑事诉讼</a> <a target="_blank" href="javascript:;" class="lm-kuai "><span class="tubiao"><img src="/templets/lawyer/images/shpc.jpg" width="30px" height="30px"></span>损害赔偿</a> <a target="_blank" href="javascript:;" class="lm-kuai "><span class="tubiao"><img src="/templets/lawyer/images/yljf.jpg" width="30px" height="30px"></span>医疗纠纷</a> <a target="_blank" href="javascript:;" class="lm-kuai "><span class="tubiao"><img src="/templets/lawyer/images/ldgs.jpg" width="30px" height="30px"></span>劳动工伤</a> <a target="_blank" href="javascript:;" class="lm-kuai "><span class="tubiao"><img src="/templets/lawyer/images/gsfw.jpg" width="30px" height="30px"></span>公司法务</a> <a target="_blank" href="javascript:;" class="lm-kuai "><span class="tubiao"><img src="/templets/lawyer/images/zxqt.jpg" width="30px" height="30px"></span>咨询其他</a> </div>
            </div>
          </div>-->
          <div class="qnas-box p-r">
          <!--<div class="ask-pay-bar">
            <div class="changprice">价格：
              <p>￥</p>
              <span><?php echo $row['major'];?></span></div>
            <div class="topic"><span class="active major">
              <h5>专业</h5>
              解答</span><span class="senior">
              <h5>资深</h5>
              解答</span><span class="project">
              <h5>出方案</h5>

              解答</span></div>
          </div>-->
          <h2 class="text-black" style="color:red;"> 修改提问 </h2>
          <h4 class="text-black"> 问题名称 </h4>
          <input type="text" name="title" value="<?php echo $question['title'];?>" required>
          <h4 class="text-black" style="margin-top: 20px;"> 案情描述  </h4>
          <textarea name="content" class="w6" id="QnaQuestion" required><?php echo $question['content'];?></textarea>
          
          <input  name="submit" type="submit" value="提交问题" style="color: #fff;font-weight: bold; width: 40%; background:linear-gradient(#ffb400, #d99900);opacity: 1;" class="btn btn-block btn-yellow" id="askbtn"/>
        </form>
      </div>
    </div>
  </div>
</div>
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

</script>