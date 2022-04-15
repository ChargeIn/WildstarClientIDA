//----- (00000001402BC440) ----------------------------------------------------
__int64 __fastcall sub_1402BC440(__int64 a1, __int64 a2, __int16 a3)
{
	__int16 v4; // [rsp+50h] [rbp+18h] BYREF
	__int16 v5; // [rsp+52h] [rbp+1Ah]

	v4 = a3;
	v5 = 0;
	return (*(__int64(__fastcall**)(__int64, __int64, __int64, __int16*, __int64))(*(_QWORD*)a1 + 136i64))(
		a1,
		a2,
		a2 + 1,
		&v4,
		1i64);
}

