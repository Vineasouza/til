import React from 'react';
import NumberFormat from 'react-number-format';
import './NumberFormat.css';

function App_numberformat() {
  
  return (
    <div className="forms-block">
        <NumberFormat format="(##) #####-####" allowEmptyFormatting mask="_"/>
    </div>
  );
}

export default App_numberformat;
