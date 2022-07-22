# WAP to convert list into dictionary

non_hero_name = ['Tony', 'Steve', 'Bruce']
hero_name = ['Ironman', 'Captain America', 'Hulk']
avengers = dict(zip(non_hero_name, hero_name))
print(avengers)