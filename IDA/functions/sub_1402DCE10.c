//----- (00000001402DCE10) ----------------------------------------------------
__int64 __fastcall sub_1402DCE10(__int64 a1, _DWORD* a2, __int64 a3)
{
	__int64 result; // rax
	int v6; // ebx
	__int64 v7; // [rsp+38h] [rbp+10h] BYREF
	int v8; // [rsp+48h] [rbp+20h] BYREF
	int v9; // [rsp+4Ch] [rbp+24h]

	if (*a2 >= 0x800u || a2[1] >= 0x800u || !a3)
		return 2147942487i64;
	v8 = *a2 / 16;
	v9 = a2[1] / 16;
	result = (*(__int64(__fastcall**)(__int64, int*, __int64*))(*(_QWORD*)a1 + 112i64))(a1, &v8, &v7);
	if ((int)result >= 0)
	{
		v6 = (*(__int64(__fastcall**)(__int64, _QWORD, __int64))(*(_QWORD*)v7 + 72i64))(
			v7,
			(*a2 & 0xF) + 16 * (a2[1] & 0xFu),
			a3);
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v7 + 8i64))(v7);
		if (v6 >= 0)
			return 0i64;
		else
			return (unsigned int)v6;
	}
	return result;
}

