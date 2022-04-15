//----- (000000014001BB00) ----------------------------------------------------
__int64 __fastcall sub_14001BB00(__int64 a1, int a2)
{
	__int64 v2; // r9
	int* v3; // r11
	unsigned __int8 v4; // r10
	__int64 result; // rax
	__int64 v6; // rdx
	_BYTE* v7; // rax

	if (a2)
		v2 = *(unsigned __int8*)(a2 + a1 + 31);
	else
		v2 = *(unsigned __int8*)(a1 + 39);
	v3 = (int*)qword_140C63750;
	v4 = *(_BYTE*)(*(int*)qword_140C63750 + a1 + 32);
	if ((unsigned __int64)a2 < 5)
		memset((void*)(a2 + a1 + 32), v2, 5i64 - a2);
	*(_DWORD*)(a1 + 24) &= (1 << a2) - 1;
	result = *v3;
	v6 = *(unsigned __int8*)(result + a1 + 32);
	if (v4 != (_BYTE)v6)
	{
		v7 = *(_BYTE**)(a1 + 40);
		if (v7)
			*v7 = v6;
		result = *(_QWORD*)(a1 + 56);
		if (result)
			return ((__int64(__fastcall*)(_QWORD, __int64, __int64, __int64))result)(v4, v6, a1, v2);
	}
	return result;
}
// 140C63750: using guessed type __int64 qword_140C63750;

