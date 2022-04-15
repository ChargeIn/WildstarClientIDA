#include "../winhttp.h"

//----- (000000014015BC10) ----------------------------------------------------
__int64 __fastcall sub_14015BC10(__int64 a1)
{
	_QWORD* v1; // rdi
	int v3; // esi
	__int64 v4; // rdx
	int v5; // ebp
	__int64 result; // rax
	__int64 v7; // r12
	int v8; // r14d
	int v9; // r15d
	__int64 v10; // rax
	__int64 v11; // rbx
	__m128 v12; // xmm1
	int v13; // ecx
	_QWORD* v14; // rcx
	int v15; // r9d
	int v16; // r9d
	int* v17; // rdx
	int v18; // ebx
	__int64 v19; // [rsp+40h] [rbp-88h] BYREF
	__int64 v20; // [rsp+48h] [rbp-80h]
	__int128 v21; // [rsp+50h] [rbp-78h] BYREF
	__int128 v22; // [rsp+60h] [rbp-68h] BYREF
	__int128 v23; // [rsp+70h] [rbp-58h]
	int v24; // [rsp+D0h] [rbp+8h] BYREF
	int v25; // [rsp+D4h] [rbp+Ch]
	__int64 v26; // [rsp+D8h] [rbp+10h]

	v1 = (_QWORD*)(a1 + 1040);
	v3 = 0;
	sub_14015C920(a1 + 1040);
	v4 = *(_QWORD*)(a1 + 1032);
	v5 = 0;
	result = (__int64)(*(_QWORD*)(v4 + 48) - *(_QWORD*)(v4 + 40)) >> 3;
	if ((int)result > 0)
	{
		v7 = 0i64;
		do
		{
			v8 = *(_DWORD*)(a1 + 720);
			v9 = *(_DWORD*)(a1 + 728);
			v10 = *(_QWORD*)(v7 + *(_QWORD*)(v4 + 40));
			HIDWORD(v19) = v8;
			HIDWORD(v20) = v9;
			v22 = xmmword_140C784E0;
			v23 = xmmword_140C784F0;
			v26 = v10;
			v11 = *(_QWORD*)(*(_QWORD*)(a1 + 696) + 96i64);
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v11 + 32i64))(v11);
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v11 + 24i64))(v11);
			v21 = xmmword_140B7B240;
			(*(void(__fastcall**)(__int64, __int64, _QWORD, __int64, __int128*, int, __int128*, int, __int64, __int64))(*(_QWORD*)qword_140C65680 + 264i64))(
				qword_140C65680,
				v11,
				*(_QWORD*)(v26 + 24),
				-1i64,
				&v22,
				1024,
				&v21,
				1,
				v19,
				v20);
			v12 = (__m128)(unsigned int)v23;
			v12.m128_f32[0] = *(float*)&v23 - *(float*)&v22;
			v13 = (int)(float)(*(float*)&v23 - *(float*)&v22);
			if (v13 != 0x80000000 && (float)v13 != v12.m128_f32[0])
				v12.m128_f32[0] = (float)(!(_mm_movemask_ps(_mm_unpacklo_ps(v12, v12)) & 1) + v13);
			v14 = *(_QWORD**)(v26 + 48);
			v15 = (int)v12.m128_f32[0] + 8;
			if (v14)
			{
				sub_140101470(v14, &v24);
				if (v25 > v9 - v8)
					v15 = v24 * (v9 - v8) / v25 + v16;
				else
					v15 = v24 + v16;
			}
			v17 = (int*)v1[2];
			v18 = v15 + v3;
			LODWORD(v19) = v3;
			LODWORD(v20) = v15 + v3;
			if (v17 == (int*)v1[3])
			{
				sub_14015C990(v1, v17, (int*)&v19);
			}
			else
			{
				if (v17)
				{
					*v17 = v3;
					v17[1] = v8;
					v17[2] = v18;
					v17[3] = v9;
				}
				v1[2] += 16i64;
			}
			v4 = *(_QWORD*)(a1 + 1032);
			++v5;
			v7 += 8i64;
			v3 = v18;
			result = (__int64)(*(_QWORD*)(v4 + 48) - *(_QWORD*)(v4 + 40)) >> 3;
		} while (v5 < (int)result);
	}
	return result;
}
// 14015BD9E: variable 'v16' is possibly undefined
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140C65680: using guessed type __int64 qword_140C65680;
// 140C784E0: using guessed type __int128 xmmword_140C784E0;
// 140C784F0: using guessed type __int128 xmmword_140C784F0;

