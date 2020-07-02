# https://github.com/OtavioAugusto/sentiment_analysis_basic/blob/master/Sentiment_Analysis_basic/Sentiment_Analysis.ipynb
# https://medium.com/@viniljf/criando-um-analisador-de-sentimentos-para-tweets-a53bae0c5147
# https://medium.com/better-programming/twitter-sentiment-analysis-15d8892c0082

import tweepy
from textblob import TextBlob

consumer_key = 'jxIp8GAgvEiaQTebyZXv7N9Pk'
consumer_secret = 'Xuq6vl8MgyCLZjDTvslvDDjxYKmMJE3tsX9PVLqGzc7NIfan4f'

access_token = '1247727871025651712-XNT4V9XpsQU1JKcaITG60ySwoxQz3s'
access_token_secret = 'XG48eULg2XKlO8C6Ywl3g2qZs4PrYkxNJXSXtvLf9E7C7'

auth = tweepy.OAuthHandler(consumer_key,consumer_secret)
auth.set_access_token(access_token,access_token_secret)

api = tweepy.API(auth)

#print(api.me())
tweets = api.search('machista')

for tweet in tweets:
    frase = TextBlob(tweet.text)

    if frase.detect_language() != 'en':
        traducao = TextBlob(str(frase.translate(to='en')))
        print('Tweet: {0} - Sentimento: {1}'.format(tweet.text, traducao.sentiment))
    else:
        print('Tweet: {0} - Sentimento: {1}'.format(tweet.text, frase.sentiment))