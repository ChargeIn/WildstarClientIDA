//----- (0000000140103E60) ----------------------------------------------------
__int64 __fastcall sub_140103E60(_QWORD* a1, __m128* a2, __m128* a3, char a4, int a5)
{
	__int64 v7; // rcx
	int v8; // esi
	__int64 i; // rdi
	bool v10; // sf
	__int64 v11; // rcx
	__int64 result; // rax
	_QWORD* v13; // rax
	char v14; // [rsp+30h] [rbp-48h]
	float v15; // [rsp+34h] [rbp-44h] BYREF
	__m128* v16; // [rsp+38h] [rbp-40h]

	v7 = a1[8] - a1[7];
	v14 = a4;
	v16 = a3;
	if (!(unsigned int)(v7 / 304))
	{
		v8 = 0;
		for (i = 0i64; v8 < (int)((__int64)(a1[12] - a1[11]) >> 3); ++i)
		{
			v10 = i < 0;
			if (i > 0)
			{
				(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65680 + 144i64))(qword_140C65680, 1i64);
				LODWORD(a3) = (_DWORD)v16;
				a4 = v14;
				v10 = i < 0;
			}
			if (v10)
			{
				LODWORD(v11) = 0;
			}
			else if (v8 < (int)((__int64)(a1[12] - a1[11]) >> 3))
			{
				v11 = *(_QWORD*)(a1[11] + 8 * i);
			}
			else
			{
				LODWORD(v11) = (_DWORD)a1;
			}
			sub_140103E60(v11, (_DWORD)a2, (_DWORD)a3, a4, a5);
			LODWORD(a3) = (_DWORD)v16;
			a4 = v14;
			++v8;
		}
		return 0i64;
	}
	v15 = 0.0;
	v13 = (_QWORD*)sub_140101260((__int64)a1, COERCE_DOUBLE((unsigned __int64)a5), &v15);
	if (!v13)
		return 2147942413i64;
	if (!*v13)
		return 0i64;
	result = sub_140100010((__int64)v13, a2, v16, v15, v14);
	if ((int)result >= 0)
		return 0i64;
	return result;
}
// 140C65680: using guessed type __int64 qword_140C65680;

