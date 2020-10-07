<?php

/**
 * @file
 * Default simple view template to display a rows in a grid.
 *
 * - $rows contains a nested array of rows. Each row contains an array of
 *   columns.
 *
 * @ingroup views_templates
 */
?>
<?php

$syslab_url = variable_get('syslab_url', 'https://client.oiranew.syslab.com/@@certificates/');
$syslab_url .= strip_tags($_GET['id']);

?>
<iframe target='_parent' class='iframe-certificate' src="<?php print ($syslab_url);  ?>"></iframe>
