import React, {useState } from 'react';
import './NumberFormat.css';
import MultiSelect from "react-multi-select-component";
// import arrayHealthPlans from './utils/healthPlans';



function Multiselecttest() {

    // const options = [
    //     { label: "Grapes 🍇", value: "grapes" },
    //     { label: "Mango 🥭", value: "mango" },
    //     { label: "Strawberry 🍓", value: "strawberry" }
    // ];

    const [selected, setSelected] = useState([]);

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


    return (
        <div>
            <div>
                <h1>Select Fruits</h1>
                <pre>{JSON.stringify(selected)}</pre>
                <MultiSelect
                    options={healthPlan}
                    value={selected}
                    onChange={setSelected}
                    labelledBy={"Select"}
                />
            </div>
        </div>
    );
}

export default Multiselecttest;