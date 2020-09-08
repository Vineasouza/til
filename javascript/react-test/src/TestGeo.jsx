import Geocode from "react-geocode";
import React from  'react'

Geocode.setApiKey("");
Geocode.enableDebug();

Geocode.fromLatLng("48.8583701", "2.2922926").then(
  response => {
    const address = response.results[0].formatted_address;
    console.log(address);
  },
  error => {
    console.error(error);
  }
);

function Geolocator() {
  return (
    <div className="App">
      <h1>Hello CodeSandbox</h1>
      <h2>Start editing to see some magic happen!</h2>
    </div>
  );
}

export default Geolocator;
