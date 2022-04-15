#include "../winhttp.h"

//----- (00000001402698C0) ----------------------------------------------------
__int64 __fastcall sub_1402698C0(__int64 a1)
{
	UINT SystemDirectoryW; // eax
	HMODULE LibraryW; // rax
	int v4; // ebx
	FARPROC Direct3DCreate9Ex; // rax
	IDirect3D9* (__stdcall * Direct3DCreate9)(UINT); // rax
	__int64 v7; // rax
	void** v8; // rbx
	unsigned int* v9; // r14
	__int64 v10; // rbp
	__int64 v11; // r15
	__int64 v12; // rdi
	char* v13; // rsi
	__int64 v14; // rax
	int* v15; // rax
	int v16; // r8d
	int v17; // r10d
	int* v18; // r11
	int* v19; // rdx
	char* v20; // r9
	__int64 v21; // rsi
	char v22; // al
	WCHAR Buffer[264]; // [rsp+20h] [rbp-248h] BYREF

	*(_DWORD*)(a1 + 6584) = GetCurrentThreadId();
	SystemDirectoryW = GetSystemDirectoryW(Buffer, 0x104u);
	if (SystemDirectoryW)
	{
		if ((int)sub_14001B370(&Buffer[SystemDirectoryW], 260i64 - SystemDirectoryW, L"\\%s", L"d3d9.dll") >= 0)
			LibraryW = LoadLibraryW(Buffer);
		else
			LibraryW = 0i64;
	}
	else
	{
		LibraryW = 0i64;
	}
	*(_QWORD*)(a1 + 10432) = LibraryW;
	if (!LibraryW)
		return 2685272065i64;
	D3DPERF_SetOptions = (__int64(__fastcall*)(_QWORD))GetProcAddress(LibraryW, "D3DPERF_SetOptions");
	if (!D3DPERF_SetOptions)
		return 2685272065i64;
	D3DPERF_GetStatus = (__int64)GetProcAddress(*(HMODULE*)(a1 + 10432), "D3DPERF_GetStatus");
	if (!D3DPERF_GetStatus)
		return 2685272065i64;
	D3DPERF_BeginEvent = (__int64)GetProcAddress(*(HMODULE*)(a1 + 10432), "D3DPERF_BeginEvent");
	if (!D3DPERF_BeginEvent)
		return 2685272065i64;
	D3DPERF_EndEvent = (__int64)GetProcAddress(*(HMODULE*)(a1 + 10432), "D3DPERF_EndEvent");
	if (!D3DPERF_EndEvent)
		return 2685272065i64;
	v4 = ~*(_DWORD*)(a1 + 6240);
	D3DPERF_SetOptions(1i64);
	if ((v4 & 1) != 0)
	{
		Direct3DCreate9Ex = GetProcAddress(*(HMODULE*)(a1 + 10432), "Direct3DCreate9Ex");
		if (Direct3DCreate9Ex)
		{
			if (((int(__fastcall*)(__int64, __int64))Direct3DCreate9Ex)(32i64, a1 + 6600) < 0
				|| (***(int(__fastcall****)(_QWORD, void*, __int64))(a1 + 6600))(
					*(_QWORD*)(a1 + 6600),
					&unk_140964770,
					a1 + 6592) < 0)
			{
				return 2685272065i64;
			}
		}
	}
	if (!*(_QWORD*)(a1 + 6592))
	{
		Direct3DCreate9 = (IDirect3D9 * (__stdcall*)(UINT))GetProcAddress(*(HMODULE*)(a1 + 10432), "Direct3DCreate9");
		if (!Direct3DCreate9)
			return 2685272065i64;
		v7 = ((__int64(__fastcall*)(__int64))Direct3DCreate9)(32i64);
		*(_QWORD*)(a1 + 6592) = v7;
		if (!v7)
			return 2685272065i64;
	}
	if (*(_QWORD*)(a1 + 6600))
	{
		*(_QWORD*)(a1 + 7032) = &unk_140AE7A48;
		*(_QWORD*)(a1 + 7040) = &unk_140AE7A78;
		*(_QWORD*)(a1 + 7048) = &unk_140AE7AA0;
		*(_QWORD*)(a1 + 7056) = &unk_140AE7AC0;
		*(_DWORD*)(a1 + 6632) = sub_140193C40();
	}
	else
	{
		*(_DWORD*)(a1 + 6632) = 0;
		*(_QWORD*)(a1 + 7032) = &unk_140AE7B18;
		*(_QWORD*)(a1 + 7040) = &unk_140AE7A60;
		*(_QWORD*)(a1 + 7048) = &unk_140AE7A90;
		*(_QWORD*)(a1 + 7056) = &unk_140AE7AB0;
	}
	v8 = &off_140C38350;
	v9 = (unsigned int*)&unk_140AE5D90;
	v10 = 23i64;
	v11 = a1 - (_QWORD)&off_140C38350 + 6656;
	do
	{
		v12 = *v9;
		v13 = (char*)*v8;
		v14 = 8i64 * (unsigned int)(v12 + 1);
		if (!is_mul_ok((unsigned int)(v12 + 1), 8ui64))
			v14 = -1i64;
		v15 = sub_14018B280(v14, 0);
		v16 = -1;
		v17 = 0;
		v18 = v15;
		if ((_DWORD)v12)
		{
			v19 = (int*)(v13 + 4);
			v20 = (char*)(v15 + 1);
			v21 = (unsigned int)v12;
			do
			{
				if (v16 != v19[1])
				{
					v16 = v19[1];
					v17 = 0;
				}
				*((_WORD*)v20 - 2) = v16;
				*((_WORD*)v20 - 1) = v17;
				v22 = byte_140AE7980[4 * *v19];
				v20[1] = 0;
				v19 += 4;
				*v20 = v22;
				v20 += 8;
				*(v20 - 6) = byte_140AE79B0[4 * *(v19 - 5)];
				*(v20 - 5) = byte_140AE7A00[4 * *(v19 - 5)];
				v17 += dword_140AE4D78[*(v19 - 4)];
				--v21;
			} while (v21);
		}
		v18[2 * v12] = 255;
		v18[2 * v12 + 1] = 17;
		*(void**)((char*)v8++ + v11) = v18;
		++v9;
		--v10;
	} while (v10);
	return 0i64;
}
// 140A43680: using guessed type wchar_t aS_9[4];
// 140AE4D78: using guessed type int dword_140AE4D78[47];
// 140AE6810: using guessed type wchar_t aD3d9Dll_0[9];
// 140C38350: using guessed type void *off_140C38350;
// 140C65730: using guessed type __int64 D3DPERF_GetStatus;
// 140C65738: using guessed type __int64 D3DPERF_BeginEvent;
// 140C65740: using guessed type __int64 D3DPERF_EndEvent;
// 140C65770: using guessed type __int64 (__fastcall *D3DPERF_SetOptions)(_QWORD);

