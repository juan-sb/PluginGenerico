#pragma warning(disable:4996)

#include "XPLMDataAccess.h"


// Rutina de inicializacion del plugin
PLUGIN_API int XPluginStart(char* outName, char* outSig, char* outDesc) {
	
	strcpy(outName, "Plugin generico para el proyecto del simulador");		// Nombre del plugin
	strcpy(outSig, "simulador.generico");									// Firma
	strcpy(outDesc, "Un plugin que no hace nada");							// Descripcion

	return 1;	// Inicio existoso
}


// Rutina de limpieza al parar el plugin
PLUGIN_API void XPluginStop(void) {

}


// Inicializacion especifica al habilitar el plugin
PLUGIN_API int XPluginEnable(void) {
	return 1;
}

// Bloque de finalizacion específico al deshabilitar el plugin
PLUGIN_API void XPluginDisable(void) {

}

// Procesamiento de mensajes recibidos mediante el sistema de plugins
PLUGIN_API void XPluginReceiveMessage(XPLMPluginID txID, int msg, void* inParam) {

}