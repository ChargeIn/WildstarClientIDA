//----- (00000001403315A0) ----------------------------------------------------
__int64 __fastcall sub_1403315A0(__int64 a1, unsigned int a2, unsigned int a3)
{
	int v5; // esi

	if ((unsigned __int64)(unsigned __int16)a2 >= *(_QWORD*)(a1 + 176))
		return 0i64;
	if (!*(_QWORD*)(*(_QWORD*)(a1 + 168) + 8i64 * (unsigned __int16)a2))
		return 0i64;
	v5 = (*(__int64(__fastcall**)(_QWORD, __int64, _QWORD, _QWORD))(**(_QWORD**)(a1 + 120) + 8i64))(
		*(_QWORD*)(a1 + 120),
		a1,
		a2,
		a3);
	if (v5 >= 0)
		return 0i64;
	(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)a1 + 40i64))(a1, a2);
	return (unsigned int)v5;
}

