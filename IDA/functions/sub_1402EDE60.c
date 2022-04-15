//----- (00000001402EDE60) ----------------------------------------------------
__int64 __fastcall sub_1402EDE60(__int64 a1)
{
	__int64 v1; // rsi
	__int64 v2; // r14
	__int64 v3; // rdx
	int v4; // esi
	__int64* v5; // rbx
	__int64 v6; // rcx
	__int64 v7; // rdi
	__int64 v8; // rcx
	__int64 v9; // rdi

	v1 = *(int*)(a1 - 8);
	v2 = a1 - 8;
	v3 = 5 * v1;
	v4 = v1 - 1;
	if (v4 >= 0)
	{
		v5 = (__int64*)(a1 + 16 + 8 * v3);
		do
		{
			v6 = *(v5 - 3);
			v5 -= 5;
			if (v6)
			{
				v7 = v6 - 8;
				sub_140003810(v6, 32i64, *(_DWORD*)(v6 - 8), (__int64(__fastcall*)(__int64))sub_1402EE6A0);
				sub_14018B900(v7, 0);
			}
			v8 = *v5;
			if (*v5)
			{
				v9 = v8 - 8;
				sub_140003810(v8, 32i64, *(_DWORD*)(v8 - 8), (__int64(__fastcall*)(__int64))sub_1402EE6A0);
				sub_14018B900(v9, 0);
			}
			--v4;
		} while (v4 >= 0);
	}
	sub_14018B900(v2, 0);
	return v2;
}

