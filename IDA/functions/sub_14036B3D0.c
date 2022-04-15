//----- (000000014036B3D0) ----------------------------------------------------
__int64 __fastcall sub_14036B3D0(__int64 a1, int* a2, __int64* a3)
{
	__int64 result; // rax
	__int64 v6; // rbp
	__int64 v7; // rsi
	unsigned __int64 i; // rdi
	__int64 v9; // rbx
	__m128 v10[6]; // [rsp+30h] [rbp-88h] BYREF

	result = sub_14035C090(a1, a2, v10);
	if ((int)result >= 0)
	{
		result = (*(__int64(__fastcall**)(__int64, __m128*, __int64))(*(_QWORD*)a1 + 384i64))(a1, v10, 2i64);
		if ((int)result >= 0)
		{
			v6 = *a3;
			v7 = 0i64;
			for (i = 0i64; i < *(_QWORD*)(v6 + 8); ++i)
			{
				v9 = *(_QWORD*)(*(_QWORD*)(v6 + 16) + 8 * i);
				if ((*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v9 + 312i64))(v9) == 2)
				{
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v9 + 8i64))(v9);
				}
				else
				{
					++v7;
					*(_QWORD*)(*(_QWORD*)(v6 + 16) + 8 * v7 - 8) = v9;
				}
			}
			*(_QWORD*)(v6 + 8) = v7;
			return 0i64;
		}
	}
	return result;
}
// 14036B3D0: using guessed type __m128 var_88[6];

