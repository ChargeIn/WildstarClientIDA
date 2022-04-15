#include "../winhttp.h"

//----- (00000001403C6450) ----------------------------------------------------
__int64 __fastcall sub_1403C6450(__int64 a1, __int64 a2)
{
	__int64 v3; // r8
	__int64 v4; // r9
	__int64 v5; // rcx
	__int16 v7; // ax
	__int64 v8; // rcx
	int v9; // eax
	__int64 v10; // rdx
	int v11; // eax

	v3 = a1 + 2;
	v4 = a2 - a1;
	v5 = 16i64;
	do
	{
		v7 = *(_WORD*)(v4 + v3 - 2);
		v3 += 4i64;
		*(_WORD*)(v3 - 6) = v7;
		*(_WORD*)(v3 - 4) = *(_WORD*)(v4 + v3 - 4);
		--v5;
	} while (v5);
	v8 = a1 + 92;
	*(_DWORD*)(a1 + 64) = *(_DWORD*)(a2 + 64);
	*(_DWORD*)(a1 + 68) = *(_DWORD*)(a2 + 68);
	*(_DWORD*)(a1 + 72) = *(_DWORD*)(a2 + 72);
	*(_DWORD*)(a1 + 76) = *(_DWORD*)(a2 + 76);
	*(_DWORD*)(a1 + 80) = *(_DWORD*)(a2 + 80);
	*(_DWORD*)(a1 + 84) = *(_DWORD*)(a2 + 84);
	v9 = *(_DWORD*)(a2 + 88);
	v10 = 12i64;
	*(_DWORD*)(a1 + 88) = v9;
	do
	{
		v11 = *(_DWORD*)(v8 + v4);
		v8 += 4i64;
		*(_DWORD*)(v8 - 4) = v11;
		--v10;
	} while (v10);
	sub_1403D3D00((_QWORD*)(a1 + 144), (_QWORD*)(a2 + 144));
	*(_DWORD*)(a1 + 176) = *(_DWORD*)(a2 + 176);
	*(_DWORD*)(a1 + 180) = *(_DWORD*)(a2 + 180);
	*(_DWORD*)(a1 + 184) = *(_DWORD*)(a2 + 184);
	*(_DWORD*)(a1 + 188) = *(_DWORD*)(a2 + 188);
	*(_DWORD*)(a1 + 192) = *(_DWORD*)(a2 + 192);
	*(_DWORD*)(a1 + 196) = *(_DWORD*)(a2 + 196);
	*(_DWORD*)(a1 + 200) = *(_DWORD*)(a2 + 200);
	*(_DWORD*)(a1 + 204) = *(_DWORD*)(a2 + 204);
	*(_DWORD*)(a1 + 208) = *(_DWORD*)(a2 + 208);
	*(_DWORD*)(a1 + 212) = *(_DWORD*)(a2 + 212);
	*(_DWORD*)(a1 + 216) = *(_DWORD*)(a2 + 216);
	*(_DWORD*)(a1 + 220) = *(_DWORD*)(a2 + 220);
	*(_DWORD*)(a1 + 224) = *(_DWORD*)(a2 + 224);
	*(_DWORD*)(a1 + 228) = *(_DWORD*)(a2 + 228);
	return a1;
}

