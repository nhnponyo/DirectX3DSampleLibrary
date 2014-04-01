#pragma once
#include <d3dx9.h>

#ifdef DIRECTX3DSAMPLELIBRARY_EXPORTS
#define DIRECTX3DSAMPLELIBRARY_API __declspec(dllexport)
#else
#define DIRECTX3DSAMPLELIBRARY_API __declspec(dllimport)
#endif

class DIRECTX3DSAMPLELIBRARY_API D3DSample
{
public:
	D3DSample();
	~D3DSample();

private:
	LPDIRECT3D9			g_pD3D;
	LPDIRECT3DDEVICE9	g_pd3dDevice;

	LPD3DXMESH          g_pMesh;
	D3DMATERIAL9*       g_pMeshMaterials;
	LPDIRECT3DTEXTURE9* g_pMeshTextures; 
	DWORD               g_dwNumMaterials;

public:
	HRESULT InitD3D( HWND hWnd );
	HRESULT InitGeometry();
	VOID Cleanup();
	VOID SetupMatrices();
	VOID Render();
	LRESULT WINAPI MsgProc( HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam );
	static LRESULT CALLBACK MsgProc2( HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam );
	INT CreateSample();

	};