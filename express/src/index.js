const express = require('express');
const app = express();
const routes = require('./routes');

app.use(express.json());
app.use(routes);

// porta de acesso http://localhost:2323/
app.listen(2323);