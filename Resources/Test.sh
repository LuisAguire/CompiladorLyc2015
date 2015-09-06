FILE_NAME="Prueba.txt"
cp ../Resources/$FILE_NAME .
echo "********* CONTENIDO DE $FILE_NAME ***********"
cat $FILE_NAME
echo ""
echo "*********************************************"
echo ""
echo "********* EJECUTANDO PROGRAMA COMPILADOR CON $FILE_NAME ***********"
echo ""
./Compilador $FILE_NAME
echo ""
echo "********* EJECUCION FINALIZADA ***********"


