Write-Host "Breaking Point Dev Server Manager" -ForegroundColor Green

$server_port = 2302
$server_profile = "BP_Dev"
$password =""

$server_config_file="$server_profile\config.cfg"

$server_basic_file="$server_profile\basic.cfg"

$serverFolder="E:\Servers\Arma3\Mod_BP"

$armaExe = "$serverFolder\arma3server_x64.exe"

$server_update_files="E:\Servers\Arma3\Mod_BP\updatefiles"

$client_Mods = "@BreakingPoint_BOP;"

$server_Mods = $client_Mods + "@BP_Server"

$server_PID

while(1)
{
    Write-Host "---------------------------" -ForegroundColor Cyan
    Write-Host "Checking for client addon updates..." -ForegroundColor Cyan
    xcopy  /d /y /s "$server_update_files\@BreakingPoint_Mod" "$serverFolder\@BreakingPoint_BOP"
    Write-Host "-------------------------------------" -ForegroundColor Cyan

    Write-Host "---------------------------" -ForegroundColor Cyan
    Write-Host "Checking for server addon updates..." -ForegroundColor Cyan
    xcopy  /d /y /s "$server_update_files\mod_bp_server" "$serverFolder\@BP_Server"
    Write-Host "-------------------------------------" -ForegroundColor Cyan

    Write-Host "---------------------------" -ForegroundColor Cyan
    Write-Host "Checking for config updates..." -ForegroundColor Cyan
    xcopy  /d /y /s "$server_update_files\config" "$serverFolder\$server_profile"
    Write-Host "-------------------------------------" -ForegroundColor Cyan

    $server_PID = (Start-Process $armaExe -ArgumentList "-port=$server_port -config=$server_config_file -cfg=$server_basic_file -profiles=$server_profile -name=$server_profile -mod=$client_Mods -servermod=$server_Mods -autoinit -loadMissionToMemory -filePatching -intignorecert" -PassThru).id

    Wait-Process -id $server_PID

    Write-Host "Server is restarting in 5 sec"
    
    timeout /t 5
	cls
}
