<!-- git常用命令 -->
<!-- 配置基本用户信息 -->
git config --global user.name <uername>
git config --global user.email <emailaddress>

<!-- 初始化仓库 -->
git init
<!-- 向仓库版本控制系统中添加文件，之后对此文件的修改，将被 Git 记录 -->
git add <filename>
<!-- git add 允许一次添加多个文件 -->
git add <filename1>  <filename2> ...
<!-- git add 可以添加指定目录，目录的添加会自动添加子目录 -->
git add <directory_name>
<!-- 允许添加当前目录下的所有文件 -->
git add .
<!-- 用于添加所有修改、已删除、新增的文件到暂存区中 -->
git add -A/-all

<!-- 从仓库文件管理系统中移除文件，文件将变为未跟踪状态，之后对此文件的任何修改，Git 将一致忽略,此种方式，不仅将文件状态置为未跟踪，也会从工作目录删除此文件 -->
git rm <filename>
<!-- 将文件状态置为未跟踪，本地保留此文件 -->
git rm --cached <filename>
<!-- 如果文件已经添加到暂存区，则必须使用强制删除 -f -->
git rm -f <filename>
<!-- 可以对目录进行递归删除 -r , 则会删除整个目录下的所有子目录和文件 -->
git rm -r <directory_name>
<!-- 文件重命名 -->
git mv <source> <destination>
<!--相当于三个命令   mv readme.md readme.txt
                    git rm readme.md
                    git add readme.txt
 -->

<!-- 提交到本地仓库 -->
git commit -m "提交说明"
<!-- 修改（Amend）上一个提交 -->
git commit --amend -m "提交说明" 
<!-- 添加远程版本库命令格式 -->
git remote add <shortname> <url>
git remote add origin https://github.com/ziky0827/test.git
<!-- 拉取最新远程代码 
git pull 其实就是 git fetch 和 git merge FETCH_HEAD 的简写-->
git pull
<!-- 拉取远程仓库并于本地仓库合并 -->
git pull --rebase origin master/main
<!-- // 克隆远程代码下来本地 -->
git clone <远程仓库的 Url>
<!-- 修改的代码细节展示 -->
git diff 
<!-- 显示当前分支与分支 “new-runoob” 之间差异 -->
git diff new-runoob
<!-- 获取远程仓库“ origin” 的所有修改历史记录命令 -->
git fetch origin

<!-- 提交本地数据到 对应的远程分支 -->
git push
<!-- 推送 -->
git push -u origin master/main

<!-- 当前分支状态（改动总览） -->
git status
<!-- 删除分支,不能为当前分支 -->
git branch -d <branchname>
<!-- 删除远程分支 -->
git push main --delete <branchname>
git push origin --delete <branchname>
<!-- 修剪远程分支，github上删除了但vscode还有 -->
git remote prune origin <filename>(可不加)
<!-- 合并分支 -->
git merge xxxx
<!-- // 查看本地对应远程的分支对应关系 -->
git branch -vv 
<!-- 查看本地和远程所有分支 -->
git branch -a 
<!-- 查看所有分支 -->
git branch 
<!-- 创建新分支 -->
git branch <branchname> 
<!-- 切换分支 -->
git checkout <branchname> 
<!-- 重命名分支 -->
git branch -m <oldname><newname> 
<!-- 创建新分支并立即切换到该分支下，从而在该分支中操作 -->
git checkout -b <branchname>
<!-- 将本地分支与远程xxx分支进行关联形成关联关系 -->
git branch --set-upstream-to=origin/xxx 

<!-- 这个是已经有的分支进行checkout -->
git checkout xxxx
<!-- 修改的部分代码清理掉不修改了 -->
git checkout .


<!-- 文件退出暂存区，但是修改保留 -->
git reset --mixed
<!-- 撤销所有的已经 add 的文件： -->
git reset HEAD .
<!-- 撤销某个文件或文件夹： -->
git reset HEAD  filename
<!-- 撤销commit 之后返回成暂存区add状态 -->
git reset --soft HEAD^
<!-- 撤销commit 直接新增代码全部撤销并没有add暂存直接消失 -->
git reset --hard HEAD^
<!-- 解释：HEAD^ 表示上一个版本，即上一次的commit，几个^代表几次提交，如果回滚两次就是HEAD^^ -->
--soft
不删除工作空间的改动代码 ，撤销commit，不撤销add
--hard

<!-- (贮藏已经修改的代码，如果写错分支了，没有提交 可以使用，之后切换到你需要的分支进行提取出来) -->
git stash save "save tag" 
<!-- 查看贮藏的修改 -->
git stash list
<!-- 释放贮藏内容到当前分支 -->
git stash pop 
<!-- 多个贮藏 可以选择你需要拉取哪个贮藏 -->
git stash pop stash@{$num}
<!-- 查看这个项目的git 配置 -->
git config --list 
<!-- 查看最近的提交信息 -->
git log 
<!-- 回退到某一个历史节点 -->
git reset --hard xxxxx
<!-- 如果改动回到较远的一个节点 git push 可能会失败报错，因此我们需要强推到一个版本的话需要： -->
git push -f -u // -u 这里是为了持续推送到指定分支 这里意义不大
git rebase xxx
git rebase --continue