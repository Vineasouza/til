const Twit = require('twit');
require('dotenv').config();

const bot = new Twit({
    consumer_key: process.env.CONSUMER_KEY,
    consumer_secret: process.env.CONSUMER_SECRET,
    access_token: process.env.ACCESS_TOKEN,
    access_token_secret: process.env.ACCESS_TOKEN_SECRET,
    timeout_ms: 60 * 1000,
});

// tweet something
bot.post('statuses/update', { status: 'hello world!' }, function(err, data, response) {
    console.log(data)
});






//  search twitter for all tweets containing the word ' ' since ...
bot.get('search/tweets', { q: 'babu since:2020-03-30', count: 2 }, function(err, data, response) {
    console.log(data)
})


