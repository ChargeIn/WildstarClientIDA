#include "../winhttp.h"

//----- (0000000140861990) ----------------------------------------------------
char __fastcall sub_140861990(__int64 a1, __int64 a2, __int64 a3, int a4)
{
	__int64 v4; // rcx
	__int64 v7; // r9
	char v8; // cl
	int i; // edx
	int v10; // eax

	*(_QWORD*)(a1 + 208) = a3;
	*(_BYTE*)(a1 + 216) = 0;
	*(_BYTE*)(a1 + 218) = 1;
	v4 = a1 + 16;
	*(_QWORD*)(v4 + 32) = 0x10000i64;
	*(_BYTE*)(v4 + 71) = 1;
	*(_QWORD*)(v4 + 24) = 0i64;
	*(_QWORD*)(v4 + 40) = 0i64;
	*(_DWORD*)(v4 + 48) = 0xBB80u / a4;
	*(_DWORD*)(v4 + 64) = 0;
	v7 = v4;
	*(float*)(v4 + 60) = (float)*(int*)a2 / (float)a4;
	v8 = 0;
	for (i = *(_DWORD*)(a2 + 4) & 0x3FFFF; i; i &= i - 1)
		++v8;
	*(_BYTE*)(v7 + 69) = v8;
	*(_BYTE*)(v7 + 70) = *(_BYTE*)(a2 + 7) & 0x1F;
	v10 = (*(_DWORD*)(a2 + 4) >> 18) & 0x3F;
	if (v10 == 16)
	{
		if (v8 == 1)
		{
			LOBYTE(v10) = 0;
			*(_DWORD*)(v7 + 56) = 0;
			*(_BYTE*)(v7 + 68) = 0;
		}
		else if (v8 == 2)
		{
			LOBYTE(v10) = 1;
			*(_DWORD*)(v7 + 56) = 0;
			*(_BYTE*)(v7 + 68) = 1;
		}
		else
		{
			*(_DWORD*)(v7 + 56) = 0;
			LOBYTE(v10) = ((unsigned __int8)(v8 - 3) > 1u) + 2;
			*(_BYTE*)(v7 + 68) = v10;
		}
	}
	else if (v10 == 32)
	{
		if (v8 == 1)
		{
			LOBYTE(v10) = 4;
			*(_DWORD*)(v7 + 56) = 0;
			*(_BYTE*)(v7 + 68) = 4;
		}
		else if (v8 == 2)
		{
			LOBYTE(v10) = 5;
			*(_DWORD*)(v7 + 56) = 0;
			*(_BYTE*)(v7 + 68) = 5;
		}
		else
		{
			*(_DWORD*)(v7 + 56) = 0;
			LOBYTE(v10) = ((unsigned __int8)(v8 - 3) > 1u) + 6;
			*(_BYTE*)(v7 + 68) = v10;
		}
	}
	else
	{
		*(_BYTE*)(v7 + 68) = -1;
		*(_DWORD*)(v7 + 56) = 0;
	}
	return v10;
}

