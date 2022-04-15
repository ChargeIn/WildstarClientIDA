#include "../winhttp.h"

//----- (000000014077E150) ----------------------------------------------------
__int64 __fastcall sub_14077E150(__int64 a1)
{
	int v2; // eax
	__int64 v3; // rbx
	int v4; // esi
	__int64 v5; // rax
	__int64 result; // rax
	int* v7; // rax
	int v8; // [rsp+30h] [rbp+8h] BYREF
	int v9; // [rsp+34h] [rbp+Ch]

	v2 = sub_1403CA1D0();
	v3 = 0i64;
	v4 = v2;
	if (v2 || !*(_DWORD*)(a1 + 276))
	{
		if (v2 != *(_DWORD*)(a1 + 276))
		{
			v8 = 0;
			v9 = 11;
			v5 = sub_1403AC780(qword_140C65898 + 160, &v8);
			if (v5)
				sub_1405C7AD0(a1, **(_DWORD**)(v5 + 64), 0);
		}
	}
	else
	{
		*(_DWORD*)(a1 + 276) = 0;
		*(_DWORD*)(a1 + 240) = 0;
		*(_OWORD*)(a1 + 208) = xmmword_140B7AD40;
	}
	result = sub_1405C8EC0(a1);
	if (v4)
	{
	LABEL_10:
		if (!*(_DWORD*)(a1 + 276))
			return result;
		goto LABEL_11;
	}
	if (!*(_DWORD*)(a1 + 276))
	{
		*(_OWORD*)(a1 + 208) = xmmword_140B7AD40;
		*(_DWORD*)(a1 + 240) = 1053609165;
		*(_DWORD*)(a1 + 260) = 1;
		*(_OWORD*)(a1 + 224) = xmmword_140B7B050;
		result = (__int64)sub_14001C2B0(a1 + 80, *(int**)(a1 + 88), *(int**)(a1 + 96));
		goto LABEL_10;
	}
LABEL_11:
	v7 = (int*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1 + 176i64))(a1);
	if (*(_WORD*)v7)
	{
		do
			++v3;
		while (*((_WORD*)v7 + v3));
	}
	return sub_14001C480(a1 + 16, v7, (int*)((char*)v7 + 2 * v3));
}
// 140B7AD40: using guessed type __int128 xmmword_140B7AD40;
// 140B7B050: using guessed type __int128 xmmword_140B7B050;
// 140C65898: using guessed type __int64 qword_140C65898;

