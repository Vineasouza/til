import React from 'react';
import { useForm } from 'react-hook-form';

export default function App() {
  const { register, handleSubmit, errors } = useForm();
  const onSubmit = data => console.log(data);
  console.log(errors);
  
  return (
    <form onSubmit={handleSubmit(onSubmit)}>
      <input type="text" placeholder="Nome" name="Nome" ref={register({required: true})} />
      <input type="text" placeholder="Especialidade" name="Especialidade" ref={register({required: true})} />
      <input type="text" placeholder="Convênio" name="Convênio" ref={register({required: true})} />
      <input type="text" placeholder="Telefone" name="Telefone" ref={register({required: true, pattern: /\(?[0]?\d{2}\)?[9]?\d{4}-?\d{4}/i})} />

      <input type="submit" />
    </form>
  );
}