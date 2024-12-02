![Screenshot 2024-04-26 000401](https://github.com/user-attachments/assets/5310e007-8c1e-4aca-873e-5c1f33b87082)
# An-AI-Chatbot-in-Python-and-Flask
An AI Chatbot using Python and Flask REST API 

## Requirements (libraries)
1. TensorFlow
1. Flask

python --version == 3.6
# macOS/Linux
# You may need to run sudo apt-get install python3-venv first
python3 -m venv .venv

# Windows
# You can also use py -3 -m venv .venv
python -m venv .venv
```
When you create a new virtual environment, a prompt will be displayed to allow you to select it for the workspace.

3. Activate the virtual environment
```
#linux
source ./venv/bin/activate  # sh, bash, or zsh

#windows
.\venv\Scripts\activate
```
4. Run ```pip install --upgrade tensorflow``` to install ```Tensorflow```
5. Run ```pip install -U nltk``` to install ```nltk```
6. Run ```pip install -U Flask``` to install ```flask```
7. To expose your bot via Ngrok, run ```pip install flask-ngrok``` to install ```flask-ngrok``` Then you'll need to configure your ngrok credentials(login: email + password) Then uncomment this line ```run_with_ngrok(app) ``` and comment the last two lines ```if __name__ == "__main__": app.run() ``` Notice that ngrok is not used by default.
8. To access your bot on localhost, go to `` ``` If you're on Ngrok your url will be ```some-text.ngrok.io```

### Step-By-Step Explanation and Installation Guide

### Execution
To run this Bot, first run the ```train.py``` file to train the model. This will generate a file named ```chatbot_model.h5```<br>
This is the model which will be used by the Flask REST API to easily give feedback without the need to retrain.<br>
After running ```train.py```, next run the ```app.py``` to initialize and start the bot.<br>
To add more terms and vocabulary to the bot, modify the ```intents.json``` file and add your personalized words and retr![Screenshot 2024-04-26 000401](https://github.com/user-attachments/assets/177401c7-9b81-4fc0-9303-0d4e9a8110df)
ain the model again.![Screenshot 2024-04-26 000533](https://github.com/user-attachments/assets/b4f6070d-742b-4542-b241-a0ac945b5034)



