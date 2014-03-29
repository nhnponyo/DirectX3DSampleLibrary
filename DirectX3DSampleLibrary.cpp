// DirectX3DSampleLibrary.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "DirectX3DSampleLibrary.h"


// This is an example of an exported variable
DIRECTX3DSAMPLELIBRARY_API int nDirectX3DSampleLibrary=0;

// This is an example of an exported function.
DIRECTX3DSAMPLELIBRARY_API int fnDirectX3DSampleLibrary(void)
{
	return 42;
}

// This is the constructor of a class that has been exported.
// see DirectX3DSampleLibrary.h for the class definition
CDirectX3DSampleLibrary::CDirectX3DSampleLibrary()
{
	return;
}
