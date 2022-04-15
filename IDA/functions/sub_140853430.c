//----- (0000000140853430) ----------------------------------------------------
__int64 __fastcall sub_140853430(__int64 a1, float a2, _WORD* a3, _QWORD* a4)
{
	float v4; // xmm0_4
	__int64 v5; // rax
	int v9; // edx
	__int64 v10; // rax
	unsigned __int16 v11; // r8
	unsigned __int16 v12; // cx
	char v13; // r9
	__int64 v14; // r8
	__int64 result; // rax
	__int64 v16; // [rsp+60h] [rbp+8h] BYREF

	v5 = *(_QWORD*)(a1 + 56);
	if (v5)
		++* (_WORD*)(v5 + 76);
	LOWORD(v9) = *(_WORD*)(a1 + 88);
	if ((*(_DWORD*)(a1 + 96) & 0x200i64) != 0)
	{
		if (!(_WORD)v9)
			return 1i64;
		sub_140836340(qword_140C61BB0, a1, 9, 0i64);
		v9 = (int)v4;
	}
	if ((_WORD)v9)
	{
		*a4 = *(_QWORD*)(a1 + 56) + 32i64;
		if (!*a3)
		{
			v10 = *(_QWORD*)(a1 + 56);
			v11 = v10 ? *(_WORD*)(v10 + 76) : 0;
			v12 = v10 ? *(_WORD*)(v10 + 78) : 0;
			if (v11 - v12 > (unsigned __int16)v9)
			{
				v13 = *(_BYTE*)(a1 + 90);
				v14 = *(unsigned int*)(a1 + 24);
				v16 = 0i64;
				result = sub_140843FB0(a2, 0i64, v14, v13 & 1, (v13 & 2) != 0, &v16, 0);
				++* a3;
				return result;
			}
		}
	}
	return 1i64;
}
// 14085348B: variable 'v4' is possibly undefined
// 140C61BB0: using guessed type __int64 qword_140C61BB0;

