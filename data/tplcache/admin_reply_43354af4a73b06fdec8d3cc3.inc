<?php
if(!isset($GLOBALS['_vars'])) $GLOBALS['_vars'] = array(); 
$fields = array();
?><form name="myform" method="post" action="/ask/admin.php?ct=adminAnswer&ac=modifyanswer&amp;id=<?php echo $id;?>">
    <input type="hidden" name="askaid" value="<?php echo $row['askid'];?>" />
    <div class="refer margintop">
        <div class="referbox">
            <dl>
                <dt>您要修改的答复如下:</dt>
                <dd>
                    <?php GetEditor("content",stripcslashes($row['content']),150); ?>
                </dd>
            </dl>
            <div class="psubmit">
                <input type="submit" value="确定" class="psub" tabindex="6">
            </div>
        </div>
    </div>
</form>