//----- (00000001401D8220) ----------------------------------------------------
__int64 __fastcall sub_1401D8220(__int64 a1, __int64 a2)
{
	int* v4; // rax
	__int64 v5; // rcx
	__int64 v6; // r8
	unsigned int v7; // esi
	void(__fastcall * **v8)(_QWORD); // rdi
	int v9; // eax
	int* v10; // rbx
	int v11[6]; // [rsp+30h] [rbp-18h] BYREF
	int* v12; // [rsp+50h] [rbp+8h] BYREF

	if ((*(_BYTE*)(a1 + 544) & 2) == 0)
		return 2147942405i64;
	if (a2 == *(_QWORD*)(a1 + 560))
		return 0i64;
	*(_QWORD*)(a1 + 560) = a2;
	v4 = sub_14018B280(184i64, 0);
	v7 = 0;
	if (v4)
		v8 = (void(__fastcall***)(_QWORD))sub_1401D8D20((__int64)v4, a1, *(_QWORD*)(a1 + 560));
	else
		v8 = 0i64;
	v12 = 0i64;
	v9 = sub_14019E010(v5, v8, v6, 0i64, &v12);
	v10 = v12;
	if (v9 < 0
		|| (v11[0] = -1,
			(*(void(__fastcall**)(int*, int*))(*(_QWORD*)v12 + 32i64))(v12, v11),
			v9 = (*(__int64(__fastcall**)(int*, _QWORD))(*(_QWORD*)v10 + 40i64))(v10, 0i64),
			v9 < 0))
	{
		v7 = v9;
	}
	if (v10)
		(*(void(__fastcall**)(int*))(*(_QWORD*)v10 + 8i64))(v10);
	if (v8)
		(*v8)[1](v8);
	return v7;
}
// 1401D82A1: variable 'v5' is possibly undefined
// 1401D82A1: variable 'v6' is possibly undefined
// 1401D8220: using guessed type int var_18[6];

