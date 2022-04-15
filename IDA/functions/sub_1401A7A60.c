//----- (00000001401A7A60) ----------------------------------------------------
__int64 __fastcall sub_1401A7A60(__int64 a1, int* a2, __int64 a3)
{
	__int64 v6; // rcx
	__int64 v7; // rax
	int* v8; // rax
	unsigned __int64 v9; // rbx
	_QWORD* v10; // rax
	__int64 v11; // rdx
	__int64 v13; // [rsp+30h] [rbp+8h] BYREF

	sub_1401A59A0(a1);
	*(_DWORD*)(a1 + 92) = 0;
	v6 = *(_QWORD*)(a1 + 104);
	*(_QWORD*)(a1 + 104) = 0i64;
	if (v6)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v6 - 16) + 8i64))(v6 - 16);
	sub_14018B900(*(_QWORD*)(a1 + 112), 0);
	*(_QWORD*)(a1 + 112) = 0i64;
	if (a3 && a2 && *(_WORD*)a2)
	{
		if (a3 == -1)
		{
			a3 = 0i64;
			do
				++a3;
			while (*((_WORD*)a2 + a3));
		}
		v7 = 2 * (a3 + 1);
		if (!is_mul_ok(a3 + 1, 2ui64))
			v7 = -1i64;
		v8 = sub_14018B280(v7, 0);
		v9 = 2 * a3;
		*(_QWORD*)(a1 + 112) = v8;
		sub_1407DB590(v8, a2, v9);
		*(_WORD*)(v9 + *(_QWORD*)(a1 + 112)) = 0;
		sub_1401A8260(a1);
		if (*(int*)(a1 + 92) < 0)
		{
			sub_1401A59A0(a1);
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(a1 + 128) + 40i64))(a1 + 128);
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(a1 + 256) + 40i64))(a1 + 256);
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(a1 + 384) + 40i64))(a1 + 384);
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(a1 + 512) + 40i64))(a1 + 512);
		}
	}
	else if (*(int*)(a1 + 92) >= 0)
	{
		*(_DWORD*)(a1 + 92) = -1603862513;
		v10 = sub_14018D540(&v13, (__int64)L"%0.8x", 2691104783i64);
		v11 = *(_QWORD*)(a1 + 104);
		*(_QWORD*)(a1 + 104) = *v10;
		*v10 = v11;
		if (v13)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(v13 - 16) + 8i64))(v13 - 16);
	}
	return *(unsigned int*)(a1 + 92);
}
// 140A45318: using guessed type wchar_t a08x_2[6];

