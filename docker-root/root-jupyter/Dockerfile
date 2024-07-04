# Usa un'immagine di base con ROOT già installato
FROM rootproject/root:latest

# Installa Python3 e pip
RUN apt-get update && \
    apt-get install -y \
        python3 \
        python3-pip \
        python3-notebook

# Crea un utente non-root per eseguire Jupyter (opzionale ma consigliato per motivi di sicurezza)
RUN useradd -ms /bin/bash jupyteruser
USER jupyteruser
WORKDIR /home/jupyteruser

# Copia il notebook di esempio (può essere sostituito con il proprio codice/notebook)
COPY example-notebook.ipynb /home/jupyteruser/notebooks/

# Espone la porta 8888 per Jupyter
EXPOSE 8888

# Comando di avvio di Jupyter
CMD ["jupyter", "notebook", "--ip=0.0.0.0", "--port=8888", "--no-browser"]
