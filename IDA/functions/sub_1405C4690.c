#include "../winhttp.h"

//----- (00000001405C4690) ----------------------------------------------------
__int64 __fastcall sub_1405C4690(_DWORD* a1, unsigned int a2, int a3, unsigned int* a4)
{
	__int64 v7; // rax
	unsigned int* v8; // rsi
	__int64 v9; // rax
	_DWORD* v10; // rbx
	__int64 result; // rax
	__int64 v12; // rcx
	unsigned int v13; // eax
	__int64 v14; // rax
	char* v15; // rax

	v7 = sub_140215240(a2);
	v8 = (unsigned int*)v7;
	if (!v7)
		return 9i64;
	v9 = sub_140214E00(*(_DWORD*)(v7 + 16));
	v10 = (_DWORD*)v9;
	if (!v9 || (*(_BYTE*)(v9 + 16) & 1) == 0)
		return 9i64;
	if (*a4 == 16)
		*a4 = *(_DWORD*)(v9 + 12);
	if (a3)
	{
		result = sub_1405C2FD0(a1, *a4, v9, v8);
		if ((_DWORD)result)
			return result;
	}
	else
	{
		v12 = *(_QWORD*)(qword_140C65898 + 120);
		if (v12)
			v13 = *(_DWORD*)(v12 + 56);
		else
			v13 = 0;
		if (v13 > v10[7] || v13 < v10[6])
			return 2i64;
		if (!(unsigned int)sub_1405BEDA0(v12, (__int64)v8))
			return 38i64;
		if (!(unsigned int)sub_1405C3960((__int64)a1, *v8))
			return 44i64;
		v14 = (int)*a4;
		if ((unsigned int)v14 < 0x10)
			v15 = (char*)&unk_140B51560 + 16 * v14;
		else
			v15 = (char*)&unk_140B51550;
		if ((*((_DWORD*)v15 + 3) & 0x200) != 0 && !a1[108])
			return 7i64;
	}
	if (*a4 == 3 && !a3)
		return 7i64;
	result = 0i64;
	if (*a4 != v10[3])
		return 4i64;
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;

