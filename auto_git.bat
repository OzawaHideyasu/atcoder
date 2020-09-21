cd C:\Users\oz\git\atcoder
git init
git config --global user.name OzawaHideyasu
git config --global user.enail vitamine18e@gmail.com
git clone https://github.com/OzawaHideyasu/atcorder C:\Users\oz\git\atcoder\atcoder
xcopy /d C:\Users\oz\C++\Atcorder\src C:\Users\oz\git\atcoder\atcoder
cd atcoder
git add --all
git commit -m "auto commit"
git push -f
exit
