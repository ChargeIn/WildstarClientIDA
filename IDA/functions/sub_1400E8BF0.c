//----- (00000001400E8BF0) ----------------------------------------------------
char __fastcall sub_1400E8BF0(__int64 a1)
{
	__int64 v2; // rcx
	char result; // al
	__int64 v4; // rcx

	v2 = *(_QWORD*)(a1 + 2880);
	if (v2)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v2 + 416i64))(v2);
		result = sub_1400D4070(*(_QWORD*)(a1 + 2880), 0x10u, *(char**)(a1 + 2880), byte_1409D0333);
		v4 = *(_QWORD*)(a1 + 2880);
		if (v4)
		{
			result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v4 + 8i64))(v4);
			*(_QWORD*)(a1 + 2880) = 0i64;
		}
	}
	return result;
}
// 1409D0333: using guessed type _BYTE byte_1409D0333[5];

