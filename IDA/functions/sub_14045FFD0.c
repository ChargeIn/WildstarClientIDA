//----- (000000014045FFD0) ----------------------------------------------------
__int64 __fastcall sub_14045FFD0(__int64 a1, int a2)
{
	_QWORD* v2; // r10
	__int64 v4; // rax

	v2 = (_QWORD*)qword_140C65898;
	*(_DWORD*)(a1 + 56) = a2;
	if (v2[15] == a1 && v2[3506])
	{
		sub_1400EA3E0(v2[3688], "StanceChanged", byte_1409D0C77);
		v2 = (_QWORD*)qword_140C65898;
	}
	v4 = v2[15];
	if (v4 && *(_DWORD*)(a1 + 8) == *(_DWORD*)(v4 + 8))
	{
		sub_1403CDBF0((__int64)v2);
		v2 = (_QWORD*)qword_140C65898;
		*(_DWORD*)(qword_140C65898 + 1368) = 1;
	}
	return sub_1400EA3E0(v2[3688], "UnitLevelChanged", L"U", *(unsigned int*)(a1 + 8));
}
// 1409D0C77: using guessed type _BYTE byte_1409D0C77[24];
// 1409EE04C: using guessed type wchar_t aU_14[2];
// 140C65898: using guessed type __int64 qword_140C65898;

