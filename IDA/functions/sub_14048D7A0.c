#include "../winhttp.h"

//----- (000000014048D7A0) ----------------------------------------------------
__int64 __fastcall sub_14048D7A0(__int64 a1, unsigned int a2)
{
	__int64 v2; // rdi
	__int64 v3; // r9
	__int64 v4; // r8
	__int64 v5; // rax
	__int64 result; // rax
	_QWORD* v7; // rbx
	__int64 v8; // [rsp+30h] [rbp+8h]
	unsigned int v9; // [rsp+38h] [rbp+10h] BYREF

	v9 = a2;
	v2 = a1 + 168;
	v3 = *(_QWORD*)(a1 + 176);
	v4 = v3;
	v5 = *(_QWORD*)(v3 + 8);
	while (v5)
	{
		if (*(_DWORD*)(v5 + 32) < a2)
		{
			v5 = *(_QWORD*)(v5 + 24);
		}
		else
		{
			v4 = v5;
			v5 = *(_QWORD*)(v5 + 16);
		}
	}
	if (v4 == v3 || (v8 = v4, a2 < *(_DWORD*)(v4 + 32)))
		v8 = *(_QWORD*)(a1 + 176);
	result = v8;
	if (v8 != *(_QWORD*)(a1 + 176))
	{
		v7 = *(_QWORD**)(qword_140C65920 + 8);
		if (v7)
		{
			while (v7[9] != *(_QWORD*)(v8 + 40))
			{
				v7 = (_QWORD*)v7[4];
				if (!v7)
					return sub_14048FC60(v2, &v9);
			}
			(*(void(__fastcall**)(_QWORD*))(*v7 + 8i64))(v7);
			(*(void(__fastcall**)(_QWORD*, __int64)) * v7)(v7, 1i64);
		}
		return sub_14048FC60(v2, &v9);
	}
	return result;
}
// 140C65920: using guessed type __int64 qword_140C65920;

