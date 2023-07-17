Download Image
```shell
sudo docker pull IMAGE_NAME
```
  
Run Docker
```shell
docker run -p local_port:port IMAGE_NAME
```

Delete Image
```Shell
docker rmi IMAGE_NAME/TAG
```

Delete All Image
```Shell
docker rmi $(docker images -aq)
```

Check  Image List
```shell
sudo docker image ls
```

Check Container List
```Shell
docker ps
```

Execute Docker 
```Shell
docker exec -it CONTAINER ID bash
```

Put Data into Docker env(can't save file)
```Shell
docker cp FILE_NAME CONTAINER ID:DOCKERENV_PATH
```

Docker Volume
```Shell
docker run -v LOCAL_PATH -p local_port:port DOCKERENV_PATH
```

Build Image
```shell
docker build -t TAG_NAME .
```

Stop Container
```Shell
docker stop $(docker ps -aq)
```

Delete Container
```Shell
docker rm CONTAINER ID/NAME
```

Delete All Container
```Shell
docker rm $(docker ps -aq)
```

Download python lib
```Shell
FROM IMGE_NMAE

# 複製並設定工作目錄
WORKDIR /work

# 複製 requirements.txt 到容器內
COPY requirements.txt .

# 安裝 Python 套件
RUN pip install --no-cache-dir -r requirements.txt

# 複製整個目錄到容器內
COPY . .

# 暴露 Jupyter Notebook 的預設埠號
EXPOSE 8888

# 啟動 Jupyter Notebook
CMD ["jupyter", "notebook", "--ip=0.0.0.0", "--port=8888", "--no-browser", "--allow-root"]
-----------------------------------------------
docker build -t TAG_NAME .
docker run -p 8888:8888 TAG_NAME
```
