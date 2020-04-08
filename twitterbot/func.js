//  search twitter for all tweets containing the word ' ' since ...  //
bot.get('search/tweets', { q: 'babu since:2020-03-30', count: 2 }, function(err, data, response) {
    console.log(data)
})

//  get the list of user id's that follow @...  //
bot.get('followers/ids', { screen_name: 'vineasouza' },  function (err, data, response) {
    console.log(data)
  })


//  tweet something  //
bot.post('statuses/update', { status: 'hello world!' }, function(err, data, response) {
    // console.log(err);
    console.log(data);
    // console.log(response);
});
