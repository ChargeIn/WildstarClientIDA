#include "../winhttp.h"

//----- (0000000140019670) ----------------------------------------------------
char* __fastcall sub_140019670(char* a1, char* a2)
{
	__int64 v4; // rcx
	int v5; // eax
	_DWORD* v6; // rdx
	__int64 v7; // rdx
	_DWORD* v8; // rcx
	signed __int64 v9; // rbx
	__int64 v10; // r8
	char v11; // al
	char* v12; // rax
	__int16 v13; // cx

	*(_DWORD*)a1 = *(_DWORD*)a2;
	v4 = (__int64)(a1 + 24);
	*(_DWORD*)(v4 - 20) = *((_DWORD*)a2 + 1);
	v5 = *((_DWORD*)a2 + 2);
	v6 = a2 + 24;
	*(_DWORD*)(v4 - 16) = v5;
	*(_DWORD*)(v4 - 12) = *(v6 - 3);
	*(_BYTE*)(v4 - 8) = *((_BYTE*)v6 - 8);
	if (v6 != (_DWORD*)v4)
		sub_14001B1A0(v4, *((int**)v6 + 1), *((int**)v6 + 2));
	v7 = 22i64;
	v8 = a1 + 56;
	v9 = a2 - a1;
	v10 = 22i64;
	do
	{
		v11 = *((_BYTE*)v8 + v9);
		v8 = (_DWORD*)((char*)v8 + 1);
		*((_BYTE*)v8 - 1) = v11;
		--v10;
	} while (v10);
	v12 = a1 + 78;
	do
	{
		v13 = *(_WORD*)&v12[v9];
		v12 += 2;
		*((_WORD*)v12 - 1) = v13;
		--v7;
	} while (v7);
	return a1;
}

