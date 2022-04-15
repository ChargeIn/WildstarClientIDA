//----- (00000001407D5AD0) ----------------------------------------------------
__int64 __fastcall sub_1407D5AD0(
	__int64 a1,
	unsigned int a2,
	unsigned int a3,
	unsigned int a4,
	_DWORD* a5,
	_DWORD* a6,
	_QWORD* a7)
{
	__int64 v9; // rbx
	__int64 v10; // rsi
	__int64 v11; // rax
	__int64 v12; // rdx
	unsigned __int64 v13; // rcx
	__int64 result; // rax

	v9 = a4;
	v10 = a3;
	v11 = (*(__int64(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 24) + 280i64))(
		*(_QWORD*)(a1 + 24),
		*(unsigned int*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 800i64) + 4i64 * a2));
	if (!v11)
		return 2147942487i64;
	v12 = (*(__int64(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 24) + 264i64))(
		*(_QWORD*)(a1 + 24),
		*(unsigned int*)(v11 + 4 * v10 + 8));
	if (!v12
		|| (unsigned int)v9 >= 0xC
		|| a2 >= *(_DWORD*)(*(_QWORD*)(a1 + 8) + 784i64)
		|| (unsigned int)v10 >= 6
		|| (unsigned int)v9 >= *(_DWORD*)(v12 + 4))
	{
		return 2147942487i64;
	}
	if (a5)
		*a5 = *(_DWORD*)(v12 + 4 * v9 + 8);
	if (a6)
		*a6 = *(_DWORD*)(v12 + 4 * v9 + 56);
	if (a7)
	{
		v13 = *(_QWORD*)(v12 + 8 * v9 + 104);
		if (!v13 || v13 > qword_140C3FE70)
		{
			result = 0i64;
			*a7 = 0i64;
			return result;
		}
		*a7 = v13 + qword_140C3FE68;
	}
	return 0i64;
}
// 140C3FE68: using guessed type __int64 qword_140C3FE68;
// 140C3FE70: using guessed type __int64 qword_140C3FE70;

