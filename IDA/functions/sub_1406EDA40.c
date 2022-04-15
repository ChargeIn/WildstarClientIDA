//----- (00000001406EDA40) ----------------------------------------------------
__int64 __fastcall sub_1406EDA40(_QWORD* a1)
{
	__int64 v1; // rdx

	if (qword_140C65898
		&& *(_QWORD*)(qword_140C65898 + 120)
		&& qword_140C65970
		&& (v1 = *(_QWORD*)(qword_140C65970 + 88)) != 0)
	{
		sub_140432BA0(a1, *(_QWORD*)(v1 + 72));
		return 1i64;
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		return 1i64;
	}
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65970: using guessed type __int64 qword_140C65970;

