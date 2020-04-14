const { Router} = require('express');

const routes = Router();

// GET method route
routes.get('/', function (req, res) {
    res.json("Hello Homepage");
});

// POST method route
routes.post('/', function (req, res) {
    res.redirect('http://localhost:2323/about')
});


// GET method route
routes.get('/about', function (req, res) {
    res.json("Hello About");
});
// POST method route
routes.post('/about', function (req, res) {
    res.json("Hello About");
});

module.exports = routes;