//----- (00000001402BC480) ----------------------------------------------------
__int64 __fastcall sub_1402BC480(__int64 a1, __int64 a2, __int64 a3, __int16 a4)
{
	__int16 v5; // [rsp+58h] [rbp+20h] BYREF
	__int16 v6; // [rsp+5Ah] [rbp+22h]

	v5 = a4;
	v6 = 0;
	return (*(__int64(__fastcall**)(__int64, __int64, __int64, __int16*, __int64))(*(_QWORD*)a1 + 136i64))(
		a1,
		a2,
		a3,
		&v5,
		1i64);
}

