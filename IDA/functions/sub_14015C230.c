//----- (000000014015C230) ----------------------------------------------------
__int64 __fastcall sub_14015C230(__int64 a1)
{
	__int64 v1; // rdx
	int v2; // ebx
	__int64 result; // rax
	__int64 v5; // rsi
	__int64 v6; // r9
	__int128 v7; // [rsp+30h] [rbp-18h] BYREF

	v1 = *(_QWORD*)(a1 + 1032);
	v2 = 0;
	result = (__int64)(*(_QWORD*)(v1 + 48) - *(_QWORD*)(v1 + 40)) >> 3;
	if ((int)result > 0)
	{
		v5 = 0i64;
		do
		{
			v6 = *(_QWORD*)(v5 + *(_QWORD*)(v1 + 40));
			v7 = xmmword_140C777D0;
			sub_14015C040(
				a1,
				(unsigned int*)(*(_QWORD*)(a1 + 1048) + 16i64 * v2),
				(float*)(v6 + 48),
				*(_QWORD*)(v6 + 24),
				(__int64)&v7);
			v1 = *(_QWORD*)(a1 + 1032);
			++v2;
			v5 += 8i64;
			result = (__int64)(*(_QWORD*)(v1 + 48) - *(_QWORD*)(v1 + 40)) >> 3;
		} while (v2 < (int)result);
	}
	return result;
}
// 140C777D0: using guessed type __int128 xmmword_140C777D0;
// 14015C230: using guessed type __int128 var_18;

