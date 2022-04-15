#include "../winhttp.h"

//----- (0000000140143EB0) ----------------------------------------------------
__int64 __fastcall sub_140143EB0(__int64 a1)
{
	unsigned int* v2; // rsi
	__int64 v3; // rbx
	__int64 v4; // rax
	unsigned __int64 v5; // rax
	__m128* v6; // rax
	__m128 v7; // xmm6
	__int64 v8; // rax
	__int64* v9; // rax
	__int64 v10; // rax
	__int64* v11; // rax
	__int64 v12; // rax
	__int64* v13; // rax
	__int64 v14; // rcx
	__int64* v15; // rax
	__int64 v16; // rax
	__int64* v17; // rax
	__int64 v18; // rax
	__int64* v19; // rax
	__int64 v20; // rax
	__int64* v21; // rax
	__int64 v22; // rax
	__int64* v23; // rax

	v2 = (unsigned int*)sub_140143AE0(a1, 1);
	if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
		sub_14005E2C0(a1);
	v3 = *(_QWORD*)(a1 + 16);
	v4 = sub_14005C1B0(a1, 0, 0);
	*(_DWORD*)(v3 + 8) = 5;
	*(_QWORD*)v3 = v4;
	*(_QWORD*)(a1 + 16) += 16i64;
	if (v2)
	{
		v5 = *v2;
		if (v5 >= *(_QWORD*)(qword_140C63678 + 48))
			v6 = *(__m128**)(qword_140C63678 + 40);
		else
			v6 = (__m128*)(*(_QWORD*)(qword_140C63678 + 40) + 32 * v5);
		v7 = *v6;
		sub_140058710(a1, (unsigned __int64*)"r", 1ui64);
		v8 = *(_QWORD*)(a1 + 16);
		*(_DWORD*)(v8 + 8) = 3;
		*(double*)v8 = v7.m128_f32[0];
		*(_QWORD*)(a1 + 16) += 16i64;
		v9 = (__int64*)sub_1400580E0(a1, -3);
		sub_14005EA50(a1, v9, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
		*(_QWORD*)(a1 + 16) -= 32i64;
		sub_140058710(a1, (unsigned __int64*)"g", 1ui64);
		v10 = *(_QWORD*)(a1 + 16);
		*(_DWORD*)(v10 + 8) = 3;
		*(double*)v10 = _mm_shuffle_ps(v7, v7, 85).m128_f32[0];
		*(_QWORD*)(a1 + 16) += 16i64;
		v11 = (__int64*)sub_1400580E0(a1, -3);
		sub_14005EA50(a1, v11, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
		*(_QWORD*)(a1 + 16) -= 32i64;
		sub_140058710(a1, (unsigned __int64*)"b", 1ui64);
		v12 = *(_QWORD*)(a1 + 16);
		*(_DWORD*)(v12 + 8) = 3;
		*(double*)v12 = _mm_shuffle_ps(v7, v7, 170).m128_f32[0];
		*(_QWORD*)(a1 + 16) += 16i64;
		v13 = (__int64*)sub_1400580E0(a1, -3);
		sub_14005EA50(a1, v13, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
		*(_QWORD*)(a1 + 16) -= 32i64;
		sub_140058710(a1, (unsigned __int64*)"a", 1ui64);
		v14 = *(_QWORD*)(a1 + 16);
		*(_DWORD*)(v14 + 8) = 3;
		*(double*)v14 = _mm_shuffle_ps(v7, v7, 255).m128_f32[0];
		*(_QWORD*)(a1 + 16) += 16i64;
		v15 = (__int64*)sub_1400580E0(a1, -3);
		sub_14005EA50(a1, v15, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
	}
	else
	{
		sub_140058710(a1, (unsigned __int64*)"r", 1ui64);
		v16 = *(_QWORD*)(a1 + 16);
		*(_QWORD*)v16 = 0i64;
		*(_DWORD*)(v16 + 8) = 3;
		*(_QWORD*)(a1 + 16) += 16i64;
		v17 = (__int64*)sub_1400580E0(a1, -3);
		sub_14005EA50(a1, v17, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
		*(_QWORD*)(a1 + 16) -= 32i64;
		sub_140058710(a1, (unsigned __int64*)"g", 1ui64);
		v18 = *(_QWORD*)(a1 + 16);
		*(_QWORD*)v18 = 0i64;
		*(_DWORD*)(v18 + 8) = 3;
		*(_QWORD*)(a1 + 16) += 16i64;
		v19 = (__int64*)sub_1400580E0(a1, -3);
		sub_14005EA50(a1, v19, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
		*(_QWORD*)(a1 + 16) -= 32i64;
		sub_140058710(a1, (unsigned __int64*)"b", 1ui64);
		v20 = *(_QWORD*)(a1 + 16);
		*(_QWORD*)v20 = 0i64;
		*(_DWORD*)(v20 + 8) = 3;
		*(_QWORD*)(a1 + 16) += 16i64;
		v21 = (__int64*)sub_1400580E0(a1, -3);
		sub_14005EA50(a1, v21, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
		*(_QWORD*)(a1 + 16) -= 32i64;
		sub_140058710(a1, (unsigned __int64*)"a", 1ui64);
		v22 = *(_QWORD*)(a1 + 16);
		*(_QWORD*)v22 = 0i64;
		*(_DWORD*)(v22 + 8) = 3;
		*(_QWORD*)(a1 + 16) += 16i64;
		v23 = (__int64*)sub_1400580E0(a1, -3);
		sub_14005EA50(a1, v23, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
	}
	*(_QWORD*)(a1 + 16) -= 32i64;
	return 1i64;
}
// 140C63678: using guessed type __int64 qword_140C63678;

