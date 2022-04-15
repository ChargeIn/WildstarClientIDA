#include "../winhttp.h"

//----- (00000001400C5220) ----------------------------------------------------
__int64 __fastcall sub_1400C5220(__int64 a1)
{
	__int64 v1; // rdi
	__int64 v2; // r10
	__int64 v4; // r8
	_DWORD* v5; // rdx
	char* v6; // rbx
	__int64 v7; // rcx
	int v8; // eax
	__int64 v9; // rdx
	_DWORD* v10; // rcx
	int v11; // eax

	v1 = a1 + 16;
	*(_DWORD*)a1 = 0;
	v2 = 4i64;
	v4 = a1 + 32;
	v5 = (_DWORD*)(a1 + 80);
	v6 = (char*)&unk_140A14E90 - a1 - 16;
	*(_DWORD*)(a1 + 96) = 0;
	v7 = 4i64;
	do
	{
		v8 = *(_DWORD*)((char*)v5 + (_QWORD)v6 - 64);
		*v5 = 0;
		v4 += 8i64;
		*(v5 - 4) = v8;
		*(_QWORD*)(v4 - 8) = 0i64;
		++v5;
		--v7;
	} while (v7);
	*(_DWORD*)(v1 + 80) |= 0x300u;
	*(_DWORD*)(a1 + 192) = 0;
	v9 = a1 + 128;
	v10 = (_DWORD*)(a1 + 176);
	do
	{
		v11 = *(_DWORD*)((char*)v10 + (_QWORD)((char*)&unk_140A14E90 - a1 - 112) - 64);
		*v10 = 0;
		v9 += 8i64;
		*(v10 - 4) = v11;
		*(_QWORD*)(v9 - 8) = 0i64;
		++v10;
		--v2;
	} while (v2);
	*(_DWORD*)(a1 + 192) |= 0x300u;
	*(_DWORD*)(a1 + 216) = dword_140C636A8;
	*(_QWORD*)(a1 + 208) = off_140B54E00;
	*(_QWORD*)(a1 + 232) = 0i64;
	*(_DWORD*)(a1 + 224) = 0;
	*(_BYTE*)(a1 + 228) = 0;
	*(_QWORD*)(a1 + 240) = 0i64;
	return a1;
}
// 140B54E00: using guessed type __int64 (__fastcall *off_140B54E00[27])();
// 140C636A8: using guessed type int dword_140C636A8;

