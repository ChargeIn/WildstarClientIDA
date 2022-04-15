#include "../winhttp.h"

//----- (0000000140251A40) ----------------------------------------------------
__int64 __fastcall sub_140251A40(__int64 a1)
{
	unsigned int v1; // r12d
	const WCHAR* CommandLineW; // rax
	LPWSTR* v3; // rax
	int v4; // esi
	int v5; // edi
	LPWSTR* v6; // rbx
	int v7; // ecx
	UINT SystemDirectoryW; // eax
	HMODULE LibraryW; // rax
	HMODULE v10; // rbx
	BOOL(__stdcall * SetProcessDPIAware)(); // rax
	int v12; // ebx
	_QWORD* v13; // r14
	int v14; // edi
	_QWORD* v15; // rsi
	int v16; // ecx
	int v17; // edi
	_QWORD* v18; // rsi
	int v19; // ecx
	int v20; // edi
	_QWORD* v21; // rsi
	int v22; // ecx
	int v23; // edi
	_QWORD* v24; // rsi
	int v25; // ecx
	__int64* v26; // rax
	unsigned __int64 v27; // rcx
	__int64 v28; // r13
	int v29; // r15d
	int v30; // esi
	_QWORD* v31; // rdi
	int v32; // ecx
	int v33; // esi
	int v34; // edi
	_QWORD* v35; // rsi
	int v36; // ecx
	int v37; // edi
	int v38; // ecx
	int v39; // r8d
	_QWORD* v40; // r15
	int v41; // eax
	int v42; // edi
	_DWORD* v43; // rcx
	__int64 v44; // rax
	__int64 v45; // rbx
	WCHAR* v46; // rcx
	WCHAR v47; // ax
	const WCHAR* v48; // rdx
	_QWORD* v49; // rax
	int v50; // ebx
	__int64* v51; // rcx
	__int64 v52; // rax
	__int64* v53; // rcx
	__int64 v54; // rax
	__int64 v55; // rbx
	WCHAR* v56; // rcx
	WCHAR v57; // ax
	int v59; // [rsp+30h] [rbp-D0h]
	__int128 v60; // [rsp+38h] [rbp-C8h] BYREF
	LPVOID lpTlsValue[2]; // [rsp+48h] [rbp-B8h]
	__int64* v62; // [rsp+58h] [rbp-A8h]
	unsigned __int64 v63; // [rsp+60h] [rbp-A0h]
	_QWORD* v64; // [rsp+68h] [rbp-98h] BYREF
	__int64(__fastcall * *TlsValue)(); // [rsp+70h] [rbp-90h] BYREF
	__int64 v66; // [rsp+78h] [rbp-88h]
	LPVOID Value; // [rsp+80h] [rbp-80h]
	HLOCAL hMem; // [rsp+88h] [rbp-78h]
	int pNumArgs[4]; // [rsp+90h] [rbp-70h] BYREF
	__int64(__fastcall * *v70)(); // [rsp+A0h] [rbp-60h] BYREF
	__int64 v71; // [rsp+A8h] [rbp-58h]
	LPVOID v72; // [rsp+B0h] [rbp-50h]
	__int128 v73[2]; // [rsp+C0h] [rbp-40h] BYREF
	WCHAR Buffer[264]; // [rsp+E0h] [rbp-20h] BYREF

	v1 = 0;
	v64 = (_QWORD*)a1;
	pNumArgs[0] = 0;
	CommandLineW = GetCommandLineW();
	v3 = CommandLineToArgvW(CommandLineW, pNumArgs);
	v4 = pNumArgs[0];
	v5 = 0;
	v6 = v3;
	hMem = v3;
	if (pNumArgs[0] > 0)
	{
		while (1)
		{
			v7 = **v6;
			if ((((v7 - 45) & 0xFFFFFFFD) == 0 || (unsigned int)(v7 - 150) <= 1)
				&& !(unsigned int)sub_14018E2C0((__int64)(*v6 + 1), L"fulldump"))
			{
				break;
			}
			++v5;
			++v6;
			if (v5 >= v4)
				goto LABEL_8;
		}
		dword_140C63724 |= 1u;
	}
LABEL_8:
	SystemDirectoryW = GetSystemDirectoryW(Buffer, 0x104u);
	if (SystemDirectoryW)
	{
		if ((int)sub_14001B370(&Buffer[SystemDirectoryW], 260i64 - SystemDirectoryW, L"\\%s", L"User32.dll") >= 0)
		{
			LibraryW = LoadLibraryW(Buffer);
			v10 = LibraryW;
			if (LibraryW)
			{
				SetProcessDPIAware = (BOOL(__stdcall*)())GetProcAddress(LibraryW, "SetProcessDPIAware");
				if (SetProcessDPIAware)
					SetProcessDPIAware();
				FreeLibrary(v10);
			}
		}
	}
	v12 = pNumArgs[0];
	v13 = hMem;
	v14 = 0;
	if (pNumArgs[0] <= 0)
	{
	LABEL_20:
		v17 = 0;
		if (v12 <= 0)
		{
		LABEL_26:
			v20 = 0;
			if (v12 <= 0)
			{
			LABEL_32:
				v23 = 0;
				if (v12 <= 0)
				{
				LABEL_38:
					v26 = (__int64*)&unk_140B60368;
					v27 = 3i64;
				}
				else
				{
					v24 = hMem;
					while (1)
					{
						v25 = *(unsigned __int16*)*v24;
						if ((((v25 - 45) & 0xFFFFFFFD) == 0 || (unsigned int)(v25 - 150) <= 1)
							&& !(unsigned int)sub_14018E2C0(*v24 + 2i64, L"dx9legacy"))
						{
							break;
						}
						++v23;
						++v24;
						if (v23 >= v12)
							goto LABEL_38;
					}
					v26 = (__int64*)&unk_140B60398;
					v27 = 1i64;
				}
			}
			else
			{
				v21 = hMem;
				while (1)
				{
					v22 = *(unsigned __int16*)*v21;
					if ((((v22 - 45) & 0xFFFFFFFD) == 0 || (unsigned int)(v22 - 150) <= 1)
						&& !(unsigned int)sub_14018E2C0(*v21 + 2i64, L"dx9ex"))
					{
						break;
					}
					++v20;
					++v21;
					if (v20 >= v12)
						goto LABEL_32;
				}
				v26 = &qword_140963AE0;
				v27 = 1i64;
			}
		}
		else
		{
			v18 = hMem;
			while (1)
			{
				v19 = *(unsigned __int16*)*v18;
				if ((((v19 - 45) & 0xFFFFFFFD) == 0 || (unsigned int)(v19 - 150) <= 1)
					&& !(unsigned int)sub_14018E2C0(*v18 + 2i64, L"dx9"))
				{
					break;
				}
				++v17;
				++v18;
				if (v17 >= v12)
					goto LABEL_26;
			}
			v26 = (__int64*)&unk_140B60388;
			v27 = 2i64;
		}
	}
	else
	{
		v15 = hMem;
		while (1)
		{
			v16 = *(unsigned __int16*)*v15;
			if ((((v16 - 45) & 0xFFFFFFFD) == 0 || (unsigned int)(v16 - 150) <= 1)
				&& !(unsigned int)sub_14018E2C0(*v15 + 2i64, L"dx11"))
			{
				break;
			}
			++v14;
			++v15;
			if (v14 >= v12)
				goto LABEL_20;
		}
		v26 = (__int64*)&unk_140B60380;
		v27 = 1i64;
	}
	v62 = v26;
	v63 = v27;
	v28 = 0i64;
	while (1)
	{
		v29 = HIDWORD(v26[v28]);
		v30 = 0;
		v59 = v26[v28];
		if (v12 > 0)
		{
			v31 = v13;
			while (1)
			{
				v32 = *(unsigned __int16*)*v31;
				if ((((v32 - 45) & 0xFFFFFFFD) == 0 || (unsigned int)(v32 - 150) <= 1)
					&& !(unsigned int)sub_14018E2C0(*v31 + 2i64, L"WaitForVBlank"))
				{
					break;
				}
				++v30;
				++v31;
				if (v30 >= v12)
					goto LABEL_52;
			}
			v29 |= 4u;
		}
	LABEL_52:
		v33 = v59;
		if (v59 == 1)
		{
			v34 = 0;
			if (v12 > 0)
			{
				v35 = v13;
				while (1)
				{
					v36 = *(unsigned __int16*)*v35;
					if ((((v36 - 45) & 0xFFFFFFFD) == 0 || (unsigned int)(v36 - 150) <= 1)
						&& !(unsigned int)sub_14018E2C0(*v35 + 2i64, L"AMDOcclusionPredicates"))
					{
						break;
					}
					++v34;
					++v35;
					if (v34 >= v12)
						goto LABEL_61;
				}
				v29 |= 2u;
			LABEL_61:
				v33 = 1;
			}
		}
		v37 = 0;
		if (v12 > 0)
		{
			while (1)
			{
				v38 = *(unsigned __int16*)*v13;
				if ((((v38 - 45) & 0xFFFFFFFD) == 0 || (unsigned int)(v38 - 150) <= 1)
					&& !(unsigned int)sub_14018E2C0(*v13 + 2i64, L"AMDDynamicTextures"))
				{
					break;
				}
				++v37;
				++v13;
				if (v37 >= v12)
					goto LABEL_69;
			}
			v29 |= 8u;
		}
	LABEL_69:
		v39 = v29;
		v40 = v64;
		v41 = sub_1402514B0(v33, v64[1], v39);
		v42 = v41;
		if (v41 >= 0)
			break;
		if (++v28 >= v63)
		{
			if (v41 == -1609695231)
			{
				v55 = 256i64;
				if (!GetWindowTextW((HWND)v64[1], Buffer, 256))
				{
					v56 = Buffer;
					while (v55 != -2147483390)
					{
						v57 = *(WCHAR*)((char*)v56 + (char*)L"WildStar" - (char*)Buffer);
						if (!v57)
							break;
						*v56++ = v57;
						if (!--v55)
						{
							--v56;
							break;
						}
					}
					*v56 = 0;
				}
				v48 = L"Failed to initialize Direct3D.  Please make sure that your DirectX runtime is up-to-date.  DirectX is avai"
					"lable from http://microsoft.com/directx.";
			}
			else
			{
				if (v41 != -1609695230)
				{
					v66 = 0i64;
					TlsValue = &off_140B5E648;
					Value = TlsGetValue(dwTlsIndex);
					TlsSetValue(dwTlsIndex, &TlsValue);
					v70 = TlsValue;
					v71 = v66;
					*(_QWORD*)&v60 = &off_140B5E648;
					*((_QWORD*)&v60 + 1) = L"Result";
					v72 = Value;
					lpTlsValue[0] = TlsGetValue(dwTlsIndex);
					TlsSetValue(dwTlsIndex, &v60);
					v43 = &unk_140C8A294;
					*(_QWORD*)&v60 = &off_140B5E640;
					v44 = 0x141DDDFF0i64;
				LABEL_85:
					LODWORD(lpTlsValue[1]) = v42;
					v64 = (_QWORD*)v44;
					v73[1] = *(_OWORD*)lpTlsValue;
					v73[0] = v60;
					v50 = sub_1401971E0(v43, 14, &v64, v73, &v70);
					*(_QWORD*)&v60 = &off_140B5E648;
					TlsSetValue(dwTlsIndex, lpTlsValue[0]);
					TlsValue = &off_140B5E648;
					TlsSetValue(dwTlsIndex, Value);
					if (v50)
						DebugBreak();
					goto LABEL_99;
				}
				v45 = 256i64;
				if (!GetWindowTextW((HWND)v64[1], Buffer, 256))
				{
					v46 = Buffer;
					while (v45 != -2147483390)
					{
						v47 = *(WCHAR*)((char*)v46 + (char*)L"WildStar" - (char*)Buffer);
						if (!v47)
							break;
						*v46++ = v47;
						if (!--v45)
						{
							v48 = L"Could not find a Direct3D device that meets minimum hardware requirements.  Please consider upgradin"
								"g your video card.";
							*(v46 - 1) = 0;
							goto LABEL_98;
						}
					}
					*v46 = 0;
				}
				v48 = L"Could not find a Direct3D device that meets minimum hardware requirements.  Please consider upgrading your video card.";
			}
		LABEL_98:
			MessageBoxW(0i64, v48, Buffer, 0x2010u);
			goto LABEL_99;
		}
		v12 = pNumArgs[0];
		v13 = hMem;
		v26 = v62;
	}
	v49 = (_QWORD*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 24i64))(qword_140C65670);
	v64[10] = *v49;
	v40[11] = v49[1];
	v40[12] = v49[2];
	v40[13] = v49[3];
	v40[14] = v49[4];
	v42 = (*(__int64(__fastcall**)(__int64, _QWORD*))(*(_QWORD*)qword_140C65670 + 192i64))(qword_140C65670, v40 + 15);
	if (v42 < 0)
	{
		v66 = 0i64;
		TlsValue = &off_140B5E648;
		Value = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v70 = TlsValue;
		v71 = v66;
		*(_QWORD*)&v60 = &off_140B5E648;
		*((_QWORD*)&v60 + 1) = L"Result";
		v72 = Value;
		lpTlsValue[0] = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &v60);
		v43 = &unk_140C8A290;
		*(_QWORD*)&v60 = &off_140B5E640;
		v44 = 0x141DDE040i64;
		goto LABEL_85;
	}
	v51 = (__int64*)v40[15];
	lpTlsValue[0] = sub_140252318;
	v52 = *v51;
	LODWORD(v60) = 0;
	*((_QWORD*)&v60 + 1) = v40;
	lpTlsValue[1] = 0i64;
	(*(void(__fastcall**)(__int64*, _QWORD, __int128*))(v52 + 24))(v51, 0i64, &v60);
	v53 = (__int64*)v40[15];
	lpTlsValue[0] = sub_140252310;
	v54 = *v53;
	LODWORD(v60) = 0;
	*((_QWORD*)&v60 + 1) = v40;
	lpTlsValue[1] = 0i64;
	(*(void(__fastcall**)(__int64*, __int64, __int128*))(v54 + 24))(v53, 1i64, &v60);
	v42 = (*(__int64(__fastcall**)(_QWORD*))(*v40 + 40i64))(v40);
	if (v42 >= 0)
	{
		v42 = (*(__int64(__fastcall**)(_QWORD*))(*v40 + 8i64))(v40);
		if (v42 >= 0)
		{
			*((_DWORD*)v40 + 16) = v40[8] & 0xFFFFFE3B | 0x44;
			goto LABEL_100;
		}
	}
LABEL_99:
	v1 = v42;
LABEL_100:
	LocalFree(hMem);
	return v1;
}
// 140251CCE: conditional instruction was optimized away because rcx.8 is in (1..3)
// 140251F88: conditional instruction was optimized away because rbx.8!=0
// 1402521F6: conditional instruction was optimized away because rbx.8!=0
// 140252318: using guessed type __int64 __fastcall sub_140252318();
// 140963AE0: using guessed type __int64 qword_140963AE0;
// 140A42C90: using guessed type wchar_t aResult[7];
// 140A43680: using guessed type wchar_t aS_9[4];
// 140AE37F8: using guessed type wchar_t aFulldump[9];
// 140AE3810: using guessed type wchar_t aUser32Dll_0[11];
// 140AE38A8: using guessed type wchar_t aAmdocclusionpr[23];
// 140AE38D8: using guessed type wchar_t aAmddynamictext[19];
// 140AE3900: using guessed type wchar_t aDx9legacy[10];
// 140AE3918: using guessed type wchar_t aWaitforvblank[14];
// 140AE3938: using guessed type wchar_t aDx9_0[4];
// 140AE3940: using guessed type wchar_t aDx9ex[6];
// 140AE3968: using guessed type wchar_t aDx11_0[5];
// 140AE3BE0: using guessed type wchar_t aCouldNotFindAD[119];
// 140B5E640: using guessed type void *off_140B5E640;
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C63724: using guessed type int dword_140C63724;
// 140C65670: using guessed type __int64 qword_140C65670;
// 140251A40: using guessed type int pNumArgs[4];

