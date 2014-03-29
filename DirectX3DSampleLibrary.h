// The following ifdef block is the standard way of creating macros which make exporting 
// from a DLL simpler. All files within this DLL are compiled with the DIRECTX3DSAMPLELIBRARY_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see 
// DIRECTX3DSAMPLELIBRARY_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef DIRECTX3DSAMPLELIBRARY_EXPORTS
#define DIRECTX3DSAMPLELIBRARY_API __declspec(dllexport)
#else
#define DIRECTX3DSAMPLELIBRARY_API __declspec(dllimport)
#endif

// This class is exported from the DirectX3DSampleLibrary.dll
class DIRECTX3DSAMPLELIBRARY_API CDirectX3DSampleLibrary {
public:
	CDirectX3DSampleLibrary(void);
	// TODO: add your methods here.
};

extern DIRECTX3DSAMPLELIBRARY_API int nDirectX3DSampleLibrary;

DIRECTX3DSAMPLELIBRARY_API int fnDirectX3DSampleLibrary(void);
