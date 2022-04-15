//----- (0000000140049770) ----------------------------------------------------
void __fastcall sub_140049770(__m128* a1)
{
	unsigned __int64 v1; // rdi
	__int64 v3; // rdi
	__int64 v4; // rcx
	__int64 v5; // rax
	__int64 v6; // rax
	_QWORD* v7; // rcx
	unsigned __int64 v8; // rcx
	unsigned __int64 v9; // rcx
	char v10[64]; // [rsp+40h] [rbp-A8h] BYREF
	__m128* v11[10]; // [rsp+80h] [rbp-68h] BYREF

	v1 = a1[315].m128_u64[0];
	if (v1)
	{
		v3 = *(_QWORD*)(v1 + 16);
		if (v3)
		{
			v4 = *(_QWORD*)(v3 + 24);
			if (v4)
			{
				if ((*(__int64(__fastcall**)(__int64))(*(_QWORD*)v4 + 328i64))(v4))
				{
					if (a1[317].m128_i32[3])
					{
						v5 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(v3 + 24) + 328i64))(*(_QWORD*)(v3 + 24));
						if ((*(unsigned int(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v5 + 848i64))(v5, a1[317].m128_u32[3]))
						{
							v6 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(v3 + 24) + 328i64))(*(_QWORD*)(v3 + 24));
							(*(void(__fastcall**)(__int64, _QWORD, char*, __int64))(*(_QWORD*)v6 + 888i64))(
								v6,
								a1[317].m128_u32[3],
								v10,
								1i64);
							v11[0] = (__m128*)v10;
							v11[1] = a1 + 309;
							sub_1401AFB10(v11, a1 + 309);
						}
					}
				}
			}
		}
		v7 = (_QWORD*)a1[316].m128_u64[0];
		if (v7)
			*v7 = a1[316].m128_u64[1];
		v8 = a1[316].m128_u64[1];
		if (v8)
			*(_QWORD*)(v8 + 5056) = a1[316].m128_u64[0];
		a1[316].m128_u64[0] = 0i64;
		a1[316].m128_u64[1] = 0i64;
		v9 = a1[315].m128_u64[0];
		if (v9)
		{
			(*(void(__fastcall**)(unsigned __int64))(*(_QWORD*)v9 + 8i64))(v9);
			a1[315].m128_u64[0] = 0i64;
		}
		sub_140049900((__int64)a1, (__m128*)a1[309].m128_f32, 0i64, 0, 0);
	}
}

