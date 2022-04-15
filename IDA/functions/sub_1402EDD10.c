//----- (00000001402EDD10) ----------------------------------------------------
__int64 __fastcall sub_1402EDD10(__int64 a1)
{
	__int64 v1; // rsi
	__int64 v2; // r14
	__int64 v3; // rbx
	int v4; // esi
	__int64 v5; // rbx
	__int64 v6; // rcx
	__int64 v7; // rdi

	v1 = *(int*)(a1 - 8);
	v2 = a1 - 8;
	v3 = 48 * v1 + 40;
	v4 = v1 - 1;
	if (v4 >= 0)
	{
		v5 = a1 + v3;
		do
		{
			v6 = *(_QWORD*)(v5 - 48);
			v5 -= 48i64;
			if (v6)
			{
				v7 = v6 - 8;
				sub_140003810(v6, 296i64, *(_DWORD*)(v6 - 8), (__int64(__fastcall*)(__int64))sub_1402EEFD0);
				sub_14018B900(v7, 0);
			}
			--v4;
		} while (v4 >= 0);
	}
	sub_14018B900(v2, 0);
	return v2;
}

