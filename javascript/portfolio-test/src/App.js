import logo from './logo.svg';
import './App.css';
import Fade from 'react-reveal/Fade';

function App() {
  return (
    <div className="App">
      <header className="App-header">
        <img src={logo} className="App-logo" alt="logo" />
        <Fade right>
          <p>
            Edit <code>src/App.js</code> and save to reload.
          </p>
        </Fade>
        <Fade left>
          <a
            className="App-link"
            href="https://reactjs.org"
            target="_blank"
            rel="noopener noreferrer"
          >
            Learn React
          </a>
        </Fade>
      </header>
    </div>
  );
}

export default App;
