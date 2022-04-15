#include "../winhttp.h"

//----- (0000000140327E10) ----------------------------------------------------
__int64 __fastcall sub_140327E10(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
	__int64 v5; // r13
	__int64 v7; // r15
	int v9; // ebx
	unsigned int v10; // ebp
	__int64 v11; // rdx
	unsigned int v12; // ecx
	_WORD* v13; // rax
	__int64 v14; // r8
	__int64 v15; // rcx
	__int64 v16; // rsi
	__int64 v17; // r12
	unsigned int v18; // r14d
	unsigned int v19; // edi
	unsigned __int16* v20; // rbx
	__int64 v21; // rax
	__int64 v22; // rbp
	__int64 v23; // rsi
	__int64 v24; // rcx
	__int64 v25; // rax
	_QWORD* v26; // rcx
	__int64 v27; // rcx
	__int64 v28; // rdi
	__int64 v29; // rbx
	unsigned int v30; // r9d
	__int64 v31; // r10
	__m128* v32; // rdx
	__int64 v33; // r8
	_DWORD* v34; // rcx
	__int64 v35; // r10
	__m128* v36; // rdx
	__m128* v37; // rcx
	__int64 v38; // r8
	__int64 v39; // rdx
	_WORD* v40; // rcx
	_WORD* v41; // r9
	__int64 v42; // [rsp+20h] [rbp-38h]
	__int64 v43; // [rsp+28h] [rbp-30h]

	v5 = *(_QWORD*)(a4 + 48);
	v7 = *(_QWORD*)(a5 + 48);
	if (*(_DWORD*)(v5 + 1824) != *(_DWORD*)(v7 + 1824))
		return 0i64;
	v9 = (*(__int64(__fastcall**)(_QWORD))(*(_QWORD*)v7 + 280i64))(*(_QWORD*)(a5 + 48));
	if ((*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v5 + 280i64))(v5) != v9)
		return 0i64;
	v10 = 0;
	if ((__PAIR64__(*(float*)(v5 + 1684) > 0.0, *(_DWORD*)(v5 + 1684)) - COERCE_UNSIGNED_INT(0.0)) >> 32 != (__PAIR64__(*(float*)(v7 + 1684) > 0.0, *(_DWORD*)(v7 + 1684)) - COERCE_UNSIGNED_INT(0.0)) >> 32)
		return 0i64;
	v11 = *(_QWORD*)(a4 + 64);
	if (v11 != *(_QWORD*)(a5 + 64)
		|| *(_DWORD*)(a4 + 80) != *(_DWORD*)(a5 + 80)
		|| *(_DWORD*)(a4 + 84) != *(_DWORD*)(a5 + 84)
		|| *(_DWORD*)(a4 + 88) != *(_DWORD*)(a5 + 88))
	{
		return 0i64;
	}
	v12 = 0;
	v13 = (_WORD*)(v11 + 48);
	v14 = 0xFFFFi64;
	do
	{
		if (*v13 != 0xFFFF)
			return 0i64;
		++v12;
		++v13;
	} while (v12 < 4);
	v15 = *(unsigned __int16*)(v11 + 22);
	v43 = v15;
	v16 = *(_QWORD*)(*(_QWORD*)(v5 + 64) + 504i64);
	v17 = 6 * v15;
	v42 = v16;
	if (*(_DWORD*)(v16 + 48 * v15 + 8))
		return 0i64;
	v18 = 0;
	if (*(_DWORD*)(v16 + 48 * v15 + 32))
	{
		do
		{
			v19 = 0;
			v20 = (unsigned __int16*)(*(_QWORD*)(v16 + 8 * v17 + 40) + 296i64 * v18);
			do
			{
				v21 = *v20;
				if ((_DWORD)v21 != 0xFFFF)
				{
					v22 = 3 * v21;
					v23 = -1i64;
					v24 = *(_QWORD*)(*(_QWORD*)(v5 + 1056) + 24 * v21 + 16);
					if (v24)
						v23 = (*(__int64(__fastcall**)(__int64, __int64, __int64))(*(_QWORD*)v24 + 64i64))(v24, v11, 0xFFFFi64);
					v25 = -1i64;
					v26 = *(_QWORD**)(*(_QWORD*)(v7 + 1056) + 8 * v22 + 16);
					if (v26)
						v25 = (*(__int64(__fastcall**)(_QWORD*, _QWORD, __int64))(*v26 + 64i64))(v26, *v26, v14);
					if (v23 != v25)
						return 0i64;
					v14 = 0xFFFFi64;
				}
				++v19;
				++v20;
			} while (v19 < 2);
			v16 = v42;
			++v18;
			v10 = 0;
		} while (v18 < *(_DWORD*)(v42 + 8 * v17 + 32));
		v15 = v43;
	}
	v27 = 96 * v15;
	v28 = v27 + *(_QWORD*)(v5 + 1104);
	v29 = v27 + *(_QWORD*)(v7 + 1104);
	(*(void(__fastcall**)(__int64, __int64, __int64))(*(_QWORD*)qword_140C65688 + 224i64))(
		qword_140C65688,
		v11,
		0xFFFFi64);
	if (*(_BYTE*)(v28 + 88) == 1 || *(_BYTE*)(v29 + 88) == 1)
		return 0i64;
	if (v28 != v29)
	{
		v30 = *(_DWORD*)(v16 + 8 * v17 + 32);
		if (v30)
		{
			v31 = *(_QWORD*)(v28 + 8);
			v32 = *(__m128**)(v29 + 8);
			v33 = v31 + 40;
			v34 = (_DWORD*)(*(_QWORD*)(v16 + 8 * v17 + 40) + 144i64);
			v35 = v31 - (_QWORD)v32;
			while ((*(v34 - 35) && !*v34 || v32->m128_f32[0] == *(float*)((char*)v32->m128_f32 + v35))
				&& (*(v34 - 34) && !v34[1] || v32[1].m128_f32[1] == *(float*)(v33 - 20))
				&& (*(v34 - 33) && !v34[2] || v32[2].m128_f32[2] == *(float*)v33)
				&& (*(v34 - 32) && !v34[3] || v32[3].m128_f32[3] == *(float*)(v33 + 20))
				&& (*(v34 - 31) && !v34[4] || v32[5].m128_f32[0] == *(float*)(v33 + 40))
				&& v32[6].m128_f32[1] == *(float*)(v33 + 60)
				&& v32[7].m128_f32[2] == *(float*)(v33 + 80)
				&& v32[8].m128_f32[3] == *(float*)(v33 + 100)
				&& v32[10].m128_f32[0] == *(float*)(v33 + 120)
				&& (_mm_movemask_ps(_mm_cmpneq_ps(*(__m128*)(v33 + 152), v32[12])) & 7) == 0)
			{
				++v10;
				v34 += 74;
				v33 += 224i64;
				v32 += 14;
				if (v10 >= v30)
					goto LABEL_52;
			}
			return 0i64;
		}
	LABEL_52:
		if ((unsigned int)sub_1407E6AF0((unsigned __int64*)(v28 + 16), v29 + 16, 0x20ui64)
			|| (unsigned int)sub_1407E6AF0((unsigned __int64*)(v28 + 48), v29 + 48, 0x20ui64)
			|| *(_QWORD*)(v28 + 80) != *(_QWORD*)(v29 + 80))
		{
			return 0i64;
		}
	}
	v36 = *(__m128**)(a5 + 56);
	v37 = *(__m128**)(a4 + 56);
	if (v36[2].m128_f32[1] != v37[2].m128_f32[1]
		|| v36[2].m128_f32[2] != v37[2].m128_f32[2]
		|| _mm_movemask_ps(_mm_cmpneq_ps(*v36, *v37))
		|| _mm_movemask_ps(_mm_cmpneq_ps(v36[1], v37[1])))
	{
		return 0i64;
	}
	v38 = *(_QWORD*)(a4 + 72);
	v39 = *(_QWORD*)(a5 + 72);
	if (v38)
	{
		if (!v39)
			return 0i64;
		v40 = *(_WORD**)v39;
		v41 = *(_WORD**)v38;
		if (*(_WORD*)(*(_QWORD*)v38 + 2i64) != *(_WORD*)(*(_QWORD*)v39 + 2i64)
			|| v41[3] != v40[3]
			|| v41[4] != v40[4]
			|| v41[5] != v40[5]
			|| *(_QWORD*)(v38 + 8) != *(_QWORD*)(v39 + 8)
			|| *(float*)(v39 + 32) != *(float*)(v38 + 32)
			|| *(_WORD*)(v38 + 52) != *(_WORD*)(v39 + 52)
			|| *(_DWORD*)(v38 + 72) != *(_DWORD*)(v39 + 72)
			|| v38 + 92 != v39 + 92
			|| v38 + 112 != v39 + 112)
		{
			return 0i64;
		}
	}
	else if (v39)
	{
		return 0i64;
	}
	return 1i64;
}
// 140327FA5: variable 'v11' is possibly undefined
// 140327FC3: variable 'v14' is possibly undefined
// 140C65688: using guessed type __int64 qword_140C65688;

