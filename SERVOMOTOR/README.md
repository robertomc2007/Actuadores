# Resumen SERVOMOTOR

Actuador electromecánico con control electrónico incorporado. Puede mover un eje de tracción rotando en ambos sentidos y con un ángulo o grado de rotación en función de una señal de comando.

## FUNCIONAMIENTO

Su funcionamiento se basa en un motor eléctrico el cual hace girar su eje en función de la intensidad y dirección de una corriente eléctrica que lo alimenta.

![MOTOR](./motor.gif)

Motor eléctrico

![Servo](https://2.bp.blogspot.com/-Tc0cF3cTbbg/V0MC5gS1qrI/AAAAAAAADE4/AfEugLdBGBQ3A7LZk5bjpbI2xevkRCRcwCLcB/s1600/Mca.GIF)

El eje del motor se acopla a una serie o cadena de engranajes reductores los cuales permiten reducir la velocidad de rotación, aumentando la fuerza en el eje.

![MOTOR](./servo-parts.jpg)

Por otra parte, se conecta solidario a uno de los egranajes un sensor de posición angular el cual provee de información sobre la posición del eje de salida a un circuito de control.

![MOTOR](./ServoMEchanism.png)

## CARACTERISTICAS

![Servo](http://www.info-ab.uclm.es/labelec/solar/electronica/elementos/servomotores/smov.gif)

[Especificaciones de Servomotor SG90](SG90Servo.pdf)

## PRACTICA: Conectar y controlar un Servomotor

DIAGRAMA

![ServoSolo](./SERVO_SOLO_bb.jpg)

PROGRAMA

<pre>
<font color="#95a5a6">/* Sweep</font>
<font color="#95a5a6"> by BARRAGAN &lt;</font><u><font color="#95a5a6">http://barraganstudio.com</font></u><font color="#95a5a6">&gt;</font>
<font color="#95a5a6"> This example code is in the public domain.</font>
<font color="#95a5a6"></font>
<font color="#95a5a6"> modified 8 Nov 2013</font>
<font color="#95a5a6"> by Scott Fitzgerald</font>
<font color="#95a5a6"> </font><u><font color="#95a5a6">http://www.arduino.cc/en/Tutorial/Sweep</font></u><font color="#95a5a6"></font>
<font color="#95a5a6">*/</font>

<font color="#5e6d03">#include</font> <font color="#434f54">&lt;</font><b><font color="#d35400">Servo</font></b><font color="#434f54">.</font><font color="#000000">h</font><font color="#434f54">&gt;</font>

<b><font color="#d35400">Servo</font></b> <font color="#000000">myservo</font><font color="#000000">;</font> &nbsp;<font color="#434f54">// create servo object to control a servo</font>
<font color="#434f54">// twelve servo objects can be created on most boards</font>

<font color="#00979c">int</font> <font color="#000000">pos</font> <font color="#434f54">=</font> <font color="#000000">0</font><font color="#000000">;</font> &nbsp;&nbsp;&nbsp;<font color="#434f54">// variable to store the servo position</font>

<font color="#00979c">void</font> <font color="#5e6d03">setup</font><font color="#000000">(</font><font color="#000000">)</font> <font color="#000000">{</font>
 &nbsp;<font color="#000000">myservo</font><font color="#434f54">.</font><font color="#d35400">attach</font><font color="#000000">(</font><font color="#000000">9</font><font color="#000000">)</font><font color="#000000">;</font> &nbsp;<font color="#434f54">// attaches the servo on pin 9 to the servo object</font>
<font color="#000000">}</font>

<font color="#00979c">void</font> <font color="#5e6d03">loop</font><font color="#000000">(</font><font color="#000000">)</font> <font color="#000000">{</font>
 &nbsp;<font color="#5e6d03">for</font> <font color="#000000">(</font><font color="#000000">pos</font> <font color="#434f54">=</font> <font color="#000000">0</font><font color="#000000">;</font> <font color="#000000">pos</font> <font color="#434f54">&lt;=</font> <font color="#000000">180</font><font color="#000000">;</font> <font color="#000000">pos</font> <font color="#434f54">+=</font> <font color="#000000">1</font><font color="#000000">)</font> <font color="#000000">{</font> <font color="#434f54">// goes from 0 degrees to 180 degrees</font>
 &nbsp;&nbsp;&nbsp;<font color="#434f54">// in steps of 1 degree</font>
 &nbsp;&nbsp;&nbsp;<font color="#000000">myservo</font><font color="#434f54">.</font><font color="#d35400">write</font><font color="#000000">(</font><font color="#000000">pos</font><font color="#000000">)</font><font color="#000000">;</font> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#434f54">// tell servo to go to position in variable 'pos'</font>
 &nbsp;&nbsp;&nbsp;<font color="#d35400">delay</font><font color="#000000">(</font><font color="#000000">15</font><font color="#000000">)</font><font color="#000000">;</font> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#434f54">// waits 15ms for the servo to reach the position</font>
 &nbsp;<font color="#000000">}</font>
 &nbsp;<font color="#5e6d03">for</font> <font color="#000000">(</font><font color="#000000">pos</font> <font color="#434f54">=</font> <font color="#000000">180</font><font color="#000000">;</font> <font color="#000000">pos</font> <font color="#434f54">&gt;=</font> <font color="#000000">0</font><font color="#000000">;</font> <font color="#000000">pos</font> <font color="#434f54">-=</font> <font color="#000000">1</font><font color="#000000">)</font> <font color="#000000">{</font> <font color="#434f54">// goes from 180 degrees to 0 degrees</font>
 &nbsp;&nbsp;&nbsp;<font color="#000000">myservo</font><font color="#434f54">.</font><font color="#d35400">write</font><font color="#000000">(</font><font color="#000000">pos</font><font color="#000000">)</font><font color="#000000">;</font> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#434f54">// tell servo to go to position in variable 'pos'</font>
 &nbsp;&nbsp;&nbsp;<font color="#d35400">delay</font><font color="#000000">(</font><font color="#000000">15</font><font color="#000000">)</font><font color="#000000">;</font> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#434f54">// waits 15ms for the servo to reach the position</font>
 &nbsp;<font color="#000000">}</font>
<font color="#000000">}</font>

</pre>
