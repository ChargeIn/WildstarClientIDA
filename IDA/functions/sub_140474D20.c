//----- (0000000140474D20) ----------------------------------------------------
__int64 __fastcall sub_140474D20(__int64 a1, __int64 a2, int a3, float a4)
{
	__int64 v4; // rdi
	int* v7; // rax
	int* v8; // rax
	int v9; // ecx
	int v10; // eax
	__int64 v11; // rax
	__int64 v12; // rsi
	__int64 v13; // rbp
	__int64 result; // rax

	*(float*)(a1 + 4) = a4;
	*(_DWORD*)a1 = a3;
	v4 = 0i64;
	*(_OWORD*)(a1 + 16) = 0i64;
	*(_QWORD*)(a1 + 40) = 0i64;
	*(_QWORD*)(a1 + 48) = 0i64;
	v7 = sub_14018B280(864i64, 8u);
	if (v7)
		v4 = sub_14013FEB0((__int64)v7, *(_QWORD*)(qword_140C65898 + 29504));
	v8 = (int*)qword_140C63750;
	*(_QWORD*)(a1 + 32) = v4;
	v9 = *v8;
	v10 = dword_140C48100;
	if (v9 < dword_140C48100)
		v10 = v9;
	sub_140141100(v4, flt_140C48110[v10]);
	v11 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a2 + 16i64))(a2);
	v12 = *(_QWORD*)(a1 + 32);
	v13 = v11;
	if (v12 + 24 != v11)
	{
		(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)(v12 + 24) + 120i64))(v12 + 24, 0i64);
		sub_1401A7460(v12 + 24, v13);
	}
	sub_1401411C0(v12);
	result = a1;
	*(_QWORD*)(a1 + 8) = *(_QWORD*)(*(_QWORD*)(a1 + 32) + 840i64);
	return result;
}
// 140C48100: using guessed type int dword_140C48100;
// 140C48110: using guessed type float flt_140C48110[16];
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C65898: using guessed type __int64 qword_140C65898;

