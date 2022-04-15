//----- (000000014085E090) ----------------------------------------------------
__int64 __fastcall sub_14085E090(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
	__int64 result; // rax
	__int64 v6; // rcx
	__int64 v7; // rcx
	__int64 v8; // rax
	__int64 v9; // rcx
	int v10; // [rsp+20h] [rbp-38h] BYREF
	__int64 v11; // [rsp+28h] [rbp-30h]
	__int64 v12; // [rsp+30h] [rbp-28h]
	__int64 v13; // [rsp+38h] [rbp-20h]
	int v14; // [rsp+40h] [rbp-18h]
	__int16 v15; // [rsp+44h] [rbp-14h]

	if ((*(_BYTE*)(a1 + 383) & 0x40) != 0)
		sub_14085E190(a1, 0i64, a3, a4);
	result = *(unsigned __int8*)(a1 + 382);
	if ((result & 0x10) == 0)
	{
		v6 = *(_QWORD*)(a1 + 520);
		*(_BYTE*)(a1 + 382) = result | 0x10;
		if (v6)
		{
			sub_140853E50(v6, a1, 1);
			*(_QWORD*)(a1 + 520) = 0i64;
		}
		v7 = *(_QWORD*)(a1 + 528);
		if (v7)
		{
			sub_140853E50(v7, a1, 2);
			*(_QWORD*)(a1 + 528) = 0i64;
		}
		sub_140853E50((__int64)word_140C10F30, a1, 0);
		v8 = *(_QWORD*)(a1 + 176);
		v9 = *(_QWORD*)(a1 + 160);
		v10 = 0;
		v11 = v8;
		v12 = 0i64;
		v13 = 0i64;
		v14 = 3;
		v15 = 256;
		return (*(__int64(__fastcall**)(__int64, int*))(*(_QWORD*)v9 + 280i64))(v9, &v10);
	}
	return result;
}
// 140C10F30: using guessed type _WORD word_140C10F30[12];

