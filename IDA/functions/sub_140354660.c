//----- (0000000140354660) ----------------------------------------------------
__int64 __fastcall sub_140354660(unsigned __int64 a1, __int32 a2, __m128** a3)
{
	unsigned __int64 v5; // rsi
	_QWORD* v6; // rbx
	__m128* v7; // rbx
	__m128** v8; // rbx
	__int64 result; // rax
	int v10; // edi
	__int32 v11; // [rsp+38h] [rbp+10h] BYREF

	v11 = a2;
	v5 = (*(__int64(__fastcall**)(__int32*))(a1 + 2024))(&v11);
	v6 = *(_QWORD**)(*(_QWORD*)(a1 + 2016) + 8 * (v5 % *(_QWORD*)(a1 + 2008)));
	if (v6)
	{
		while (v5 != *v6 || !(*(unsigned int(__fastcall**)(__int32*, _QWORD*))(a1 + 2032))(&v11, v6 + 2))
		{
			v6 = (_QWORD*)v6[1];
			if (!v6)
				goto LABEL_5;
		}
		v8 = (__m128**)(v6 + 3);
		if (v8)
		{
			v7 = *v8;
			(*(void(__fastcall**)(__m128*))v7->m128_u64[0])(v7);
		LABEL_9:
			result = 0i64;
			*a3 = v7;
			return result;
		}
	}
LABEL_5:
	v7 = (__m128*)sub_14018B280(144i64, 0);
	if (v7)
	{
		v7->m128_u64[1] = 1i64;
		v7[1].m128_u64[0] = a1;
		v7->m128_u64[0] = (unsigned __int64)off_140B65A80;
	}
	else
	{
		v7 = 0i64;
	}
	v10 = sub_140372F30(v7, v11);
	if (v10 >= 0)
		goto LABEL_9;
	if (v7)
		sub_140354750((__int64)v7);
	return (unsigned int)v10;
}
// 140B65A80: using guessed type __int64 (__fastcall *off_140B65A80[10])();

