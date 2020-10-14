import React, { useState } from 'react';
import Select from 'react-select';
import makeAnimated from 'react-select/animated';
import './ms.css';
import arrayHealthPlans from './utils/healthPlans';

function Multiselecttest() {

    const [selected, setSelected] = useState([]);
    const [checked, setChecked] = useState('');

    const healthPlan = [
        {label: "Amil", value: "Amil"},
        {label: "Assim Saúde", value: "Assim Saúde"},
        {label: "Bradesco Saúde", value: "Bradesco Saúde"},
        {label: "Golden Cross", value: "Golden Cross"},
        {label: "GreenLine", value: "GreenLine"},
        {label: "Hapvida", value: "Hapvida"},
        {label: "Medial Saúde", value: "Medial Saúde"},
        {label: "NotreDame Intermédica", value: "NotreDame Intermédica"},
        {label: "Particular", value: "Particular"},
        {label: "Prevent Senior", value: "Prevent Senior"},
        {label: "São Francisco Saúde", value: "São Francisco Saúde"},
        {label: "SulAmerica", value: "SulAmerica"},
        {label: "SUS", value: "SUS"},
        {label: "Unimed", value: "Unimed"},
    ]

    const animatedComponents = makeAnimated();

    function handleSelected(selectedItems){
        setSelected(selectedItems);
    }    

    var expanded = false;

    function showCheckboxes() {
        var checkboxes = document.getElementById("checkboxes");
        if (!expanded) {
            checkboxes.style.display = "block";
            expanded = true;
        } else {
            checkboxes.style.display = "none";
            expanded = false;
        }
    }

    function handleCheck(event) {
        let newChecked = event.target.value;
        setChecked(checked => [...checked, newChecked] )
        console.log(checked);
        
    }

    return (
        <div>
            <div className="ms">
                <h1>react-select</h1>
                <pre>{JSON.stringify(selected)}</pre>
                <Select
                    placeholder="Select Option"
                    closeMenuOnSelect={false}
                    components={animatedComponents}
                    isMulti
                    options={healthPlan}
                    value={selected}
                    onChange={handleSelected} 
                />
            </div>
            <div>
                <form>
                    <div class="multiselect">
                        <div class="selectBox" onClick={showCheckboxes}>
                            <select>
                                <option>Select an option</option>
                            </select>
                            <div class="overSelect"></div>
                        </div>
                        <div id="checkboxes">
                            {
                                arrayHealthPlans.map((healthPlan) => {
                                    return (
                                        <label><input type="checkbox" key={healthPlan} value={healthPlan} onChange={handleCheck}/>{healthPlan}</label>
                                    )
                                })
                            }
                        </div>
                    </div>
                </form>
            </div>

        </div>
    );
}

export default Multiselecttest;