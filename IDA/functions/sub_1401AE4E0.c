#include "../winhttp.h"

//----- (00000001401AE4E0) ----------------------------------------------------
__int64 __fastcall sub_1401AE4E0(__int64 a1)
{
	unsigned int v2; // r11d
	_DWORD* v3; // rbx
	__int64 v4; // rcx
	int v5; // r8d
	_DWORD* v6; // rbx
	__int64 v7; // rcx
	int v8; // r8d
	__int64 v9; // rcx
	unsigned int v10; // edx
	unsigned int v11; // edx

	if (*(_DWORD*)(a1 + 2512) >= 0x270u)
	{
		v2 = 0;
		v3 = (_DWORD*)(a1 + 16);
		do
		{
			v4 = v2 + 397;
			++v2;
			v5 = *v3 ^ v3[1];
			++v3;
			*(v3 - 1) = ((*(v3 - 1) ^ v5 & 0x7FFFFFFFu) >> 1) ^ *(_DWORD*)(a1 + 4 * v4 + 16) ^ *(_DWORD*)(a1 + 4i64 * ((*((_BYTE*)v3 - 4) ^ (unsigned __int8)v5) & 1) + 2516);
		} while (v2 < 0xE3);
		if (v2 < 0x26F)
		{
			v6 = (_DWORD*)(a1 + 16 + 4i64 * (int)v2);
			do
			{
				v7 = v2 - 227;
				++v2;
				v8 = v6[1] ^ *v6;
				++v6;
				*(v6 - 1) = ((*(v6 - 1) ^ v8 & 0x7FFFFFFFu) >> 1) ^ *(_DWORD*)(a1 + 4 * v7 + 16) ^ *(_DWORD*)(a1 + 4i64 * ((*((_BYTE*)v6 - 4) ^ (unsigned __int8)v8) & 1) + 2516);
			} while (v2 < 0x26F);
		}
		*(_QWORD*)(a1 + 2508) = ((*(_DWORD*)(a1 + 2508) ^ (*(_DWORD*)(a1 + 16) ^ *(_DWORD*)(a1 + 2508)) & 0x7FFFFFFFu) >> 1) ^ *(_DWORD*)(a1 + 1600) ^ *(_DWORD*)(a1 + 4i64 * (*(_BYTE*)(a1 + 16) & 1) + 2516);
	}
	v9 = *(int*)(a1 + 2512);
	v10 = *(_DWORD*)(a1 + 4 * v9 + 16);
	*(_DWORD*)(a1 + 2512) = v9 + 1;
	v11 = ((((v10 >> 11) ^ v10) & 0xFF3A58AD) << 7) ^ (v10 >> 11) ^ v10;
	return ((v11 & 0xFFFFDF8C) << 15) ^ v11 ^ ((((v11 & 0xFFFFDF8C) << 15) ^ v11) >> 18);
}

