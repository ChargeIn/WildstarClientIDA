//----- (00000001402F3640) ----------------------------------------------------
__int64 __fastcall sub_1402F3640(__int64 a1)
{
	__int64 v1; // rsi
	int v2; // edi
	__int64 v3; // rbx
	__int64 v4; // rcx
	__int64 v5; // rdx

	v1 = a1 - 16;
	v2 = *(_DWORD*)(a1 - 16) - 1;
	if (v2 >= 0)
	{
		v3 = a1 + 432i64 * *(int*)(a1 - 16) + 384;
		do
		{
			v3 -= 432i64;
			v4 = *(_QWORD*)(v3 + 40);
			if (v4)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v4 + 8i64))(v4);
			*(_QWORD*)(v3 - 32) = &off_140B62AC0;
			if (*(_QWORD*)v3)
				**(_QWORD**)v3 = *(_QWORD*)(v3 + 8);
			v5 = *(_QWORD*)(v3 + 8);
			if (v5)
				*(_QWORD*)(v5 + 32) = *(_QWORD*)v3;
			--v2;
			*(_QWORD*)v3 = 0i64;
			*(_QWORD*)(v3 + 8) = 0i64;
		} while (v2 >= 0);
	}
	sub_14018B900(v1, 0);
	return v1;
}
// 140B62AC0: using guessed type __int64 (__fastcall *off_140B62AC0)();

