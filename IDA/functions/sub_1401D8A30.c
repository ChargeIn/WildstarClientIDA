//----- (00000001401D8A30) ----------------------------------------------------
__int64 __fastcall sub_1401D8A30(__int64 a1)
{
	int* v2; // rax
	__int64 v3; // rcx
	__int64 v4; // r8
	unsigned int v5; // edi
	void(__fastcall * **v6)(_QWORD); // rsi
	int v7; // eax
	int* v8; // rbx
	int v10[6]; // [rsp+30h] [rbp-18h] BYREF
	int* v11; // [rsp+58h] [rbp+10h] BYREF

	v2 = sub_14018B280(176i64, 0);
	v5 = 0;
	if (v2)
		v6 = (void(__fastcall***)(_QWORD))sub_1401DA060((__int64)v2, a1);
	else
		v6 = 0i64;
	v11 = 0i64;
	v7 = sub_14019E010(v3, v6, v4, 0i64, &v11);
	v8 = v11;
	if (v7 < 0
		|| (v10[0] = -1,
			(*(void(__fastcall**)(int*, int*))(*(_QWORD*)v11 + 32i64))(v11, v10),
			v7 = (*(__int64(__fastcall**)(int*, _QWORD))(*(_QWORD*)v8 + 40i64))(v8, 0i64),
			v7 < 0))
	{
		v5 = v7;
	}
	if (v8)
		(*(void(__fastcall**)(int*))(*(_QWORD*)v8 + 8i64))(v8);
	if (v6)
		(*v6)[1](v6);
	return v5;
}
// 1401D8A7D: variable 'v3' is possibly undefined
// 1401D8A7D: variable 'v4' is possibly undefined
// 1401D8A30: using guessed type int var_18[6];

