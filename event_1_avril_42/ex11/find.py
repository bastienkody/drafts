import requests
import json

name = input("Enter the name of a Pokemon: ")

req = requests.get('https://pokeapi.co/api/v2/pokemon/{}/'.format(name.lower()))

if req.status_code != 200:
	print("Erreur on request: code {}".format(req.status_code))
	exit(1)

#print(type(req.text))

data = json.loads(req.text)
abilities = data['abilities']

#print(abilities)

print("Name: {}\nAbilities:".format(name))
for i in abilities:
	print("-" + i.get('ability', 'No ability').get('name', 'No ability name? wtf'))
