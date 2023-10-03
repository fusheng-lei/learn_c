git init
git add .
<!-- 不知道初始化仓库有什么用 -->
git commit -m '初始化仓库' 
git remote add origin https://github.com/ziky0827/test.git
<!-- 推送 -->
git push -u origin master
<!-- 拉取远程仓库并于本地仓库合并 -->
git pull --rebase origin master