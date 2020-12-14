echo "Hey, this .exrc file will be loaded into this project. Check first!"

" reload dwmblocks
autocmd BufWritePost ~/.local/suckless/dwmblocks/config.h !cd ~/.local/suckless/dwmblocks/; sudo make install && { killall -q dwmblocks;setsid dwmblocks & }

