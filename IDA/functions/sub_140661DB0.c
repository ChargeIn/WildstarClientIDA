//----- (0000000140661DB0) ----------------------------------------------------
__int64 __fastcall sub_140661DB0(_QWORD* a1)
{
	int* v2; // rax
	__int64 v3; // rax
	__int64 v4; // rsi
	_DWORD* v5; // rcx
	unsigned int v6; // ebp
	void(__fastcall * **v8)(_QWORD); // rbx
	int* v9; // rax
	int* v10; // rdx
	__int64 v11; // rax
	unsigned int v12; // edi

	v2 = (int*)sub_1406622C0((__int64)a1, 1);
	if (!v2 || (v3 = sub_1403D90D0(qword_140C65898, *v2), (v4 = v3) == 0) || *(_DWORD*)(v3 + 128) != 20)
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		return 1i64;
	}
	v5 = (_DWORD*)(a1[3] + 16i64);
	if ((unsigned __int64)v5 >= a1[2] || v5 == dword_140A12138 || *(int*)(a1[3] + 24i64) <= 0)
	{
		v6 = 1;
	}
	else
	{
		v6 = sub_140056D60(a1, 2u);
		if (v6 > 3)
		{
			*(_DWORD*)(a1[2] + 8i64) = 0;
			a1[2] += 16i64;
			return 1i64;
		}
	}
	v8 = 0i64;
	v9 = sub_14018B280(104i64, 0);
	if (v9)
	{
		v10 = (int*)&word_140B7B704;
		if (*(_QWORD*)(v4 + 16))
			v10 = *(int**)(v4 + 16);
		v11 = sub_14073E140((__int64)v9, v10, 0i64, v6, 4, *(unsigned int*)(v4 + 8), (_QWORD*)(v4 + 416));
		if (v11)
			v8 = (void(__fastcall***)(_QWORD))v11;
	}
	v12 = sub_14073EB30(a1, v8);
	if (v8)
		(*v8)[1](v8);
	return v12;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B7B704: using guessed type __int16 word_140B7B704;
// 140C65898: using guessed type __int64 qword_140C65898;

