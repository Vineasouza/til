import React from 'react';
import TextField from '@material-ui/core/TextField';
import { makeStyles } from '@material-ui/core/styles';
import './Test.css';

const useStyles = makeStyles((theme) => ({
    root: {
    '& .MuiTextField-root': {
        margin: theme.spacing(1),
        width: '454px',    
    },
    },
}));

export default function FormPropsTextFields() {
  const classes = useStyles();

  return (
    <form className={classes.root} noValidate autoComplete="off">
        <div>
            <TextField
            required
            id="outlined-required"
            label="Nome"
            defaultValue=" "
            helperText="Escreva seu nome completo"
            input
            InputProps={{
                className: classes.input
            }}
            />
        </div>
        <div>
            <TextField
            required
            id="outlined-required"
            label="Especialidade"
            defaultValue=" "
            variant="filled"
            helperText="Sua área de especialidade"
            />
        </div>
        <div>
            <TextField
            required
            id="outlined-required"
            label="Convênio"
            defaultValue=" "
            variant="outlined"
            helperText="Todos os convênios atendidos"
            />
        </div>
    </form>
  );
}
