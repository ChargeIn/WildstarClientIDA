//----- (000000014072CD30) ----------------------------------------------------
__int64 __fastcall sub_14072CD30(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rax
	unsigned int* v4; // rdi
	int* v5; // rax
	__int64 v6; // rcx
	__int64 v7; // rax
	unsigned __int64* v8; // rdx
	unsigned __int64 v9; // r8
	int** v10; // rax
	unsigned __int64* v11; // rdx
	unsigned __int64 v12; // r8
	__int64 v14; // [rsp+20h] [rbp-28h] BYREF
	__int64 v15; // [rsp+28h] [rbp-20h]
	int* v16; // [rsp+58h] [rbp+10h] BYREF

	if (!*(_QWORD*)(qword_140C65898 + 120)
		|| (v2 = sub_140056AB0(a1, 1u)) == 0
		|| (v3 = *(_QWORD*)(v2 + 8)) == 0
		|| (v4 = (unsigned int*)sub_1401F1860(*(_DWORD*)(v3 + 8))) == 0i64)
	{
		v8 = (unsigned __int64*)sub_14018F0E0(&v14, word_1409F8F14)[1];
		if (v8)
		{
			v9 = -1i64;
			do
				++v9;
			while (*((_BYTE*)v8 + v9));
			goto LABEL_25;
		}
	LABEL_22:
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		goto LABEL_26;
	}
	v5 = (int*)sub_1406622C0((__int64)a1, 2);
	if (!v5 || (v7 = sub_1403D90D0(qword_140C65898, *v5)) == 0)
	{
		v7 = *(_QWORD*)(qword_140C65898 + 120);
		if (!v7)
		{
			v8 = (unsigned __int64*)sub_14018F0E0(&v14, word_1409F8EEC)[1];
			if (v8)
			{
				v9 = -1i64;
				do
					++v9;
				while (*((_BYTE*)v8 + v9));
			LABEL_25:
				sub_140058710((__int64)a1, v8, v9);
			LABEL_26:
				if (v15)
					sub_14018B900(v15, 0);
				return 1i64;
			}
			goto LABEL_22;
		}
	}
	v10 = sub_1403CA8B0(v6, &v16, *v4, v7);
	v11 = (unsigned __int64*)sub_14018F0E0(&v14, (unsigned __int16*)*v10)[1];
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
		sub_14018B900(v15, 0);
	if (v16)
	{
		(*(void(__fastcall**)(int*))(*((_QWORD*)v16 - 2) + 8i64))(v16 - 4);
		return 1i64;
	}
	return 1i64;
}
// 14072CDFB: variable 'v6' is possibly undefined
// 1409F8EEC: using guessed type unsigned __int16 word_1409F8EEC[16];
// 1409F8F14: using guessed type unsigned __int16 word_1409F8F14[48];
// 140C65898: using guessed type __int64 qword_140C65898;

