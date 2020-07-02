from nltk.corpus import wordnet as wn
print(wn.lemmas('odeio', lang='por'))
print(wn.synset('hate.n.01').lemma_names('por'))

from nltk.corpus import sentiwordnet as swn
senti = swn.senti_synset('hate.n.01')
print(senti.pos_score())
print(senti.neg_score())
print(senti.obj_score())

from googletrans import Translator
translator = Translator()
word = translator.translate('i hate you', dest='pt')
print(word)
