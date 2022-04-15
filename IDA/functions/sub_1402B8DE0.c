#include "../winhttp.h"

//----- (00000001402B8DE0) ----------------------------------------------------
__int64 __fastcall sub_1402B8DE0(__int64 a1)
{
	unsigned int v1; // r8d
	unsigned int v3; // eax
	unsigned int v4; // eax
	int v5; // ecx
	int v6; // eax
	bool v7; // zf
	__int64 v8; // rcx
	unsigned __int64 v9; // rbp
	int* v10; // rax
	unsigned int v11; // edi
	__int64 v12; // rbx
	int v13; // eax
	HBITMAP DIBSection; // rax

	v1 = *(_DWORD*)(a1 + 144);
	v3 = ((*(_DWORD*)(a1 + 148) * v1 + 7) & 0xFFFFFFF8) / v1;
	*(_DWORD*)(a1 + 148) = v3;
	v4 = (((v1 * v3) >> 3) + 3) & 0xFFFFFFFC;
	*(_DWORD*)(a1 + 156) = v4;
	v5 = 40;
	if (v1 == 1)
		v5 = 48;
	v6 = *(_DWORD*)(a1 + 152) * v4;
	v7 = v6 + v5 == 0;
	v8 = (unsigned int)(v6 + v5);
	v9 = (unsigned int)v8;
	if (v7)
	{
		v11 = 0;
		v12 = 0i64;
	}
	else
	{
		v10 = sub_14018B280(v8 + 16, 0);
		v11 = 0;
		if (v10)
		{
			v12 = (__int64)(v10 + 4);
			*(_QWORD*)v10 = &off_140B5F110;
		}
		else
		{
			v12 = 16i64;
		}
	}
	sub_1407E4830((int*)v12, 0i64, v9);
	*(_DWORD*)v12 = 40;
	*(_DWORD*)(v12 + 4) = *(_DWORD*)(a1 + 148);
	v13 = *(_DWORD*)(a1 + 152);
	*(_DWORD*)(v12 + 16) = 0;
	*(_DWORD*)(v12 + 8) = -v13;
	*(_WORD*)(v12 + 12) = 1;
	*(_WORD*)(v12 + 14) = *(_WORD*)(a1 + 144);
	if (*(_DWORD*)(a1 + 144) == 1)
	{
		*(_WORD*)(v12 + 41) = 0;
		*(_BYTE*)(v12 + 40) = 0;
		*(_WORD*)(v12 + 45) = -1;
		*(_BYTE*)(v12 + 44) = -1;
	}
	DIBSection = CreateDIBSection(*(HDC*)(a1 + 104), (const BITMAPINFO*)v12, 0, (void**)(a1 + 160), 0i64, 0);
	*(_QWORD*)(a1 + 128) = DIBSection;
	if (!DIBSection)
		v11 = -2147024882;
	(**(void(__fastcall***)(__int64))(v12 - 16))(v12 - 16);
	return v11;
}
// 140B5F110: using guessed type __int64 (__fastcall *off_140B5F110)();

