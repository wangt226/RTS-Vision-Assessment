# Task3：Git 基础学习

## 1. Git 基本流程

Git 的基本工作流程可以理解为：

工作区 → 暂存区 → 本地仓库 → 远程仓库

常用命令：

```bash
git status
git add .
git commit -m "commit message"
git push
```

其中：

- `git status`：查看当前仓库状态
- `git add`：将修改加入暂存区
- `git commit`：将暂存区内容提交到本地仓库
- `git push`：将本地提交推送到远程仓库

## 2. Git Diff

```bash
git diff
```

用于比较工作区和暂存区之间的差异。

```bash
git diff --cached
```

用于比较暂存区和上一次提交之间的差异。

## 3. Git 分支

使用以下命令创建并切换到新分支：

```bash
git checkout -b experiment
```

使用：

```bash
git branch
```

可以查看当前分支。

## 4. .gitignore

`.gitignore` 用于指定不需要被 Git 跟踪的文件或目录。

本仓库中例如：

```text
GitTest/
Task4/build/
```

其中 `Task4/build/` 是 CMake 生成的构建目录，不需要提交到仓库。

## 5. 远程仓库

本次考核使用 GitHub 作为远程仓库，并通过 SSH 完成身份认证和代码推送。

远程仓库通常命名为 `origin`，本仓库使用 `main` 作为主分支。

## 总结

通过本任务学习了 Git 的基本版本控制流程，包括文件状态查看、暂存、提交、分支、差异比较、忽略文件以及向 GitHub 远程仓库推送代码。
