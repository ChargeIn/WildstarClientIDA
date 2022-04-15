//----- (00000001401D8660) ----------------------------------------------------
__int64 __fastcall sub_1401D8660(__int64 a1, __int64 a2)
{
	__int64 result; // rax
	int v5; // ebx
	int v6[6]; // [rsp+20h] [rbp-18h] BYREF
	__int64 v7; // [rsp+48h] [rbp+10h] BYREF

	if (!a2)
		return 2147942487i64;
	if ((*(__int64(__fastcall**)(__int64))(*(_QWORD*)a2 + 16i64))(a2))
	{
		result = (*(__int64(__fastcall**)(__int64, __int64, __int64*, _QWORD))(*(_QWORD*)a1 + 120i64))(
			a1,
			a2,
			&v7,
			0i64);
		if ((int)result < 0)
			return result;
		v6[0] = -1;
		(*(void(__fastcall**)(__int64, int*))(*(_QWORD*)v7 + 32i64))(v7, v6);
		v5 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v7 + 40i64))(v7, 0i64);
		if (v5 < 0)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v7 + 8i64))(v7);
			return (unsigned int)v5;
		}
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v7 + 8i64))(v7);
	}
	return 0i64;
}
// 1401D8660: using guessed type int var_18[6];

