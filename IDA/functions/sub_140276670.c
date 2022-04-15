//----- (0000000140276670) ----------------------------------------------------
__int64 __fastcall sub_140276670(__int64 a1)
{
	UINT SystemDirectoryW; // eax
	HMODULE LibraryW; // rax
	__int64 result; // rax
	UINT v5; // eax
	HMODULE v6; // rax
	DWORD ModuleFileNameW; // eax
	__int64 v8; // rdx
	__int64 v9; // rdi
	WCHAR* v10; // rcx
	int v11; // r10d
	__int64 v12; // rdx
	char* v13; // r9
	WCHAR v14; // ax
	HMODULE v15; // rax
	__int64 v16; // rcx
	unsigned int v17; // edi
	__int64 v18; // rcx
	__int64 v19; // rcx
	unsigned int v20; // edi
	__int64 v21; // rcx
	void** v22; // rdi
	unsigned int* v23; // rsi
	__int64 v24; // r12
	__int64 v25; // r13
	int v26; // ebx
	void* v27; // r15
	unsigned __int64 v28; // r14
	__int64 v29; // rax
	int* v30; // rax
	int v31; // edx
	int v32; // r9d
	int* v33; // r11
	__int64 v34; // r8
	int* v35; // r10
	__int64 v36; // rax
	__int64 v37; // [rsp+20h] [rbp-E0h] BYREF
	__int64 v38; // [rsp+28h] [rbp-D8h] BYREF
	WCHAR Buffer[264]; // [rsp+30h] [rbp-D0h] BYREF

	SystemDirectoryW = GetSystemDirectoryW(Buffer, 0x104u);
	if (SystemDirectoryW)
	{
		if ((int)sub_14001B370(&Buffer[SystemDirectoryW], 260i64 - SystemDirectoryW, L"\\%s", L"dxgi.dll") >= 0)
			LibraryW = LoadLibraryW(Buffer);
		else
			LibraryW = 0i64;
	}
	else
	{
		LibraryW = 0i64;
	}
	*(_QWORD*)(a1 + 8640) = LibraryW;
	if (!LibraryW)
		return 2685272065i64;
	CreateDXGIFactory1 = (HRESULT(__stdcall*)(const IID* const, void**))GetProcAddress(LibraryW, "CreateDXGIFactory1");
	if (!CreateDXGIFactory1)
	{
		CreateDXGIFactory = (HRESULT(__stdcall*)(const IID* const, void**))GetProcAddress(
			*(HMODULE*)(a1 + 8640),
			"CreateDXGIFactory");
		if (!CreateDXGIFactory)
			return 2685272065i64;
	}
	v5 = GetSystemDirectoryW(Buffer, 0x104u);
	if (v5)
		v6 = (int)sub_14001B370(&Buffer[v5], 260i64 - v5, L"\\%s", L"d3d11.dll") >= 0 ? LoadLibraryW(Buffer) : 0i64;
	else
		v6 = 0i64;
	*(_QWORD*)(a1 + 8648) = v6;
	if (!v6)
		return 2685272065i64;
	D3D11CreateDevice = (HRESULT(__stdcall*)(IDXGIAdapter*, D3D_DRIVER_TYPE, HMODULE, UINT, const D3D_FEATURE_LEVEL*, UINT, UINT, ID3D11Device**, D3D_FEATURE_LEVEL*, ID3D11DeviceContext**))GetProcAddress(v6, "D3D11CreateDevice");
	if (!D3D11CreateDevice)
		return 2685272065i64;
	ModuleFileNameW = GetModuleFileNameW(0i64, Buffer, 0x104u);
	if (ModuleFileNameW)
	{
		do
		{
			v8 = ModuleFileNameW - 1;
			if (Buffer[v8] == 92)
				break;
			--ModuleFileNameW;
		} while ((_DWORD)v8);
	}
	v9 = 260 - ModuleFileNameW;
	v10 = &Buffer[ModuleFileNameW];
	v11 = 0;
	if ((unsigned __int64)(v9 - 1) > 0x7FFFFFFE)
		v11 = -2147024809;
	v12 = (unsigned int)v9;
	if (v11 < 0)
	{
		if (!(_DWORD)v9)
			goto LABEL_33;
	}
	else
	{
		v11 = 0;
		if (!(_DWORD)v9)
			goto LABEL_30;
		v13 = (char*)((char*)L"d3dx11_43.dll" - (char*)v10);
		while (v12 + 2147483646i64 - (unsigned int)v9)
		{
			v14 = *(_WORD*)&v13[(_QWORD)v10];
			if (!v14)
				break;
			*v10++ = v14;
			if (!--v12)
			{
				--v10;
				v11 = -2147024774;
				goto LABEL_32;
			}
		}
		if (!v12)
		{
		LABEL_30:
			--v10;
			v11 = -2147024774;
		}
	}
LABEL_32:
	*v10 = 0;
LABEL_33:
	if (v11 >= 0)
		v15 = LoadLibraryW(Buffer);
	else
		v15 = 0i64;
	*(_QWORD*)(a1 + 8656) = v15;
	if (!v15)
		return 2685272065i64;
	D3DX11LoadTextureFromTexture = (__int64)GetProcAddress(v15, "D3DX11LoadTextureFromTexture");
	if (!D3DX11LoadTextureFromTexture)
		return 2685272065i64;
	D3DX11SHProjectCubeMap = (__int64)GetProcAddress(*(HMODULE*)(a1 + 8656), "D3DX11SHProjectCubeMap");
	if (!D3DX11SHProjectCubeMap)
		return 2685272065i64;
	if (CreateDXGIFactory1)
	{
		result = ((__int64(__fastcall*)(void*, __int64))CreateDXGIFactory1)(&unk_140B61260, a1 + 6272);
		if ((int)result < 0)
			return result;
		(***(void(__fastcall****)(_QWORD, void*, __int64))(a1 + 6272))(*(_QWORD*)(a1 + 6272), &unk_140B61240, a1 + 6280);
		sub_140282570((_QWORD*)(a1 + 6264), *(_QWORD*)(a1 + 6272));
		v16 = *(_QWORD*)(a1 + 6272);
		v37 = 0i64;
		v17 = 0;
		if ((*(int(__fastcall**)(__int64, _QWORD, __int64*))(*(_QWORD*)v16 + 96i64))(v16, 0i64, &v37) >= 0)
		{
			do
			{
				v38 = v37;
				if (v37)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v37 + 8i64))(v37);
				sub_140282790((__int64*)(a1 + 6288), &v38);
				if (v38)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v38 + 16i64))(v38);
				if (v37)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v37 + 16i64))(v37);
				v18 = *(_QWORD*)(a1 + 6272);
				v37 = 0i64;
				++v17;
			} while ((*(int(__fastcall**)(__int64, _QWORD, __int64*))(*(_QWORD*)v18 + 96i64))(v18, v17, &v37) >= 0);
		}
	}
	else
	{
		result = ((__int64(__fastcall*)(void*, __int64))CreateDXGIFactory)(&unk_140B61250, a1 + 6264);
		if ((int)result < 0)
			return result;
		v19 = *(_QWORD*)(a1 + 6264);
		v37 = 0i64;
		v20 = 0;
		if ((*(int(__fastcall**)(__int64, _QWORD, __int64*))(*(_QWORD*)v19 + 56i64))(v19, 0i64, &v37) >= 0)
		{
			do
			{
				sub_1402826C0((__int64*)(a1 + 6288), &v37);
				if (v37)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v37 + 16i64))(v37);
				v21 = *(_QWORD*)(a1 + 6264);
				v37 = 0i64;
				++v20;
			} while ((*(int(__fastcall**)(__int64, _QWORD, __int64*))(*(_QWORD*)v21 + 56i64))(v21, v20, &v37) >= 0);
		}
	}
	if (v37)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v37 + 16i64))(v37);
	v22 = &off_140C38350;
	v23 = (unsigned int*)&unk_140AE5D90;
	v24 = 23i64;
	v25 = a1 - (_QWORD)&off_140C38350 + 6584;
	v38 = v25;
	do
	{
		v26 = *v23;
		v27 = *v22;
		v28 = *v23;
		v29 = 32 * v28;
		if (!is_mul_ok(v28, 0x20ui64))
			v29 = -1i64;
		v30 = sub_14018B280(v29, 0);
		v31 = -1;
		v32 = 0;
		v33 = v30;
		if (v26)
		{
			v34 = (__int64)v27 + 12;
			v35 = v30 + 3;
			do
			{
				if (v31 != *(_DWORD*)(v34 - 4))
				{
					v31 = *(_DWORD*)(v34 - 4);
					v32 = 0;
				}
				v36 = *(int*)(v34 - 12);
				v34 += 16i64;
				v35 += 8;
				*(_QWORD*)(v35 - 11) = off_140AE7F00[v36];
				*(v35 - 9) = dword_140AE7D50[*(int*)(v34 - 28)];
				LODWORD(v36) = dword_140AE7D28[*(int*)(v34 - 24)];
				*(v35 - 7) = v31;
				*(v35 - 6) = v32;
				*(v35 - 8) = v36;
				*(v35 - 5) = dword_140AE7D98[*(int*)(v34 - 16)];
				*(v35 - 4) = dword_140AE7DA0[*(int*)(v34 - 16)];
				v32 += dword_140AE4D78[*(int*)(v34 - 24)];
				--v28;
			} while (v28);
			v25 = v38;
		}
		*(void**)((char*)v22++ + v25) = v33;
		++v23;
		--v24;
	} while (v24);
	return 0i64;
}
// 140A43680: using guessed type wchar_t aS_9[4];
// 140AE4D78: using guessed type int dword_140AE4D78[47];
// 140AE7D28: using guessed type int dword_140AE7D28[10];
// 140AE7D50: using guessed type int dword_140AE7D50[18];
// 140AE7D98: using guessed type int dword_140AE7D98[];
// 140AE7DA0: using guessed type int dword_140AE7DA0[];
// 140AE7F00: using guessed type char *off_140AE7F00[18];
// 140AE82D8: using guessed type wchar_t aD3dx1143Dll[14];
// 140AE8310: using guessed type wchar_t aD3d11Dll[10];
// 140AE8358: using guessed type wchar_t aDxgiDll[9];
// 140C38350: using guessed type void *off_140C38350;
// 140C65790: using guessed type __int64 D3DX11LoadTextureFromTexture;
// 140C65798: using guessed type __int64 D3DX11SHProjectCubeMap;
// 140276670: using guessed type WCHAR Buffer[264];

