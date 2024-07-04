# root image
FROM rootproject/root:latest

# install python3 and pip3
RUN apt-get update && apt-get install -y python3 python3-pip nodejs npm

# install nodemon
RUN npm install -g nodemon

# create a working directory
WORKDIR /usr/src/app

# copy the content of the local src directory to the working directory
COPY . .

# if needed, install the python dependencies
# RUN pip3 install -r requirements.txt

# run the command
CMD ["nodemon", "--exec", "python3", "main.py"]