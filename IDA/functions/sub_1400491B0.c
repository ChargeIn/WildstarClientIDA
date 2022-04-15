//----- (00000001400491B0) ----------------------------------------------------
__int64 __fastcall sub_1400491B0(__int64 a1, __int64 a2)
{
	unsigned __int64 v4; // rbx
	_DWORD* v5; // rsi
	__int64 result; // rax
	__int64* v7; // r14
	__int64 v8; // rcx
	__int64 v9; // rcx
	__int64 v10; // rcx
	__int64 v11; // rax
	__int64 v12; // rsi
	__int64 v13; // rcx
	__int64 v14; // rbx
	__int64 v15; // rax
	__int128 v16; // xmm0
	__int128 v17; // xmm1
	__int64 v18; // rcx
	__int128 v19; // xmm0
	__int128 v20; // xmm1
	__int64 v21; // rax
	__int64 v22; // [rsp+28h] [rbp-80h]
	__int64 v23; // [rsp+30h] [rbp-78h] BYREF
	int v24; // [rsp+38h] [rbp-70h]
	__int128 v25[4]; // [rsp+40h] [rbp-68h] BYREF
	__int64 v26; // [rsp+80h] [rbp-28h]

	if (a2)
	{
		v4 = 0i64;
		v5 = (_DWORD*)(a1 + 5124);
		do
		{
			if (*v5)
			{
				LODWORD(v22) = *v5;
				*v5 = 0;
				sub_1400EA3E0(a2, "AnimationFinished", byte_1409D11AC, a1, v4, v22);
			}
			++v4;
			v5 += 6;
		} while (v4 < 4);
	}
	sub_1400493B0(a1);
	result = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 24) + 328i64))(*(_QWORD*)(a1 + 24));
	v7 = (__int64*)result;
	if (result)
	{
		v8 = *(_QWORD*)(a1 + 5040);
		if (v8)
		{
			v9 = *(_QWORD*)(v8 + 16);
			if (v9)
			{
				v10 = *(_QWORD*)(v9 + 24);
				if (v10)
				{
					v11 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v10 + 328i64))(v10);
					v12 = v11;
					if (v11)
					{
						if (*(_DWORD*)(a1 + 5076))
						{
							v13 = *(_QWORD*)(a1 + 24);
							*(_DWORD*)(a1 + 5076) = 0;
							v14 = *(_QWORD*)v11;
							v15 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v13 + 328i64))(v13);
							(*(void(__fastcall**)(__int64, _QWORD, __int64))(v14 + 896))(v12, *(unsigned int*)(a1 + 5084), v15);
						}
						else if (*(_DWORD*)(a1 + 5080))
						{
							if ((*(unsigned int(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v11 + 848i64))(
								v11,
								*(unsigned int*)(a1 + 5084)))
							{
								(*(void(__fastcall**)(__int64, _QWORD, __int64, __int64))(*(_QWORD*)v12 + 888i64))(
									v12,
									*(unsigned int*)(a1 + 5084),
									a1 + 4944,
									1i64);
							}
							else
							{
								*(__m256*)(a1 + 4944) = ymmword_140C78390;
								*(_OWORD*)(a1 + 4976) = xmmword_140C783B0;
								*(_OWORD*)(a1 + 4992) = xmmword_140C783C0;
							}
						}
					}
				}
			}
		}
		v16 = *(_OWORD*)(a1 + 4944);
		v17 = *(_OWORD*)(a1 + 4960);
		v18 = *(_QWORD*)(a1 + 24);
		v26 = 0i64;
		v25[0] = v16;
		v19 = *(_OWORD*)(a1 + 4976);
		v25[1] = v17;
		v20 = *(_OWORD*)(a1 + 4992);
		v25[2] = v19;
		v25[3] = v20;
		(*(void(__fastcall**)(__int64, __int128*))(*(_QWORD*)v18 + 320i64))(v18, v25);
		v21 = *v7;
		v23 = 0i64;
		v24 = 0;
		return (*(__int64(__fastcall**)(__int64*, __int64*))(v21 + 240))(v7, &v23);
	}
	return result;
}
// 14004920C: variable 'v22' is possibly undefined
// 1409D11AC: using guessed type _BYTE byte_1409D11AC[22];
// 140C78390: using guessed type __m256 ymmword_140C78390;
// 140C783B0: using guessed type __int128 xmmword_140C783B0;
// 140C783C0: using guessed type __int128 xmmword_140C783C0;

