1. 使用git前基本配置
   first  创建本地仓库(git init)
   second 将本地仓库和远程仓库链接(git remote add repositoryname url)
   third  将本地仓库分支和远程仓库分支确立对应关系(git push --set-upstream repositoryname branchname)这里在实际应用时是更新本地仓库到远程仓库同时设置了分支传输关系

2. git两大基本操作
   git将本地数据上传到远程仓库流程：  本地数据——>暂存区——>本地仓库——>远程仓库
   指令分别是 git add,  git commit,  git push

   git将远程仓库更新到本地仓库：(在更新之前确保工作区内没有暂存的更改)
   首次同步 git clone [remote-repository--url]
   拉取远程仓库 git pull remote-repository-name [branch-name]    ==git fetch + git merge
   先抓取，再决定是否合并更改到本地分支  git fetch remote-repository-name
                            查看更改  git log  
                                合并  git merge remote-repository-name/[branch-name]   将后面的内容合并到当前所在分支上
3. 一些查询git状态指令
   git -v           查询版本
   git remote -v    查询链接的远程仓库
   git status       查询当前所处分支以及数据状态
   git branch       查询本地仓库所有分支以及当前所处分支  
              -v    额外显示最近一次提交的注释（git commit时你备注的信息）以及各个分支哈希值，
              -a    额外显示远程仓库分支信息
              -vv   在-v基础上额外显示本地分支与远程分支数据传输关系
   