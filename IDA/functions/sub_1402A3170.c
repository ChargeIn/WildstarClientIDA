//----- (00000001402A3170) ----------------------------------------------------
__int64 __fastcall sub_1402A3170(_QWORD* a1)
{
	unsigned __int64 v1; // rsi
	__int64 v3; // rbp
	int v4; // edi
	__int64 v5; // rbx
	__int64 v6; // rcx
	__int64 result; // rax

	v1 = 0i64;
	if (a1[1])
	{
		v3 = 0i64;
		do
		{
			v4 = 1;
			v5 = v3 + *a1 + 16i64;
			do
			{
				v6 = *(_QWORD*)(v5 - 8);
				v5 -= 8i64;
				if (v6)
					result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v6 + 16i64))(v6);
				--v4;
			} while (v4 >= 0);
			++v1;
			v3 += 16i64;
		} while (v1 < a1[1]);
	}
	if (*a1)
		return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)(*a1 - 16i64) + 8i64))(*a1 - 16i64);
	return result;
}

