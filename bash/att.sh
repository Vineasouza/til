#!/bin/bash

# hide cursor
tput civis -- invisible

Green='\033[0;32m' 
NC='\033[0m'

clear

echo
echo -ne "Limpando o cache das Atualizacoes......................................................[    ]";
echo
echo -ne "Atualizar Base dados das Atualizacoes..................................................[    ]";
echo
echo -ne "Corrigir Problemas com dependencias....................................................[    ]";
echo
echo -ne "Reparar Problemas......................................................................[    ]";
echo
echo -ne "Baixar e Instalar as Atualizacoes......................................................[    ]";
echo
echo -ne "Baixar e Instalar Atualizacoes das distribuicoes.......................................[    ]";
echo
echo -ne "Verificar pacotes antigos ou duplicados................................................[    ]";
echo
echo -ne "Procurar pacotes desnecessarios........................................................[    ]";
echo
############################# Baixando e Instalando Atualiza��es ####################################################
sudo apt-get clean -y
clear
######################################################################################################################
echo
echo -ne "Cache das Atualizacoes Limpo...........................................................[ ${Green}OK${NC} ]";
echo
echo -ne "Atualizar Base dados das Atualizacoes..................................................[    ]";
echo
echo -ne "Corrigir Problemas com dependencias....................................................[    ]";
echo
echo -ne "Reparar Problemas......................................................................[    ]";
echo
echo -ne "Baixar e Instalar as Atualizacoes......................................................[    ]";
echo
echo -ne "Baixar e Instalar Atualizacoes das distribuicoes.......................................[    ]";
echo
echo -ne "Verificar pacotes antigos ou duplicados................................................[    ]";
echo
echo -ne "Procurar pacotes desnecessarios........................................................[    ]";
echo
######################################################################################################################
sleep 5
clear
######################################################################################################################
echo
echo -ne "Cache das Atualizacoes Limpo...........................................................[ ${Green}OK${NC} ]";
echo
echo -ne "Atualizar Base dados das Atualizacoes..................................................[    ]";
echo
echo -ne "Corrigir Problemas com dependencias....................................................[    ]";
echo
echo -ne "Reparar Problemas......................................................................[    ]";
echo
echo -ne "Baixar e Instalar as Atualizacoes......................................................[    ]";
echo
echo -ne "Baixar e Instalar Atualizacoes das distribuicoes.......................................[    ]";
echo
echo -ne "Verificar pacotes antigos ou duplicados................................................[    ]";
echo
echo -ne "Procurar pacotes desnecessarios........................................................[    ]";
echo
####################################### Atualizar Base dados #######################################################
sudo apt-get update
clear
######################################################################################################################
echo -ne "Cache das Atualizacoes Limpo...........................................................[ ${Green}OK${NC} ]";
echo
echo -ne "Base de dados Atualizadas..............................................................[ ${Green}OK${NC} ]";
echo
echo -ne "Corrigir Problemas com dependencias....................................................[    ]";
echo
echo -ne "Reparar Problemas......................................................................[    ]";
echo
echo -ne "Baixar e Instalar as Atualizacoes......................................................[    ]";
echo
echo -ne "Baixar e Instalar Atualizacoes das distribuicoes.......................................[    ]";
echo
echo -ne "Verificar pacotes antigos ou duplicados................................................[    ]";
echo
echo -ne "Procurar pacotes desnecessarios........................................................[    ]";
echo
######################################################################################################################
sleep 5
clear
######################################################################################################################
echo
echo -ne "Cache das Atualizacoes Limpo...........................................................[ ${Green}OK${NC} ]";
echo
echo -ne "Base de dados Atualizadas..............................................................[ ${Green}OK${NC} ]";
echo
echo -ne "Corrigindo Problemas com dependencias..................................................[    ]";
echo
echo -ne "Reparar Problemas......................................................................[    ]";
echo
echo -ne "Baixar e Instalar as Atualizacoes......................................................[    ]";
echo
echo -ne "Baixar e Instalar Atualizacoes das distribuicoes.......................................[    ]";
echo
echo -ne "Verificar pacotes antigos ou duplicados................................................[    ]";
echo
echo -ne "Procurar pacotes desnecessarios........................................................[    ]";
echo
echo
########################## Corrigindo Problemas com dependencias #####################################################
sudo apt-get install -f -y
clear
######################################################################################################################
echo
echo -ne "Cache das Atualizacoes Limpo...........................................................[ ${Green}OK${NC} ]";
echo
echo -ne "Base de dados Atualizadas..............................................................[ ${Green}OK${NC} ]";
echo
echo -ne "Problemas com dependencias Corrigindos.................................................[ ${Green}OK${NC} ]";
echo
echo -ne "Reparar Problemas......................................................................[    ]";
echo
echo -ne "Baixar e Instalar as Atualizacoes......................................................[    ]";
echo
echo -ne "Baixar e Instalar Atualizacoes das distribuicoes.......................................[    ]";
echo
echo -ne "Verificar pacotes antigos ou duplicados................................................[    ]";
echo
echo -ne "Procurar pacotes desnecessarios........................................................[    ]";
echo
echo
######################################################################################################################
sleep 5
clear
######################################################################################################################
echo
echo -ne "Cache das Atualizacoes Limpo...........................................................[ ${Green}OK${NC} ]";
echo
echo -ne "Base de dados Atualizadas..............................................................[ ${Green}OK${NC} ]";
echo
echo -ne "Problemas com dependencias Corrigindos.................................................[ ${Green}OK${NC} ]";
echo
echo -ne "Reparando Problemas....................................................................[    ]";
echo
echo -ne "Baixar e Instalar as Atualizacoes......................................................[    ]";
echo
echo -ne "Baixar e Instalar Atualizacoes das distribuicoes.......................................[    ]";
echo
echo -ne "Verificar pacotes antigos ou duplicados................................................[    ]";
echo
echo -ne "Procurar pacotes desnecessarios........................................................[    ]";
echo
################################# Corrigindo Problemas com dependencias ##############################################
sudo dpkg --configure -a
sudo apt --fix-broken install
clear
######################################################################################################################
echo
echo -ne "Cache das Atualizacoes Limpo...........................................................[ ${Green}OK${NC} ]";
echo
echo -ne "Base de dados Atualizadas..............................................................[ ${Green}OK${NC} ]";
echo
echo -ne "Problemas com dependencias Corrigindos.................................................[ ${Green}OK${NC} ]";
echo
echo -ne "Problemas Reparados....................................................................[ ${Green}OK${NC} ]";
echo
echo -ne "Baixar e Instalar as Atualizacoes......................................................[    ]";
echo
echo -ne "Baixar e Instalar Atualizacoes das distribuicoes.......................................[    ]";
echo
echo -ne "Verificar pacotes antigos ou duplicados................................................[    ]";
echo
echo -ne "Procurar pacotes desnecessarios........................................................[    ]";
echo
echo
######################################################################################################################
sleep 5
clear
######################################################################################################################
echo
echo -ne "Cache das Atualizacoes Limpo...........................................................[ ${Green}OK${NC} ]";
echo
echo -ne "Base de dados Atualizadas..............................................................[ ${Green}OK${NC} ]";
echo
echo -ne "Problemas com dependencias Corrigindos.................................................[ ${Green}OK${NC} ]";
echo
echo -ne "Problemas Reparados....................................................................[ ${Green}OK${NC} ]";
echo
echo -ne "Baixando e Instalando as Atualizacoes..................................................[    ]";
echo
echo -ne "Baixar e Instalar Atualizacoes das distribuicoes.......................................[    ]";
echo
echo -ne "Verificar pacotes antigos ou duplicados................................................[    ]";
echo
echo -ne "Procurar pacotes desnecessarios........................................................[    ]";
echo
############################## Baixando e Instalando Atualiza��es ##################################################
sudo apt-get upgrade -f -y
clear
######################################################################################################################
echo
echo -ne "Cache das Atualizacoes Limpo...........................................................[ ${Green}OK${NC} ]";
echo
echo -ne "Base de dados Atualizadas..............................................................[ ${Green}OK${NC} ]";
echo
echo -ne "Problemas com dependencias Corrigindos.................................................[ ${Green}OK${NC} ]";
echo
echo -ne "Problemas Reparados....................................................................[ ${Green}OK${NC} ]";
echo
echo -ne "Atualizacoes Instaladas................................................................[ ${Green}OK${NC} ]";
echo
echo -ne "Baixar e Instalar Atualizacoes das distribuicoes.......................................[    ]";
echo
echo -ne "Verificar pacotes antigos ou duplicados................................................[    ]";
echo
echo -ne "Procurar pacotes desnecessarios........................................................[    ]";
echo
######################################################################################################################
sleep 5
clear
######################################################################################################################
echo
echo -ne "Cache das Atualizacoes Limpo...........................................................[ ${Green}OK${NC} ]";
echo
echo -ne "Base de dados Atualizadas..............................................................[ ${Green}OK${NC} ]";
echo
echo -ne "Problemas com dependencias Corrigindos.................................................[ ${Green}OK${NC} ]";
echo
echo -ne "Problemas Reparados....................................................................[ ${Green}OK${NC} ]";
echo
echo -ne "Atualizacoes Instaladas................................................................[ ${Green}OK${NC} ]";
echo
echo -ne "Baixando e Instalando Atualizacoes das distribuicoes...................................[    ]";
echo
echo -ne "Verificar pacotes antigos ou duplicados................................................[    ]";
echo
echo -ne "Procurar pacotes desnecessarios........................................................[    ]";
echo
################################ Baixando e Instalando Atualiza��es #################################################
sudo apt-get dist-upgrade -f -y
sudo apt-get full-upgrade -f -y
clear
######################################################################################################################
echo
echo -ne "Cache das Atualizacoes Limpo...........................................................[ ${Green}OK${NC} ]";
echo
echo -ne "Base de dados Atualizadas..............................................................[ ${Green}OK${NC} ]";
echo
echo -ne "Problemas com dependencias Corrigindos.................................................[ ${Green}OK${NC} ]";
echo
echo -ne "Problemas Reparados....................................................................[ ${Green}OK${NC} ]";
echo
echo -ne "Atualizacoes Instaladas................................................................[ ${Green}OK${NC} ]";
echo
echo -ne "Atualizacoes das distribuicoes Instaladas..............................................[ ${Green}OK${NC} ]";
echo
echo -ne "Verificar pacotes antigos ou duplicados................................................[    ]";
echo
echo -ne "Procurar pacotes desnecessarios........................................................[    ]";
echo
######################################################################################################################
sleep 5
clear
######################################################################################################################
echo
echo -ne "Cache das Atualizacoes Limpo...........................................................[ ${Green}OK${NC} ]";
echo
echo -ne "Base de dados Atualizadas..............................................................[ ${Green}OK${NC} ]";
echo
echo -ne "Problemas com dependencias Corrigindos.................................................[ ${Green}OK${NC} ]";
echo
echo -ne "Problemas Reparados....................................................................[ ${Green}OK${NC} ]";
echo
echo -ne "Atualizacoes Instaladas................................................................[ ${Green}OK${NC} ]";
echo
echo -ne "Atualizacoes das distribuicoes Instaladas..............................................[ ${Green}OK${NC} ]";
echo
echo -ne "Verificando pacotes antigos ou duplicados..............................................[    ]";
echo
echo -ne "Procurar pacotes desnecessarios........................................................[    ]";
echo
################################## Baixando e Instalando Atualiza��es ###############################################
sudo apt-get autoclean -y
clear
######################################################################################################################
echo
echo -ne "Cache das Atualizacoes Limpo...........................................................[ ${Green}OK${NC} ]";
echo
echo -ne "Base de dados Atualizadas..............................................................[ ${Green}OK${NC} ]";
echo
echo -ne "Problemas com dependencias Corrigindos.................................................[ ${Green}OK${NC} ]";
echo
echo -ne "Problemas Reparados....................................................................[ ${Green}OK${NC} ]";
echo
echo -ne "Atualizacoes Instaladas................................................................[ ${Green}OK${NC} ]";
echo
echo -ne "Atualizacoes das distribuicoes Instaladas..............................................[ ${Green}OK${NC} ]";
echo
echo -ne "Pacotes antigos ou duplicados removidos................................................[ ${Green}OK${NC} ]";
echo
echo -ne "Procurar pacotes desnecessarios........................................................[    ]";
echo
######################################################################################################################
sleep 5
clear
######################################################################################################################
echo
echo -ne "Cache das Atualizacoes Limpo...........................................................[ ${Green}OK${NC} ]";
echo
echo -ne "Base de dados Atualizadas..............................................................[ ${Green}OK${NC} ]";
echo
echo -ne "Problemas com dependencias Corrigindos.................................................[ ${Green}OK${NC} ]";
echo
echo -ne "Problemas Reparados....................................................................[ ${Green}OK${NC} ]";
echo
echo -ne "Atualizacoes Instaladas................................................................[ ${Green}OK${NC} ]";
echo
echo -ne "Atualizacoes das distribuicoes Instaladas..............................................[ ${Green}OK${NC} ]";
echo
echo -ne "Pacotes antigos ou duplicados removidos................................................[ ${Green}OK${NC} ]";
echo
echo -ne "Procurando pacotes desnecessarios......................................................[    ]";
echo
############################## Baixando e Instalando Atualiza��es ####################################################
sudo apt-get autoremove -f -y
clear
######################################################################################################################
echo
echo -ne "Cache das Atualizacoes Limpo...........................................................[ ${Green}OK${NC} ]";
echo
echo -ne "Base de dados Atualizadas..............................................................[ ${Green}OK${NC} ]";
echo
echo -ne "Problemas com dependencias Corrigindos.................................................[ ${Green}OK${NC} ]";
echo
echo -ne "Problemas Reparados....................................................................[ ${Green}OK${NC} ]";
echo
echo -ne "Atualizacoes Instaladas................................................................[ ${Green}OK${NC} ]";
echo
echo -ne "Atualizacoes das distribuicoes Instaladas..............................................[ ${Green}OK${NC} ]";
echo
echo -ne "Pacotes antigos ou duplicados removidos................................................[ ${Green}OK${NC} ]";
echo
echo -ne "Pacotes desnecessario Removidos........................................................[ ${Green}OK${NC} ]";
echo
# back the cursor
tput cnorm -- inormal
exit 0
