//----- (000000014004D900) ----------------------------------------------------
__int64 __fastcall sub_14004D900(__m128* a1)
{
	unsigned __int64 v2; // rcx
	unsigned __int64 v3; // r8
	__int32 v4; // edx
	unsigned __int64 v5; // rcx
	unsigned __int64 v6; // rax
	__int64 v7; // rcx
	__int64 v8; // rcx
	unsigned __int64 v9; // rax
	__int128* v10; // rax
	unsigned __int64 v11; // rbx
	__int64 v12; // r11
	__int128 v14; // [rsp+40h] [rbp-2C8h] BYREF
	int v15[4]; // [rsp+50h] [rbp-2B8h] BYREF
	int v16[56]; // [rsp+60h] [rbp-2A8h] BYREF
	__int128 v17; // [rsp+140h] [rbp-1C8h]
	__int64 v18; // [rsp+180h] [rbp-188h]
	__m128* v19; // [rsp+1F8h] [rbp-110h]
	__int64(__fastcall * v20)(__int64); // [rsp+200h] [rbp-108h]
	__m128 v21[6]; // [rsp+290h] [rbp-78h] BYREF

	v14 = 0i64;
	(*(void(__fastcall**)(__int64, __int64, __int128*))(*(_QWORD*)qword_140C65670 + 624i64))(
		qword_140C65670,
		1i64,
		&v14);
	v2 = a1[24].m128_u64[1];
	if (v2)
	{
		v15[0] = -1;
		if ((*(unsigned int(__fastcall**)(unsigned __int64, int*))(*(_QWORD*)v2 + 152i64))(v2, v15))
		{
			sub_1407E4830(v16, 0i64, 0x230ui64);
			v3 = a1[26].m128_u64[0];
			v4 = a1[28].m128_i32[2];
			v19 = a1;
			v5 = v3;
			v20 = sub_14004C4F0;
			v6 = *(_QWORD*)(v3 + 8);
			while (v6)
			{
				if (*(_DWORD*)(v6 + 32) < v4)
				{
					v6 = *(_QWORD*)(v6 + 24);
				}
				else
				{
					v5 = v6;
					v6 = *(_QWORD*)(v6 + 16);
				}
			}
			if (v5 == v3 || (*(_QWORD*)&v14 = v5, v4 < *(_DWORD*)(v5 + 32)))
				*(_QWORD*)&v14 = v3;
			if ((_QWORD)v14 != v3)
			{
				v7 = *(_QWORD*)(v14 + 40);
				if (v7)
				{
					if (*(_QWORD*)(v7 + 24))
					{
						v18 = *(_QWORD*)(v7 + 24);
						v8 = *(_QWORD*)(v14 + 40);
						if (v8)
						{
							v9 = *(unsigned int*)(v8 + 5100);
							if (v9 >= *(_QWORD*)(qword_140C63678 + 48))
								v10 = *(__int128**)(qword_140C63678 + 40);
							else
								v10 = (__int128*)(*(_QWORD*)(qword_140C63678 + 40) + 32 * v9);
							v17 = *v10;
						}
					}
				}
			}
			a1[28].m128_i32[2] = 0;
			v11 = a1[24].m128_u64[1];
			a1[28].m128_i32[3] = v4;
			sub_1401B20F0(v21, a1 + 11);
			(*(void(__fastcall**)(unsigned __int64, __m128*, __m128*))(v12 + 488))(v11, a1 + 3, a1 + 7);
			sub_14004C470((__int64)a1);
		}
	}
	return 0i64;
}
// 14004DA97: variable 'v12' is possibly undefined
// 140C63678: using guessed type __int64 qword_140C63678;
// 140C65670: using guessed type __int64 qword_140C65670;
// 14004D900: using guessed type int var_2B8[4];
// 14004D900: using guessed type int var_2A8[56];
// 14004D900: using guessed type __m128 var_78[6];

