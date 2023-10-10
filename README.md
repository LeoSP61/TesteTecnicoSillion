# TesteTecnicoSillion
Desafio Hardware/Firmware - Sillion

Considerações iniciais: 
O Projeto foi feito seguindo as premissas apresentadas no documento Desafio Hardware/Firmware - Sillion (https://docs.google.com/document/d/1DJPGadSPsPmk1VQU9ZT9On-CVbZ3AcXDxckCV0j4miA/edit).

Como não foram especificadas as características do motor, assumi todo o circuito não consumiria mais que 2A. 

Devido ao prazo curto, não desenvolvi por completo a fonte opcional do exercício 6. Porém, tenho o costume de dimensionar fontes/conversores utilizando a ferramenta WEBENCH POWER DESIGNER da Texas Instruments como auxílio. 
Então entrei com as características necessárias: Conversor Buck (ou buck_boost) entrada 5V a 36V e saída 5V@2A. A partir dos resultados escolhi o circuito que utiliza o CI TPS55288RPMR por ter um footprint reduzido e disponibilidade no mercado. 
O relatório do circuito modelo está anexado no repositório.

Qualquer dúvida, sintam-se a vontade para entrar em contato.
