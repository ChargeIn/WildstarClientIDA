//----- (00000001404BED10) ----------------------------------------------------
__int64 __fastcall sub_1404BED10(__int64 a1, _OWORD* a2)
{
	__int64 result; // rax
	char v4[48]; // [rsp+20h] [rbp-48h] BYREF
	__int128 v5; // [rsp+50h] [rbp-18h]

	if (a2)
	{
		result = (*(__int64(__fastcall**)(__int64, char*, _QWORD))(*(_QWORD*)a1 + 96i64))(a1, v4, 0i64);
		*a2 = v5;
	}
	return result;
}
// 1404BED10: using guessed type char var_48[48];

