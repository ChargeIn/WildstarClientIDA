//----- (00000001401BE1F0) ----------------------------------------------------
__int64 __fastcall sub_1401BE1F0(_QWORD* a1, char* a2, _QWORD* a3)
{
	__int8* v6; // rax
	__int8* v7; // rsi
	unsigned __int64 v8; // rax
	__int64 result; // rax
	unsigned __int64 v10; // rax
	_QWORD* v11; // rcx

	v6 = sub_1407DE0B4((__int64)a2, 0x5Cu);
	v7 = v6;
	if (!v6)
	{
		v10 = sub_1401BF1C0((__int64)a1, a2);
		if (v10 >= a1[4])
			return 2147943568i64;
		v11 = (_QWORD*)(a1[3] + 56 * v10);
		if (a3)
		{
			*a3 = v11[1];
			a3[1] = v11[2];
			a3[2] = v11[3];
			a3[3] = v11[4];
			a3[4] = v11[5];
			a3[5] = v11[6];
		}
		return 0i64;
	}
	*v6 = 0;
	v8 = sub_1401BF0F0((__int64)a1, a2);
	*v7 = 92;
	if (v8 >= a1[2])
		return 2147943568i64;
	result = sub_1401BE1F0(*(_QWORD*)(a1[1] + 16 * v8 + 8), v7 + 1, a3);
	if ((int)result >= 0)
		return 0i64;
	return result;
}

