# gitlab repository folder
$sourceClient = "E:\arma_dev\breakingpointmod\ModSource"
$sourceServer = "E:\arma_dev\breakingpointmod\"
# p drive can be P:\ or the actual folder where it is comming from like i use
$destination = "E:\arma_dev\work_drives\mod_bp_work"
# output for the pbo's in the P:\ drive
$outputFolderClient = "P:\@BreakingPoint_Mod\client"
$outputFolderServer = "P:\@BreakingPoint_Mod\server"
# folder where the mod should be copied to for the game to use
$clientMod = "E:\Games\Steam\steamapps\common\Arma 3\@BreakingPoint_Mod"
$ServerMod = "E:\Servers\Arma3\Mod_BP\updatefiles\@BreakingPoint_Mod"
$serverfiles = "E:\Servers\Arma3\Mod_BP\updatefiles\mod_bp_server\addons"

# add folders as we make more different pbo's in the source
$folderArrayClient = @(#     source/destination
                    ("a6m5wreck"),
                    ("breakingpoint"),
                    ("breakingpoint_anim"),
                    ("breakingpoint_classes"),
                    ("breakingpoint_client"),
                    ("breakingpoint_code"),
                    ("breakingpoint_functions"),
                    ("breakingpoint_ghillie"),
                    ("breakingpoint_infected"),
                    ("breakingpoint_jsrs"),
                    ("breakingpoint_lib"),
                    ("breakingpoint_malden"),
                    ("breakingpoint_map"),
                    ("breakingpoint_map_newhaven"),
                    ("breakingpoint_server"),
                    ("breakingpoint_sfx"),
                    ("breakingpoint_structures3"),
                    ("breakingpoint_thirsk"),
                    ("breakingpoint_ui"),
                    ("breakingpoint_vehicles"),
                    ("breakingpoint_weapons"),
                    ("breakingpoint_weapons_cfg"),
                    ("newhaven")
                )

$folderArrayServer = @(#     source/destination
                ("ModSource\breakingpoint_server"),
                ("breakingpoint_server_config")
            )

# you should not have to touch anything below

if( !(Test-Path -Path "P:"))
{
    Write-Output "No P: drive found"
    pause
    exit
}

while($true){
    $i = 0;
    foreach($mod in $folderArrayClient)
    {
        Write-Host "c$i $mod";
        $i++;
    }
    $i = 0;
    foreach($mod in $folderArrayServer)
    {
        Write-Host "s$i $($mod)";
        $i++;
    }
    Write-Host "ca - copy all to p"
    $userIn = Read-Host "Input mod index"
    if($userIn[1] -in ("0","1","2","3","4","5","6","7","8","9"))
    {
        $index = [convert]::ToInt32($userIn.Substring(1), 10)
        if($userIn[0] -eq "c")
        {
            Write-Output "------------------------START---------------------------"
            $folder = $folderArrayClient[$index]
            Write-Host "Client $folder"
            Write-Output "Working on --- $destination\$folder --- now"
            Write-Output "Copy --- $sourceClient\$folder --- to --- $destination\$folder"
            robocopy "$sourceClient\$folder" "$destination\$folder" /MIR
            Write-Output "pboProject --- $destination\$folder"
            Start-Process pboProject.exe -ArgumentList "P:\$folder +Mod=$outputFolderClient -Engine=arma3 -P" -Wait
            if((Test-Path -Path "$outputFolderClient\addons\$folder.pbo"))
            {
                Write-Host "DONE" -ForegroundColor Green
                robocopy "$outputFolderClient" $clientMod /s
                robocopy "$outputFolderClient" $serverMod /s
                # robocopy "$outputFolderClient" $clientModDev /s
            } else {
                Write-Host "Failed!!" -ForegroundColor Red
                pause
            }
            Write-Output "------------------------END---------------------------"
        } elseif ($userIn[0] -eq "s") {
            Write-Output "------------------------START---------------------------"
            $folder = $folderArrayServer[$index]
            Write-Host "Server $folder"
            Write-Output "Working on --- $sourceServer\$folder --- now"
            Write-Output "Copy --- $sourceServer\$folder --- to --- $destination\$folder"
            robocopy "$sourceServer\$folder" "$destination\$folder" /MIR
            Write-Output "pboProject --- $destination\$folder"
            Start-Process pboProject.exe -ArgumentList "P:\$folder +Mod=$outputFolderServer -Engine=arma3 -P" -Wait

            $pboname = $folder.replace("ModSource\","")
            if((Test-Path -Path "$outputFolderServer\addons\$pboname.pbo"))
            {
                robocopy "$outputFolderServer\addons\" $serverfiles /s
                Write-Host "DONE" -ForegroundColor Green
            } else {
                Write-Host "Failed!!" -ForegroundColor Red
                pause
            }
            Write-Output "------------------------END---------------------------"
        } else {
            Write-Host "Error could not read input!"
            pause
        }
        if((Test-Path -Path "$outputFolderClient\Keys"))
        {
            Write-Output "Removing .bsign key from mod folder...." 
            Remove-Item "$outputFolderClient\Keys" -Recurse
        }
    } else {
        if ($userIn[1] -eq "a") {
            Write-Host "Copy all to p"
            foreach ($folder in $folderArrayClient) {
                robocopy "$sourceClient\$folder" "$destination\$folder" /MIR
            }
            foreach ($folder in $folderArrayServer) {
                robocopy "$sourceServer\$folder" "$destination\$folder" /MIR
            }
        } else{
            Write-Host "Please type a number as second char"
            pause
        }
    }
    cls
}
