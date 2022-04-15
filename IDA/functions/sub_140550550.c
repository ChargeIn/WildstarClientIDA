//----- (0000000140550550) ----------------------------------------------------
_QWORD* __fastcall sub_140550550(__int64 a1, _QWORD* a2)
{
	int* v4; // rsi
	__int64 v6; // rbx
	int v7; // edx
	int* v8; // rax
	__int64 v9; // r8
	int* v10; // rdx
	int v11; // [rsp+30h] [rbp-28h] BYREF
	__int64 v12; // [rsp+38h] [rbp-20h]

	if ((unsigned int)sub_140552F50(a1)
		|| (unsigned int)sub_1405FBC40(*(_QWORD**)qword_140C65B80, **(_DWORD**)(a1 + 8)) == 3)
	{
		v6 = 0i64;
		v7 = 0;
		if (*(_QWORD*)(a1 + 128))
			v7 = **(_DWORD**)(a1 + 120);
		v8 = (int*)sub_1404835C0(qword_140C65918, v7);
		v10 = (int*)*((_QWORD*)sub_14054F9E0(&v11, *(_DWORD*)(*(_QWORD*)(a1 + 8) + 144i64), v9, 0i64, v8, 0i64) + 1);
		a2[1] = 0i64;
		a2[2] = 0i64;
		a2[3] = 0i64;
		if (*(_WORD*)v10)
		{
			do
				++v6;
			while (*((_WORD*)v10 + v6));
		}
		sub_14001C1B0(a2, v10, (__int64)v10 + 2 * v6);
		if (v12)
			sub_14018B900(v12, 0);
	}
	else
	{
		a2[1] = 0i64;
		a2[2] = 0i64;
		a2[3] = 0i64;
		v4 = sub_14018B280(2i64, 0);
		a2[3] = (char*)v4 + 2;
		a2[1] = v4;
		a2[2] = v4;
		sub_1407DB590(v4, dword_1409F284C, 0i64);
		a2[2] = v4;
		if (v4)
		{
			*(_WORD*)v4 = 0;
			return a2;
		}
	}
	return a2;
}
// 140550623: variable 'v9' is possibly undefined
// 1409F284C: using guessed type int dword_1409F284C[8];
// 140C65918: using guessed type __int64 qword_140C65918;
// 140C65B80: using guessed type __int64 qword_140C65B80;

