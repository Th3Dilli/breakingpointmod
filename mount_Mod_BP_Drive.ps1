if(Test-Path -Path "P:")
{
    Write-Host "Unmounting P drive"
    pause
    subst /d P:
} else {
    Write-Host "Mounting P drive"
    pause
    subst P: E:\arma_dev\work_drives\mod_bp_work
}