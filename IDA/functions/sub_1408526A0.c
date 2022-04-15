//----- (00000001408526A0) ----------------------------------------------------
__int64 __fastcall sub_1408526A0(_QWORD* a1, unsigned __int64 a2, __int64 a3)
{
	float v3; // xmm0_4
	__int64 v5; // rsi
	bool v7; // di
	bool v9; // si
	float v10; // xmm1_4
	bool v11; // zf
	float v13; // [rsp+50h] [rbp+8h] BYREF

	v5 = a1[12];
	v7 = (v5 & 0x4000000000i64) != 0;
	v9 = (v5 & 0x2000000000i64) != 0;
	v13 = 0.0;
	if (v9 || v7)
	{
		if (v9)
		{
			sub_140836340(qword_140C61BB0, (__int64)a1, 37, a2);
			*(float*)a3 = v3;
			if ((*(unsigned __int8(__fastcall**)(_QWORD*, float*))(*a1 + 240i64))(a1, &v13))
			{
				v3 = (float)(v13 * 0.0099999998) * *(float*)a3;
				*(float*)a3 = v3;
			}
		}
		else
		{
			*(_DWORD*)a3 = 0;
		}
		*(_DWORD*)(a3 + 4) = 0;
		if (!v7)
		{
			*(_DWORD*)(a3 + 8) = 1065353216;
			return v9 | (unsigned int)v7;
		}
		sub_140836340(qword_140C61BB0, (__int64)a1, 38, a2);
		v10 = v13;
		v11 = v13 == 0.0;
		*(float*)(a3 + 8) = v3;
		if (!v11)
			goto LABEL_10;
		if ((*(unsigned __int8(__fastcall**)(_QWORD*, float*))(*a1 + 240i64))(a1, &v13))
		{
			v10 = v13;
		LABEL_10:
			*(float*)(a3 + 8) = (float)(v10 * 0.0099999998) * *(float*)(a3 + 8);
		}
	}
	return v9 | (unsigned int)v7;
}
// 140852714: variable 'v3' is possibly undefined
// 140C61BB0: using guessed type __int64 qword_140C61BB0;

