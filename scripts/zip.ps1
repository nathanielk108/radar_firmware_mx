$DestinationPath = "radar_firmware.zip"
$SourcePath = "."
$ExcludeList = @("build/*")

$ItemsToZip = Get-ChildItem -Path $SourcePath -Recurse -Exclude $ExcludeList

Compress-Archive -Path $ItemsToZip -DestinationPath $DestinationPath -CompressionLevel Optimal
