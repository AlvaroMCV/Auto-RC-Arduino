# Control de Coche con Dabble

Este proyecto controla un coche utilizando un mando de juego conectado a un teléfono móvil a través de la aplicación Dabble. Permite controlar las luces, la dirección, la tracción y la bocina del coche.

## Requisitos

- Arduino IDE
- Biblioteca Servo
- Biblioteca Dabble
- Módulo de control de motor

## Conexiones

- **Luz A**: Pin 11
- **Luz B**: Pin 12
- **Luz Reversa**: Pin 13
- **Bocina**: Pin 9
- **PWM Motor**: Pin 5
- **Motor Izquierdo**: Pin 4
- **Motor Derecho**: Pin 6
- **Servo Dirección**: Pin 10

## Instalación

1. Clona el repositorio:
    ```sh
    git clone https://github.com/tu-usuario/nombre-del-repositorio.git
    ```

2. Abre el archivo `main.ino` con el Arduino IDE.

3. Sube el código a tu placa Arduino.

## Uso

1. Conecta el mando de juego a tu teléfono móvil mediante la aplicación Dabble.
2. Controla el coche utilizando los botones y ejes del mando de juego:
    - **Eje Y**: Controla la tracción (adelante y atrás).
    - **Eje X**: Controla la dirección (izquierda y derecha).
    - **Botón Triángulo**: Enciende/apaga la luz A.
    - **Botón Cuadrado**: Enciende/apaga la luz B.
    - **Botón Círculo**: Activa la bocina.

## Contribuciones

Las contribuciones son bienvenidas. Por favor, abre un issue o un pull request para discutir cualquier cambio que te gustaría realizar.

## Licencia

Este proyecto está bajo la Licencia MIT.
