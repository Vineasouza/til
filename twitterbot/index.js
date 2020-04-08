const Twit = require('twit');
require('dotenv').config();

const bot = new Twit({
    consumer_key: process.env.CONSUMER_KEY,
    consumer_secret: process.env.CONSUMER_SECRET,
    access_token: process.env.ACCESS_TOKEN,
    access_token_secret: process.env.ACCESS_TOKEN_SECRET,
    timeout_ms: 60 * 1000,
});

var cont = 0;

function botTweet() {
    //  tweet something  //
    bot.post('statuses/update', { status: 'O vineasouza é lindo #' + cont++ }, function(err, data, response) {
        if(err) console.log(err); 
        else console.log('Tweetado');
        // console.log(data);
        // console.log(response);
    });
}

setInterval(botTweet, 10*1000);



