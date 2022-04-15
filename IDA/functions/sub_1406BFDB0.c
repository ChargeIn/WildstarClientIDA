//----- (00000001406BFDB0) ----------------------------------------------------
__int64 __fastcall sub_1406BFDB0(__int64 a1)
{
	__int64 result; // rax
	float v3; // xmm1_4
	float v4; // xmm2_4
	__int64 v5; // rdi
	__m128 v6; // xmm6
	__int64 v7; // r15
	__m128 v8; // xmm1
	int v9; // r12d
	int v10; // r13d
	int v11; // eax
	int v12; // ecx
	int v13; // esi
	int v14; // r13d
	int v15; // r12d
	__int64 v16; // rax
	void(__fastcall * **v17)(_QWORD); // rcx
	__int64 v18; // rbx
	__int64 v19; // rcx
	char* v20; // rbx
	int i; // edi
	__int64 v22; // rcx
	int v23; // [rsp+50h] [rbp-B0h] BYREF
	int v24; // [rsp+54h] [rbp-ACh]
	__int64 v25; // [rsp+58h] [rbp-A8h]
	int v26; // [rsp+60h] [rbp-A0h]
	char v27[32]; // [rsp+70h] [rbp-90h] BYREF
	__int128 v28; // [rsp+90h] [rbp-70h]
	__int128 v29; // [rsp+A0h] [rbp-60h]
	char v30[1040]; // [rsp+B0h] [rbp-50h] BYREF
	__int128 v31[4]; // [rsp+4C0h] [rbp+3C0h] BYREF
	__int64 v32; // [rsp+500h] [rbp+400h]
	char v33; // [rsp+508h] [rbp+408h] BYREF

	result = qword_140C65898;
	if (*(_QWORD*)(qword_140C65898 + 25744))
	{
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 600i64))(qword_140C65670);
		if ((_DWORD)result)
		{
			v3 = *(float*)(a1 + 1872);
			v4 = *(float*)&dword_140C8B030;
			v5 = 0i64;
			v6 = *(__m128*)(*(_QWORD*)(qword_140C65898 + 25744) + 4576i64);
			if (v3 != *(float*)&dword_140C8B030)
				*(_QWORD*)(a1 + 2416) = 0i64;
			if ((_mm_movemask_ps(_mm_cmpneq_ps(*(__m128*)(a1 + 1888), v6)) & 7) != 0 || v3 != v4)
			{
				*(__m128*)(a1 + 1888) = v6;
				*(__m128*)(a1 + 1056) = v6;
				dword_140C8B030 = LODWORD(v3);
				*(float*)(a1 + 1040) = v3;
			}
			sub_1406BFD00(a1);
			v7 = *(_QWORD*)(qword_140C65898 + 29248);
			v8 = _mm_mul_ps(
				_mm_add_ps(
					(__m128)xmmword_140B7AC50,
					_mm_mul_ps(
						_mm_shuffle_ps(v6, v6, 136),
						_mm_shuffle_ps((__m128)(unsigned int)dword_140C456D8, (__m128)(unsigned int)dword_140C456D8, 0))),
				(__m128)xmmword_140B7B460);
			v9 = (int)v8.m128_f32[0];
			v10 = (int)_mm_shuffle_ps(v8, v8, 85).m128_f32[0];
			LODWORD(v25) = (int)v8.m128_f32[0];
			HIDWORD(v25) = v10;
			if (v25 != *(_QWORD*)(a1 + 1904))
			{
				v11 = v10 - 1;
				v12 = v10 + 1;
				memset(v31, 0, sizeof(v31));
				v32 = 0i64;
				v24 = v10 - 1;
				v26 = v10 + 1;
				v13 = 0;
				if (v10 - 1 <= v10 + 1)
				{
					v14 = v9 - 1;
					v15 = v9 + 1;
					do
					{
						v23 = v14;
						if (v14 <= v15)
						{
							do
							{
								if ((*(int(__fastcall**)(__int64, int*, char*))(*(_QWORD*)v7 + 120i64))(v7, &v23, v27) >= 0)
								{
									(*(void(__fastcall**)(__int64, char*, _QWORD, __int64, int, _DWORD, _DWORD, _DWORD, char*))(*(_QWORD*)qword_140C65670 + 80i64))(
										qword_140C65670,
										v30,
										0i64,
										1i64,
										2,
										0,
										0,
										0,
										(char*)v31 + 8 * v13);
									v16 = 32 * (v13 + 60i64);
									*(_OWORD*)(v16 + a1) = v28;
									*(_OWORD*)(v16 + a1 + 16) = v29;
								}
								++v13;
								++v23;
							} while (v23 <= v15);
							v11 = v24;
							v12 = v26;
						}
						v24 = ++v11;
					} while (v11 <= v12);
					v9 = v25;
					v10 = HIDWORD(v25);
				}
				do
				{
					v17 = (void(__fastcall***)(_QWORD)) * ((_QWORD*)v31 + v5);
					v18 = a1 - (_QWORD)v31 + 8 * v5;
					if (*(void(__fastcall****)(_QWORD))((char*)&STACK[0xD60] + v18) != v17)
					{
						if (v17)
							(**v17)(v17);
						v19 = *(unsigned __int64*)((char*)&STACK[0xD60] + v18);
						if (v19)
							(*(void(__fastcall**)(__int64))(*(_QWORD*)v19 + 8i64))(v19);
						*(unsigned __int64*)((char*)&STACK[0xD60] + v18) = *((_QWORD*)v31 + v5);
					}
					++v5;
				} while (v5 < 9);
				*(_DWORD*)(a1 + 1904) = v9;
				*(_DWORD*)(a1 + 1908) = v10;
				v20 = &v33;
				for (i = 8; i >= 0; --i)
				{
					v22 = *((_QWORD*)v20 - 1);
					v20 -= 8;
					if (v22)
						(*(void(__fastcall**)(__int64))(*(_QWORD*)v22 + 8i64))(v22);
				}
			}
			sub_1406BD700((__m128*)a1);
			return sub_1406BE680(a1);
		}
	}
	return result;
}
// 140B7AC50: using guessed type __int128 xmmword_140B7AC50;
// 140B7B460: using guessed type __int128 xmmword_140B7B460;
// 140C456D8: using guessed type int dword_140C456D8;
// 140C65670: using guessed type __int64 qword_140C65670;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C8B030: using guessed type int dword_140C8B030;
// 1406BFDB0: using guessed type char var_4E0[32];
// 1406BFDB0: using guessed type char var_4A0[1040];

