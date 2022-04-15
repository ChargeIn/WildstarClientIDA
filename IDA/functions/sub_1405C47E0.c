#include "../winhttp.h"

//----- (00000001405C47E0) ----------------------------------------------------
__int64 __fastcall sub_1405C47E0(_DWORD* a1, unsigned int a2, int a3, unsigned int* a4)
{
	__int64 v7; // rax
	_DWORD* v8; // rbx
	__int64 result; // rax
	unsigned int v10; // esi
	__int64 v11; // rcx
	unsigned int v12; // eax
	__int64 v13; // rax
	char* v14; // rax

	v7 = sub_140214E00(a2);
	v8 = (_DWORD*)v7;
	if (!v7 || (*(_BYTE*)(v7 + 16) & 1) == 0)
		return 9i64;
	if (*a4 == 16)
		*a4 = *(_DWORD*)(v7 + 12);
	v10 = 0;
	if (a3)
	{
		result = sub_1405C2FD0(a1, *a4, v7, 0i64);
		if ((_DWORD)result)
			return result;
	}
	else
	{
		v11 = *(_QWORD*)(qword_140C65898 + 120);
		if (v11)
			v12 = *(_DWORD*)(v11 + 56);
		else
			v12 = 0;
		if (v12 > v8[7] || v12 < v8[6])
			return 2i64;
		v13 = (int)*a4;
		if ((unsigned int)v13 < 0x10)
			v14 = (char*)&unk_140B51560 + 16 * v13;
		else
			v14 = (char*)&unk_140B51550;
		if ((*((_DWORD*)v14 + 3) & 0x200) != 0 && !a1[108])
			return 7i64;
	}
	if (*a4 == 3 && !a3)
		return 7i64;
	if (*a4 != v8[3])
		return 4;
	return v10;
}
// 140C65898: using guessed type __int64 qword_140C65898;

