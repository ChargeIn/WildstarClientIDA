//----- (000000014084D5F0) ----------------------------------------------------
__int64 __fastcall sub_14084D5F0(__int64 a1, __int64* a2, unsigned __int64 a3, int* a4, _DWORD* a5, __int64 a6)
{
	float v6; // xmm0_4
	__int64 v7; // rax
	__int64 i; // rbx

	v7 = *(_QWORD*)(a1 + 64);
	for (i = a1; (*(_BYTE*)(i + 91) & 0x10) == 0; v7 = *(_QWORD*)(v7 + 64))
	{
		if (!v7)
			break;
		i = v7;
	}
	sub_14084D530(i, a2, a5);
	*a4 = *(_BYTE*)(i + 160) & 3;
	if ((*(_DWORD*)(i + 96) & 0x400i64) != 0)
	{
		sub_140836340(qword_140C61BB0, i, 10, a3);
		*a4 = (int)v6;
	}
	return sub_1408524D0(i, a3, a6);
}
// 14084D660: variable 'v6' is possibly undefined
// 140C61BB0: using guessed type __int64 qword_140C61BB0;

