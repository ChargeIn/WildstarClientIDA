#include "../winhttp.h"

//----- (00000001402857A0) ----------------------------------------------------
void __fastcall sub_1402857A0(__int64 a1, __int64 a2, unsigned __int64 a3)
{
	__int64 v3; // rax
	__int64 v6; // rsi
	__m128* v8; // rdi
	__int64 v9; // rax
	int* v10; // rax
	__int64 v11; // r14
	__int64 v12; // rbx
	unsigned __int64 v13; // rcx
	__m128 v14; // xmm0
	unsigned __int64* v15; // rdi
	int v16; // xmm0_4
	__int128 v17; // xmm0
	unsigned __int64 v18; // rdx
	int v19; // ebx
	__int64 v20; // rdx
	unsigned __int64 v21; // r12
	unsigned __int64 v22; // rcx
	__int64 v23; // rdx
	__int128 v24; // [rsp+40h] [rbp-88h] BYREF
	int v25; // [rsp+50h] [rbp-78h]
	int v26; // [rsp+54h] [rbp-74h]
	__int128 v27; // [rsp+60h] [rbp-68h]
	int v28; // [rsp+70h] [rbp-58h]
	int v29; // [rsp+74h] [rbp-54h]

	v3 = *(_QWORD*)(a1 + 224);
	v6 = *(_QWORD*)(v3 + 24);
	if (*(_DWORD*)(v6 + 52))
	{
		if (a3 <= 2)
		{
			*(_QWORD*)(v6 + 40) = 0i64;
			*(_DWORD*)(v6 + 52) = 0;
		}
		else
		{
			v8 = *(__m128**)(v3 + 16);
			v9 = 16 * a3;
			if (!is_mul_ok(a3, 0x10ui64))
				v9 = -1i64;
			v10 = sub_14018B280(v9, 0);
			v11 = (__int64)v10;
			if (a3)
			{
				v12 = a2 - (_QWORD)v10;
				v13 = a3;
				do
				{
					v14 = *(__m128*)((char*)v10 + v12);
					v10 += 4;
					*((__m128*)v10 - 1) = _mm_add_ps(
						_mm_add_ps(
							_mm_mul_ps(_mm_shuffle_ps(v14, v14, 85), v8[1]),
							_mm_mul_ps(_mm_shuffle_ps(v14, v14, 0), *v8)),
						v8[3]);
					--v13;
				} while (v13);
			}
			v15 = (unsigned __int64*)(v6 + 40);
			if (*(_DWORD*)(v6 + 48))
			{
				v24 = *(_OWORD*)v6;
				v25 = v24;
				v16 = *(_DWORD*)(v6 + 20);
				v28 = *(_DWORD*)(v6 + 16);
				v26 = v16;
				v17 = *(_OWORD*)(v6 + 16);
				*v15 = a3 + 4;
				v18 = *(_QWORD*)(v6 + 32) + a3 + 4;
				v27 = v17;
				v29 = *(_DWORD*)(v6 + 4);
				sub_1402626B0((__int64*)(a1 + 328), v18);
				sub_140284D10(
					a1,
					(__int64)&v24,
					4i64,
					v11,
					a3,
					*(_QWORD*)(a1 + 328) + 16i64 * *(_QWORD*)(v6 + 32),
					(unsigned __int64*)(v6 + 40));
				v19 = 0;
				*(_DWORD*)(v6 + 48) = 0;
			}
			else
			{
				v20 = *(_QWORD*)(v6 + 32);
				v21 = *v15;
				v22 = *v15 + a3;
				*v15 = v22;
				sub_1402626B0((__int64*)(a1 + 328), v22 + v20);
				v19 = 0;
				if (v21 < 3)
				{
					*v15 = 0i64;
				}
				else
				{
					v23 = *(_QWORD*)(a1 + 328) + 16i64 * *(_QWORD*)(v6 + 32);
					sub_140284D10(a1, v23, v21, v11, a3, v23, (unsigned __int64*)(v6 + 40));
				}
			}
			LOBYTE(v19) = *v15 != 0;
			*(_DWORD*)(v6 + 52) = v19;
			sub_14018B900(v11, 0);
		}
	}
}

