#include "../winhttp.h"

//----- (00000001404DDD60) ----------------------------------------------------
void __fastcall sub_1404DDD60(__int64 a1, __int64 a2)
{
	__int16* v3; // rax
	unsigned int v4; // esi
	__int64 v5; // rdx
	int* v6; // rdi
	int* v7; // rbp
	__int64 v8; // r15
	int* v9; // rax
	__int64 v10; // rcx
	char v11[8]; // [rsp+20h] [rbp-38h] BYREF
	int* v12; // [rsp+28h] [rbp-30h]
	int* v13; // [rsp+30h] [rbp-28h]
	__int64 v14; // [rsp+38h] [rbp-20h]

	if (a2)
	{
		v3 = sub_14034BDD0(a1, *(_DWORD*)(a2 + 12));
		v4 = 0;
		v5 = 0i64;
		v12 = 0i64;
		v13 = 0i64;
		v14 = 0i64;
		v6 = (int*)v3;
		v7 = 0i64;
		if (*v3)
		{
			do
				++v5;
			while (v3[v5]);
		}
		v8 = (2 * v5) >> 1;
		if ((unsigned __int64)(v8 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
		{
			v7 = sub_14018B280(2 * (v8 + 1), 0);
			v12 = v7;
			v13 = v7;
			v14 = (__int64)v7 + 2 * v8 + 2;
		}
		sub_1407DB590(v7, v6, 2 * v8);
		v9 = (int*)((char*)v7 + 2 * v8);
		v13 = v9;
		if (v9)
			*(_WORD*)v9 = 0;
		(*(void(__fastcall**)(__int64, char*))(*(_QWORD*)a1 + 88i64))(a1, v11);
		if (v12)
			sub_14018B900((__int64)v12, 0);
		if (qword_140C65898)
		{
			v10 = *(_QWORD*)(qword_140C65898 + 7152);
			if (v10)
				v4 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v10 + 24i64))(v10);
			(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)a1 + 128i64))(a1, v4);
		}
	}
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 1404DDD60: using guessed type char var_38[8];

