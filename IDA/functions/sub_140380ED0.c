//----- (0000000140380ED0) ----------------------------------------------------
void __fastcall sub_140380ED0(_QWORD* a1)
{
	__int64 v2; // rcx
	unsigned __int64 v3; // rdi
	unsigned __int64 v4; // rsi
	unsigned __int64 v5; // rbx
	unsigned __int64 v6; // r14
	__int64 v7; // rax
	__m128* v8; // rbp
	__int64 v9; // rbx
	__int64 v10; // rsi
	unsigned int* v11; // rax
	unsigned int v12; // edx
	unsigned __int64 v13; // r9
	__int64 v14; // r8
	__int64 v15; // rax
	__int64 v16; // rcx
	__m128 v17; // xmm0
	__m128 v18; // xmm3
	__m128 v19; // xmm2
	__m128* v20; // rax
	__int64 v21; // [rsp+40h] [rbp+8h] BYREF

	v2 = a1[2];
	v3 = 0i64;
	v21 = 0i64;
	if ((*(int(__fastcall**)(__int64, __int64*))(*(_QWORD*)v2 + 184i64))(v2, &v21) >= 0)
	{
		v4 = 0i64;
		v5 = 0i64;
		v6 = (*(__int64 (**)(void))(*(_QWORD*)v21 + 16i64))();
		if (v6)
		{
			do
			{
				v7 = (*(__int64(__fastcall**)(__int64, unsigned __int64))(*(_QWORD*)v21 + 24i64))(v21, v5++);
				v4 += (unsigned int)(2 * *(_DWORD*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)v7 + 16i64))(v7) - 2);
			} while (v5 < v6);
		}
		sub_140115D60(a1 + 170, v4);
		sub_1402626B0(a1 + 172, v4);
		v8 = (__m128*)a1[172];
		if (v6)
		{
			do
			{
				v9 = (*(__int64(__fastcall**)(__int64, unsigned __int64))(*(_QWORD*)v21 + 24i64))(v21, v3);
				v10 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v9 + 24i64))(v9);
				v11 = (unsigned int*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)v9 + 16i64))(v9);
				v12 = 1;
				v13 = *v11;
				if (v13 > 1)
				{
					v14 = 1i64;
					do
					{
						v15 = 3 * v14;
						v16 = 3i64 * (v12++ - 1);
						v14 = v12;
						*v8 = _mm_unpacklo_ps(
							_mm_unpacklo_ps(
								(__m128) * (unsigned int*)(v10 + 4 * v16),
								(__m128) * (unsigned int*)(v10 + 4 * v16 + 8)),
							_mm_unpacklo_ps((__m128) * (unsigned int*)(v10 + 4 * v16 + 4), (__m128)0i64));
						v17 = (__m128) * (unsigned int*)(v10 + 4 * v15 + 8);
						v18 = (__m128) * (unsigned int*)(v10 + 4 * v15);
						v19 = _mm_unpacklo_ps((__m128) * (unsigned int*)(v10 + 4 * v15 + 4), (__m128)0i64);
						v20 = v8 + 1;
						v8 += 2;
						*v20 = _mm_unpacklo_ps(_mm_unpacklo_ps(v18, v17), v19);
					} while (v12 < v13);
				}
				++v3;
			} while (v3 < v6);
		}
	}
	if (v21)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v21 + 8i64))(v21);
}

