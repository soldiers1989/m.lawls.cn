<?php
if(!isset($GLOBALS['_vars'])) $GLOBALS['_vars'] = array(); 
$fields = array();
?><!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
<meta http-equiv="Content-Type" content="text/html; charset=utf-8">
<title>问题管理</title>
<link href="img/base.css" rel="stylesheet" type="text/css" />
<script>
function selAll()
{
	for(i=0;i<document.form2.askid.length;i++)
	{
		if(!document.form2.askid[i].checked)
		{
			document.form2.askid[i].checked=true;
		}
	}
}
function noSelAll()
{
	for(i=0;i<document.form2.askid.length;i++)
	{
		if(document.form2.askid[i].checked)
		{
			document.form2.askid[i].checked=false;
		}
	}
}
//获得选中文件的文件名
function getCheckboxItem()
{
	var allSel="";
	if(document.form2.askid.value) return document.form2.askid.value;
	for(i=0;i<document.form2.askid.length;i++)
	{
		if(document.form2.askid[i].checked)
		{
			if(allSel=="")
				allSel=document.form2.askid[i].value;
			else
				allSel=allSel+"`"+document.form2.askid[i].value;
		}
	}
	return allSel;
}

//获得选中其中一个的id
function getOneItem()
{
	var allSel="";
	if(document.form2.askid.value) return document.form2.askid.value;
	for(i=0;i<document.form2.askid.length;i++)
	{
		if(document.form2.askid[i].checked)
		{
				allSel = document.form2.askid[i].value;
				break;
		}
	}
	return allSel;
}
function digestask(aid){
	var qstr=getCheckboxItem();
	if(aid==0) aid = getOneItem();
	location="ask_admin.php?aid="+aid+"&action=digest&qstr="+qstr;
}
function checkask(aid){
	var qstr=getCheckboxItem();
	if(aid==0) aid = getOneItem();
	location="ask_admin.php?aid="+aid+"&action=check&qstr="+qstr;
}
function deleteask(aid){
	var qstr=getCheckboxItem();
	if(aid==0) aid = getOneItem();
	location="ask_admin.php?qstr="+qstr+"&aid="+aid+"&action=delete";
}
</script>
</head>
<body>
	<div class="bodytitle">
	<div class="bodytitleleft"></div>
	<div class="bodytitletxt"><a href='../ask' target='_blank'><b>问答模块</b></a> -- 用户提问管理</div>
</div>
    <tr>
<td align='center' valign='top'><table width="100%" border="0" cellpadding="0" cellspacing="0">
<tr bgcolor="#FFFFFF"><td height="4"></td></tr>
</table>
<table width="98%" border="0" cellpadding="1" cellspacing="1" align="center" class="tbtitle" style="	background:#E2F5BC;">
<tr>
<td height="24" colspan="10" align="left" background="img/tbg.gif">
&nbsp;§<b>问题列表 &nbsp; <a href="ask_admin.php">全部问题</a> | <a href="ask_admin.php?status=-1">未审核的问题</a></b>
</td>
</tr>
<form name="form2" action="ask_admin.php>
<tr height="22" align="center">
<td  width="6%" bgcolor="#EDF9D5">id</td>
<td width="4%" bgcolor="#EDF9D5">选择</td>
<td width="28%" bgcolor="#EDF9D5">问题</td>
<td width="6%" bgcolor="#EDF9D5">推荐</td>
<td width="10%" bgcolor="#EDF9D5">提问时间</td>
<td width="10%" bgcolor="#EDF9D5">所属大分类</td>
<td width="10%" bgcolor="#EDF9D5">所属小分类</td>
<td width="8%" bgcolor="#EDF9D5">回答数</td>
<td width="6%" bgcolor="#EDF9D5">问题状态</td>
</tr>
<?php
$atts = array();
$atts['tagname'] = 'datalist';
$blockValue = $this->refObj->GetArcList($atts,$this->refObj,$fields); 
if(is_array($blockValue)){
foreach( $blockValue as $key=>$fields )
{

	if($fields['status'] == 0){
		$fields['status'] = '待解决';
	}else if($fields['status'] == 1){
		$fields['status'] = '已解决';
	}else if($fields['status'] == 2 ){
		$fields['status'] = '已关闭';
	}else if($fields['status'] == 3){
		$fields['status'] = '已过期';
	}else if($fields['status']<0){
		$fields['status'] = '未审核';
	}
	$fields['dateline'] = gmdate('Y-m-d' , $fields['dateline'] + 3600*8);
?>
<tr align='center' bgcolor="#FFFFFF"  onMouseMove="javascript:this.bgColor='#FCFDEE';" onMouseOut="javascript:this.bgColor='#FFFFFF';" height="22" >
<td><?php echo $fields['id']; ?></td>
<td><input name="askid" type="checkbox" id="id" value="<?php echo $fields['id']; ?>" class='np' /></td>
<td align='left'><a href="../ask/question.php?id=<?php echo $fields['id']; ?>" target="_blank"><?php echo $fields['title']; ?></a></td>
<td><?php echo $fields['digest']; ?></td>
<td><?php echo $fields['dateline']; ?></td>
<td><a href="ask_admin.php?tid=<?php echo $fields['tid']; ?>"><?php echo $fields['tidname']; ?></a> </td>
<td><a href="ask_admin.php?tid2=<?php echo $fields['tid2']; ?>"><?php echo $fields['tid2name']; ?></a></td>
<td><?php echo $fields['replies']; ?></td>
<td><?php echo $fields['status']; ?></td>
</tr>
<?php
}
}?>
<tr bgcolor="#F8FBFB">
<td height="24" colspan="10" align="left">
&nbsp;
<a href="javascript:selAll()" class="coolbg">全选</a>
<a href="javascript:noSelAll()" class="coolbg">取消</a>
<a href="javascript:digestask(0)" class="coolbg">推荐</a>
<a href="javascript:checkask(0)" class="coolbg">审核</a>
<a href="javascript:deleteask(0)" class="coolbg">删除</a></td>
</tr>
</form>
<tr align="right" bgcolor="#E5F9FF">
<td height="20" colspan="10" align="center" bgcolor="#EDF9D5">
<?php
$atts = array();
$atts['tagname'] = 'pagelist';
 echo $this->refObj->GetPageList($atts,$this->refObj,$fields); 
?>

</td>
</tr>
</table>
</td>
</tr>
</body>
</html>