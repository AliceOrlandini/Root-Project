# Installazione
Per utilizzare il codice presente in questa repository è necessario avere installato Docker sul proprio computer. Per installare Docker, è possibile seguire la guida presente [qui](https://docs.docker.com/get-docker/).

All'interno della cartella `docker-root` sono presenti due cartelle:
1. `root-jupyter`: contiene il Dockerfile per creare un'immagine Docker con Jupyter Notebook e ROOT installati.
2. `root-python`: contiene il Dockerfile per creare un'immagine Docker con Python e ROOT installati.

A seconda delle proprie esigenze, è possibile scegliere quale immagine Docker creare.

## Root-Jupyter
Da terminale, posizionarsi all'interno della cartella `root-jupyter` e lanciare il comando per creare l'immagine Docker:
```console
docker build -t root-jupyter .
```

A questo punto, è possibile lanciare il container con il comando:
```console
docker run --rm -p 8888:8888 root-jupyter
```
Il server Jupyter sarà disponibile all'indirizzo `http://localhost:8888`. Se dovesse richiedere un token, è possibile trovarlo nel terminale in cui è stato lanciato il container.
Probabilmente il notebook verrà marcato come non attendibile e quindi non sarà possibile salvarlo. Assicurarsi prima di chiudere il notebook di aver salvato in locale i file che si desidera conservare.

## Root-Python

### xQuartz
Nel caso si utilizzi MacOS, prima di creare l'immagine Docker è necessario installare xQuartz. Per farlo, è possibile seguire la guida presente [qui](https://www.xquartz.org/).

Una volta installato xQuartz, è necessario lanciarlo e abilitare l'accesso da reti esterne. Per farlo, andare in Impostazioni, nella sezione Sicurezza, e spuntare la casella "Consenti connessioni da reti di client". Infine, riavviare xQuartz.


Una volta aperto xQuartz, nel terminale è necessario eseguire il comando:
```console
ip=$(ifconfig en0 | grep inet | awk '$1=="inet" {print $2}')
```
e in seguito il comando:
```console
xhost + $ip
```
Lasciare il terminale di xQuartz aperto.

### Docker
Da terminale, posizionarsi all'interno della cartella `root-python` e lanciare il comando per creare l'immagine Docker:
```console
docker build -t root-python .
```

A questo punto, è possibile lanciare il container con il comando:
```console
docker run --rm -it -v $(pwd):/usr/src/app -v /tmp/.X11-unix:/tmp/.X11-unix -e DISPLAY=host.docker.internal:0 root-python
```
Il file che verrà eseguito sarà `main.py`.
