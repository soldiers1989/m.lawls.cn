<?php
$z[0]=Array("global","",220,246);
$z[0][4]=array();
$z[0][4]['name']="cfg_webname";
$z[1]=Array("global","",289,319);
$z[1][4]=array();
$z[1][4]['name']="cfg_description";
$z[2]=Array("global","",355,382);
$z[2][4]=array();
$z[2][4]['name']="cfg_keywords";
$z[3]=Array("include","",768,805);
$z[3][4]=array();
$z[3][4]['filename']="header.htm";
$z[4]=Array("arclist"," <a target=\"_blank\" class=\"item-hide-product\" href=\"[field:arcurl/]\">[field:title/]</a> ",2009,2147);
$z[4][4]=array();
$z[4][4]['typeid']="61";
$z[4][4]['row']="20";
$z[5]=Array("arclist"," <a target=\"_blank\" class=\"item-hide-product\" href=\"[field:arcurl/]\">[field:title/]</a> ",2293,2431);
$z[5][4]=array();
$z[5][4]['typeid']="62";
$z[5][4]['row']="20";
$z[6]=Array("arclist"," <a target=\"_blank\" class=\"item-hide-product\" href=\"[field:arcurl/]\">[field:title/]</a> ",2982,3120);
$z[6][4]=array();
$z[6][4]['typeid']="63";
$z[6][4]['row']="20";
$z[7]=Array("arclist"," <a target=\"_blank\" class=\"item-hide-product\" href=\"[field:arcurl/]\">[field:title/]</a> ",3266,3404);
$z[7][4]=array();
$z[7][4]['typeid']="64";
$z[7][4]['row']="20";
$z[8]=Array("arclist"," <a target=\"_blank\" class=\"item-hide-product\" href=\"[field:arcurl/]\">[field:title/]</a> ",3955,4093);
$z[8][4]=array();
$z[8][4]['typeid']="65";
$z[8][4]['row']="20";
$z[9]=Array("arclist"," <a target=\"_blank\" class=\"item-hide-product\" href=\"[field:arcurl/]\">[field:title/]</a> ",4239,4377);
$z[9][4]=array();
$z[9][4]['typeid']="66";
$z[9][4]['row']="20";
$z[10]=Array("arclist"," <a target=\"_blank\" class=\"item-hide-product\" href=\"[field:arcurl/]\">[field:title/]</a> ",4928,5066);
$z[10][4]=array();
$z[10][4]['typeid']="67";
$z[10][4]['row']="20";
$z[11]=Array("arclist"," <a target=\"_blank\" class=\"item-hide-product\" href=\"[field:arcurl/]\">[field:title/]</a> ",5212,5350);
$z[11][4]=array();
$z[11][4]['typeid']="68";
$z[11][4]['row']="20";
$z[12]=Array("arclist"," <a target=\"_blank\" class=\"item-hide-product\" href=\"[field:arcurl/]\">[field:title/]</a> ",5901,6039);
$z[12][4]=array();
$z[12][4]['typeid']="69";
$z[12][4]['row']="20";
$z[13]=Array("arclist"," <a target=\"_blank\" class=\"item-hide-product\" href=\"[field:arcurl/]\">[field:title/]</a> ",6185,6323);
$z[13][4]=array();
$z[13][4]['typeid']="70";
$z[13][4]['row']="20";
$z[14]=Array("sql","\n            <dl>\n              <dt>[field:dateline function=\"MyDate('Y-m-d H:i',@me)\"/]</dt>\n              <dd>用户（[field:phone function=\"cutPhone(@me)\"/]）：[field:title function=\"cn_substr(@me,26)\"/]...</dd>\n            </dl>\n            ",8152,8589);
$z[14][4]=array();
$z[14][4]['sql']="select dede_ask.dateline,dede_ask.title,dede_member.phone from dede_ask LEFT JOIN dede_member on dede_ask.uid=dede_member.mid order by dede_ask.id desc LIMIT 0,5";
$z[15]=Array("arclist","<a href=\"[field:arcurl/]\" target=\"_blank\">[field:title/]</a> | ",8658,8770);
$z[15][4]=array();
$z[15][4]['typeid']="15";
$z[15][4]['row']="3";
$z[16]=Array("arclist","<a href=\"[field:arcurl/]\" target=\"_blank\">[field:title/]</a> | ",9797,9909);
$z[16][4]=array();
$z[16][4]['typeid']="10";
$z[16][4]['row']="3";
$z[17]=Array("arclist"," <a target=\"_blank\" title=\"[field:title/]\" href=\"[field:arcurl/]\" class=\"pic-item h184\"><img src=\"[field:picname/]\" alt=\"[field:title/]\" style=\"width: 280px;height: 184px;\"><span>[field:title/]</span></a> ",11033,11308);
$z[17][4]=array();
$z[17][4]['typeid']="27";
$z[17][4]['flag']="p";
$z[17][4]['limit']="0,2";
$z[17][4]['row']="2";
$z[18]=Array("arclist","\n              <li><i class=\"ico-law i-law184 mr10\"></i><a target=\"_blank\" href=\"[field:typeurl/]\">[[field:typename/]]</a><a target=\"_blank\" href=\"[field:arcurl/]\" title=\"[field:title/]\">[field:title/]</a></li>\n              ",11362,11648);
$z[18][4]=array();
$z[18][4]['typeid']="27";
$z[18][4]['limit']="2,8";
$z[18][4]['row']="8";
$z[19]=Array("arclist","\n            <div class=\"lore-r-item [field:global name=autoindex runphp='yes'](@me==1)? @me='':@me='mt20';[/field:global]\"><a target=\"_blank\" href=\"[field:arcurl/]\" class=\"fl mr10\"><img src=\"[field:picname/]\" alt=\"[field:title/]\"></a>\n              <p class=\"h20\"><a target=\"_blank\" href=\"[field:arcurl/]\" title=\"[field:title/]\" class=\"f14 s-c333\">[field:title/]</a></p>\n              <p class=\"h40 s-c999 mt10\">[field:info/]…</p>\n            </div>\n            ",11716,12278);
$z[19][4]=array();
$z[19][4]['row']="3";
$z[19][4]['flag']="p";
$z[19][4]['titlelen']="20";
$z[19][4]['infolen']="40";
$z[19][4]['limit']="0,3";
$z[19][4]['typeid']="71";
$z[20]=Array("arclist","\n          <li><span class=\"s-cbbb fr ml20\">[field:pubdate function=\"MyDate('Y-m-d',@me)\"/]</span><a target=\"_blank\" title=\"[field:title/]\" href=\"[field:arcurl/]\">[field:title/]</a></li>\n          ",12448,12706);
$z[20][4]=array();
$z[20][4]['row']="6";
$z[20][4]['typeid']="71";
$z[20][4]['limit']="3,6";
$z[21]=Array("feedback","\n            <li>\n                <div>\n                    <h3>最新评价</h3>\n                    <p class=\"wx\"><img src=\"/templets/lawyer/images/wuxing.png\" alt=\"\"></p>\n                </div>\n                <p><span>[field:dtime function=\"MyDate('Y-m-d H:i',@me)\"/] * 用户 [field:username function=\"cutPhone(@me)\"/]：</span></p>\n                <p>[field:msg/]</p>\n                <p><span>法易通</span>回复：[field:reply/]</p>\n            </li>\n            ",13297,13836);
$z[21][4]=array();
$z[21][4]['row']="4";
$z[21][4]['titlelen']="24";
$z[21][4]['infolen']="80";
$z[22]=Array("include","",14530,14567);
$z[22][4]=array();
$z[22][4]['filename']="footer.htm";

?>