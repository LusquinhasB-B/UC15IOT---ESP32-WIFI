<h1> <strong> PRÁTICA COM ESP32 UTILIZANDO A COMUNICAÇÃO WIFI - UC15IOT </strong></h1>

<ul>
  <li><strong>Linguagem: </strong>C++</li>
  <li><strong>IDE:</strong> Arduino IDE e VScode</li>
  <li><strong>Bibliotecas utilizadas:</strong> 'WiFI.h' e 'ESP32Ping.h'</li>
</ul>
<br>
<h2> :mortar_board: <strong>Professor Orientador: </strong> </h2>
  <ul>
  <li><h4>Marcos Costa: - <b>GitHub:</b> https://github.com/marcossousa33dev</h4></li>
   <blockquote>Repositório da Turma: - https://github.com/marcossousa33dev/T01IOTUC15 
  </ul>
  
<h2> :bulb: <strong>INTEGRANTES:</strong> </h2>
<ul>   
  
  <li><h4>Felipe Avelino Matias de Oliveira - <b>GitHub:</b> https://github.com/FelipeAvelno </h4></li>
  
  <li><h4>Gustavo Nogueira Marques - <b>GitHub:</b> https://github.com/marquesnog</h4>  </li>

  <li><h4>João Pedro Moreira Castor - <b>GitHub:</b> https://github.com/moreiracastor</h4  <li>
    
  <li><h4>Lucas da Silva Sousa - <b>GitHub:</b> https://github.com/LusquinhasB-B</h4> </li>    

</ul>
<br>
<h2> :page_with_curl: INTRODUÇÃO</h2>
    <p> O objetivo deste exercício é consolidar os conhecimentos adquiridos sobre conectividade WiFi no ESP32, analisando redes disponíveis, conectando-se automaticamente à melhor rede aberta e validando a conectividade com a internet via ping. Os códigos foram realizados nas plataformas <b>Arduino IDE</b> e <b>Visual Studio Code</b> utilizado a extensão <b>Plataform IO.</b> </p>
<br>

  <h2> :bookmark_tabs: PRÁTICAS - QUESTÕES</h2>
  
  <h3>Código 1 – Análise de Redes</h3>
  <ul>
      <li><strong>Quantas redes WiFi foram encontradas?</strong> <br> <blockquote> Foram encontradas 22 redes, podendo variar o número de redes a cada loop de execução do código.</li>
      <li><strong>Qual é a rede com o sinal mais forte?</strong> <br> <blockquote> A rede com o melhor sinal encontrado foi 'Iot-Senac'
        com -55dBm (Excelente! Sendo adequado a todos tipos de redes).</li>
      <li><strong>Quais redes possuem senha?</strong> <br> <blockquote> 18 redes possuem senha.</li>
  </ul> 

  <h3>Código 2 – Conexão Automática à Melhor Rede Aberta</h3>
  <ul>
      <li><strong>O ESP32 conseguiu encontrar e conectar a uma rede aberta? Se sim, qual?</strong> <br> <blockquote> Sim, a rede "CONECTA_SENAC".</li>
      <li><strong>O que acontece se nenhuma rede aberta for encontrada?</strong> <br> <blockquote> Exibe no serial "Nenhuma rede encontrada", entrando novamente no loop.</li>
  </ul>

  <h3>Código 3 – Validação de Conectividade com Ping</h3>
  <ul>
      <li><strong>O ESP32 conseguiu conectar ao WiFi configurado?</strong> <br> <blockquote> Sim.</li>
      <li><strong>Todos os sites responderam ao ping? Se algum falhou, qual foi?</strong> <br> <blockquote> O site ‘www.senactaboao.com’ não obteve resposta.</li>
  </ul>
  <br>
  
  <h2>:link: LINKS</h2>
  <p>Links dos vídeos dos códigos em funcionamento: </p>
  <ul>
      <li>Vídeo 1: <a href="https://youtube.com/shorts/Q1YnjrDynnE?feature=share" target="_blank">Código 1 – Análise de Redes </a></li>
      <li>Vídeo 2: <a href="https://youtube.com/shorts/-VzaDTsr_a0?feature=share" target="_blank">Código 2 – Conexão Automática à Melhor Rede Aberta</a></li>
      <li>Vídeo 3: <a href="https://youtube.com/shorts/lMrYNRodhw4?feature=share" target="_blank">Código Extra (Código 3 adaptado)</a></li>
  </ul>
