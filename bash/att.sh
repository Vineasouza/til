#!/bin/bash

# hide cursor
tput civis -- invisible

Green='\033[0;32m' 
NC='\033[0m'

clear

echo
echo -ne "Limpando o cache das Atualizacoes......................................................[    ]";
echo
################# Baixando e Instalando Atualiza��es ###############################
sudo apt-get clean -y
echo
echo -ne "Cache das Atualizacoes Limpo...........................................................[ ${Green}OK${NC} ]";
echo
sleep 1

clear

echo
echo -ne "Atualizar Base dados das Atualizacoes..................................................[    ]";
echo
####################### Atualizar Base dados #######################################
sudo apt-get update
echo
echo -ne "Base de dados Atualizadas..............................................................[ ${Green}OK${NC} ]";
echo
sleep 1

clear

echo
echo -ne "Corrigindo Problemas com dependencias..................................................[    ]";
echo
################# Corrigindo Problemas com dependencias ############################
sudo apt-get install -f -y
echo
echo -ne "Problemas com dependencias Corrigindos.................................................[ ${Green}OK${NC} ]";
echo
sleep 1

clear

echo
echo -ne "Reparando Problemas....................................................................[    ]";
echo
################# Corrigindo Problemas com dependencias ############################
sudo dpkg --configure -a
sudo apt --fix-broken install
echo
echo -ne "Problemas Reparados....................................................................[ ${Green}OK${NC} ]";
echo
sleep 1

clear

echo
echo -ne "Baixando e Instalando as Atualizacoes..................................................[    ]";
echo
################# Baixando e Instalando Atualiza��es ###############################
sudo apt-get upgrade -f -y
echo
echo -ne "Atualizacoes Instaladas................................................................[ ${Green}OK${NC} ]";
echo
sleep 1

clear

echo
echo -ne "Baixando e Instalando Atualizacoes das distribuicoes...................................[    ]";
echo
################# Baixando e Instalando Atualiza��es ###############################
sudo apt-get dist-upgrade -f -y
sudo apt-get full-upgrade -f -y
echo
echo -ne "Atualizacoes das distribuicoes Instaladas..............................................[ ${Green}OK${NC} ]";
echo
sleep 1

clear

echo
echo -ne "Verificando pacotes antigos ou duplicados..............................................[    ]";
echo
################# Baixando e Instalando Atualiza��es ###############################
sudo apt-get autoclean -y
echo
echo -ne "Pacotes antigos ou duplicados removidos................................................[ ${Green}OK${NC} ]";
echo
sleep 1

clear

echo
echo -ne "Procurando pacotes desnecessarios......................................................[    ]";
echo
################# Baixando e Instalando Atualiza��es ###############################
sudo apt-get autoremove -f -y
echo
echo -ne "Pacotes desnecessario Removidos........................................................[ ${Green}OK${NC} ]";
echo
sleep 1 

# back the cursor
tput cnorm -- inormal
exit 0
