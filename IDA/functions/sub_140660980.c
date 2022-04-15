//----- (0000000140660980) ----------------------------------------------------
__int64 __fastcall sub_140660980(_QWORD* a1)
{
	int* v2; // rax
	__int64 v3; // rdi
	int v4; // eax
	int v5; // eax
	__int64 v6; // rcx
	signed int v7; // ecx
	__int64 v8; // rax
	__int64 v9; // rcx
	__int16* v10; // rax
	unsigned __int64* v11; // rdx
	unsigned __int64 v12; // r8
	__int64 v14; // [rsp+20h] [rbp-28h] BYREF
	__int64 v15; // [rsp+28h] [rbp-20h]

	v2 = (int*)sub_1406622C0((__int64)a1, 1);
	if (v2
		&& (v3 = sub_1403D90D0(qword_140C65898, *v2)) != 0
		&& (v4 = sub_140056D60(a1, 2u), v5 = sub_1406621F0(v4), v5 < 11)
		&& (v6 = *(_QWORD*)(v3 + 224)) != 0
		&& (v7 = *(_DWORD*)(v6 + 4i64 * v5 + 100), v7 < 31)
		&& (v8 = sub_140249340(v7)) != 0
		&& (v10 = sub_14034BDD0(v9, *(_DWORD*)(v8 + 4))) != 0i64)
	{
		v11 = (unsigned __int64*)sub_14018F0E0(&v14, (unsigned __int16*)v10)[1];
		if (v11)
		{
			v12 = -1i64;
			do
				++v12;
			while (*((_BYTE*)v11 + v12));
			sub_140058710((__int64)a1, v11, v12);
		}
		else
		{
			*(_DWORD*)(a1[2] + 8i64) = 0;
			a1[2] += 16i64;
		}
		if (v15)
		{
			sub_14018B900(v15, 0);
			return 1i64;
		}
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
	}
	return 1i64;
}
// 1406609FF: variable 'v9' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;

