import React, { useState } from 'react';
import { Button, Paper, Switch } from '@material-ui/core';
import { ThemeProvider, createMuiTheme } from '@material-ui/core/styles';
import TextField from '@material-ui/core/TextField';
import Sun from '@material-ui/icons/WbSunny';

import './App.css';

function App() {
  const [darkMode, setDarkMode] = useState(false);
  const DarkTheme = createMuiTheme({
    palette: {
      type: 'dark',
      primary: {
        main: '#79A0B7',
      },
      secondary: {
        main: '#08082D',
      },
      background: {
        paper: '#08082D',
        default: '#08082D',
      }      
    }
  });

  const LightTheme = createMuiTheme({
    palette: {
      type: 'light',
      primary: {
        main: '#08082D',
      },
      secondary: {
        main: '#79A0B7',
      },
      background: {
        paper: '#79A0B7',
        default: '#79A0B7',
      },
      action:{
        disabledBackground: '#08082D'
      }, 
    }
  });

  return (
    <div className="root">
    <ThemeProvider theme={darkMode ? DarkTheme : LightTheme}>
      <Paper style={ {height: "100vh"} }>
        <header>
          <Sun/>
          <Switch color="primary" checked={darkMode} onChange={() => setDarkMode(!darkMode)}/>
        </header>
        <div className="container">
          <form className="inputs">
            <TextField id="standard-secondary" label="Standard secondary" color="primary" />
          </form>
          <div className="buttons">
            <Button variant="contained" color="primary">Button 1</Button>
            <Button variant="contained" color="primary">Button 2</Button>
          </div>
        </div>
      </Paper>
    </ThemeProvider>
    </div>
  );
}

export default App;
