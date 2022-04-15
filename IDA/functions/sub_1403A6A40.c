#include "../winhttp.h"

//----- (00000001403A6A40) ----------------------------------------------------
__int64 __fastcall sub_1403A6A40(__int64 a1, int a2)
{
	__int64 v2; // rbx
	__int64 v4; // rax
	__m128* v5; // r11
	__int64 result; // rax
	int* v7; // rcx
	__int64 v8; // rax
	int v9; // edx
	__int64 v10; // [rsp+30h] [rbp+8h] BYREF

	v10 = a1;
	v2 = qword_140C65898;
	v4 = sub_1403D90D0(qword_140C65898, a2);
	if (!v4 || *(_DWORD*)(v4 + 128) != 20)
		return 3i64;
	if (!(unsigned int)sub_1403A6930(v2))
		return 19i64;
	result = sub_1403AD990(*(__m128**)(v2 + 120), v5);
	if (!(_DWORD)result)
	{
		v7 = sub_14018B280(64i64, 0);
		if (v7)
		{
			*(_QWORD*)v7 = 0i64;
			*((_QWORD*)v7 + 1) = 0i64;
			v7[4] = 0;
			*((_QWORD*)v7 + 4) = 0i64;
			*((_QWORD*)v7 + 3) = 0i64;
			*((_QWORD*)v7 + 5) = 0i64;
			*((_QWORD*)v7 + 6) = 0i64;
			v7[14] = 0;
		}
		else
		{
			v7 = 0i64;
		}
		v8 = *(_QWORD*)(v2 + 120);
		*(_QWORD*)(v2 + 26392) = v7;
		v9 = *(_DWORD*)(v8 + 8);
		if (v9 && a2)
		{
			*v7 = v9;
			v7[2] = a2;
			sub_1405598D0(v2 + 28848);
			LODWORD(v10) = a2;
			sub_1403F4900(v2, 0x192u, (__int64)&v10);
			return 0i64;
		}
		else
		{
			return 1i64;
		}
	}
	return result;
}
// 1403A6A9C: variable 'v5' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;

