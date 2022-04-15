//----- (00000001402D3190) ----------------------------------------------------
void __fastcall sub_1402D3190(_QWORD* a1)
{
	__int64 v2; // rcx
	__int64 v3; // rcx
	__int64 v4; // rcx
	__int64 i; // rax
	__int64 v6; // rcx
	__int64 v7; // rcx
	__int64 v8; // rcx
	int v9[6]; // [rsp+20h] [rbp-18h] BYREF

	v2 = *a1;
	if (v2)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v2 + 104i64))(v2);
		v3 = *a1;
		v9[0] = -1;
		(*(void(__fastcall**)(__int64, int*))(*(_QWORD*)v3 + 32i64))(v3, v9);
		(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*a1 + 8i64))(*a1);
		*a1 = 0i64;
	}
	v4 = a1[1];
	if (v4)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v4 + 8i64))(v4);
		a1[1] = 0i64;
	}
	for (i = a1[14]; i != a1[15]; i += 8i64)
	{
		if (*(_QWORD*)i)
			*(_QWORD*)(*(_QWORD*)i + 56i64) = 0i64;
	}
	v6 = a1[18];
	if (v6)
		sub_14018B900(v6, 0);
	v7 = a1[14];
	if (v7)
		sub_14018B900(v7, 0);
	v8 = a1[12];
	if (v8)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v8 + 8i64))(v8);
}
// 1402D3190: using guessed type int var_18[6];

