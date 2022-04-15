#include "../winhttp.h"

//----- (0000000140066140) ----------------------------------------------------
unsigned __int64 __fastcall sub_140066140(__int64 a1)
{
	__int64 v1; // rbx
	__int64 v2; // rdi
	__int64 i; // rsi
	__int64 v5; // r14
	__int64 v6; // rbp
	__int64 v7; // r15
	__int64 v8; // rax
	__int64 v9; // r14
	__int64 v10; // rbp
	__int64 v11; // r15
	__int64 v12; // rax
	__int64 v13; // r14
	__int64 v14; // rbp
	__int64 v15; // r15
	__int64 v16; // rax
	__int64 v17; // r14
	__int64 v18; // rbp
	__int64 v19; // r15
	__int64 v20; // rax
	int v21; // edx
	__int64 v22; // r14
	__int64 v23; // rbp
	__int64 v24; // r15
	__int64 v25; // rax
	unsigned int v26; // edx
	__int64 v27; // r14
	__int64 v28; // rbp
	__int64 v29; // r15
	__int64 v30; // rax
	unsigned __int64 result; // rax
	__int64 v32; // rbx
	__int64 v33; // rax

	v1 = *(_QWORD*)(a1 + 48);
	v2 = *(_QWORD*)(a1 + 56);
	for (i = *(_QWORD*)v1;
		*(_BYTE*)(v1 + 74);
		*(_DWORD*)(*(_QWORD*)(*(_QWORD*)v1 + 48i64)
			+ 16i64 * *(unsigned __int16*)(v1 + 2i64 * *(unsigned __int8*)(v1 + 74) + 196)
			+ 12) = *(_DWORD*)(v1 + 48))
	{
		--* (_BYTE*)(v1 + 74);
	}
	sub_14006BBF0(v1, 8388638, *(_DWORD*)(*(_QWORD*)(v1 + 24) + 8i64));
	if ((unsigned __int64)(*(_DWORD*)(v1 + 48) + 1) > 0x3FFFFFFFFFFFFFFFi64)
		sub_14005ABE0(v2, aMemoryAllocati);
	v5 = *(_QWORD*)(v2 + 32);
	v6 = 4i64 * *(int*)(v1 + 48);
	v7 = 4i64 * *(int*)(i + 80);
	v8 = (*(__int64(__fastcall**)(_QWORD, _QWORD, __int64, __int64))(v5 + 16))(
		*(_QWORD*)(v5 + 24),
		*(_QWORD*)(i + 24),
		v7,
		v6);
	if (!v8 && v6)
		sub_140061040(v2, 4);
	*(_QWORD*)(v5 + 120) += v6 - v7;
	*(_QWORD*)(i + 24) = v8;
	*(_DWORD*)(i + 80) = *(_DWORD*)(v1 + 48);
	if ((unsigned __int64)(*(_DWORD*)(v1 + 48) + 1) > 0x3FFFFFFFFFFFFFFFi64)
		sub_14005ABE0(v2, aMemoryAllocati);
	v9 = *(_QWORD*)(v2 + 32);
	v10 = 4i64 * *(int*)(v1 + 48);
	v11 = 4i64 * *(int*)(i + 84);
	v12 = (*(__int64(__fastcall**)(_QWORD, _QWORD, __int64, __int64))(v9 + 16))(
		*(_QWORD*)(v9 + 24),
		*(_QWORD*)(i + 40),
		v11,
		v10);
	if (!v12 && v10)
		sub_140061040(v2, 4);
	*(_QWORD*)(v9 + 120) += v10 - v11;
	*(_QWORD*)(i + 40) = v12;
	*(_DWORD*)(i + 84) = *(_DWORD*)(v1 + 48);
	if ((unsigned __int64)(*(_DWORD*)(v1 + 64) + 1) > 0xFFFFFFFFFFFFFFFi64)
		sub_14005ABE0(v2, aMemoryAllocati);
	v13 = *(_QWORD*)(v2 + 32);
	v14 = 16i64 * *(int*)(v1 + 64);
	v15 = 16i64 * *(int*)(i + 76);
	v16 = (*(__int64(__fastcall**)(_QWORD, _QWORD, __int64, __int64))(v13 + 16))(
		*(_QWORD*)(v13 + 24),
		*(_QWORD*)(i + 16),
		v15,
		v14);
	if (!v16 && v14)
		sub_140061040(v2, 4);
	*(_QWORD*)(v13 + 120) += v14 - v15;
	*(_QWORD*)(i + 16) = v16;
	*(_DWORD*)(i + 76) = *(_DWORD*)(v1 + 64);
	if ((unsigned __int64)(*(_DWORD*)(v1 + 68) + 1) > 0x1FFFFFFFFFFFFFFFi64)
		sub_14005ABE0(v2, aMemoryAllocati);
	v17 = *(_QWORD*)(v2 + 32);
	v18 = 8i64 * *(int*)(v1 + 68);
	v19 = 8i64 * *(int*)(i + 88);
	v20 = (*(__int64(__fastcall**)(_QWORD, _QWORD, __int64, __int64))(v17 + 16))(
		*(_QWORD*)(v17 + 24),
		*(_QWORD*)(i + 32),
		v19,
		v18);
	if (!v20 && v18)
		sub_140061040(v2, 4);
	*(_QWORD*)(v17 + 120) += v18 - v19;
	*(_QWORD*)(i + 32) = v20;
	*(_DWORD*)(i + 88) = *(_DWORD*)(v1 + 68);
	v21 = *(__int16*)(v1 + 72);
	if ((unsigned __int64)(v21 + 1) > 0xFFFFFFFFFFFFFFFi64)
		sub_14005ABE0(v2, aMemoryAllocati);
	v22 = *(_QWORD*)(v2 + 32);
	v23 = 16i64 * (__int16)v21;
	v24 = 16i64 * *(int*)(i + 92);
	v25 = (*(__int64(__fastcall**)(_QWORD, _QWORD, __int64, __int64))(v22 + 16))(
		*(_QWORD*)(v22 + 24),
		*(_QWORD*)(i + 48),
		v24,
		v23);
	if (!v25 && v23)
		sub_140061040(v2, 4);
	*(_QWORD*)(v22 + 120) += v23 - v24;
	v26 = *(unsigned __int8*)(i + 112);
	*(_QWORD*)(i + 48) = v25;
	*(_DWORD*)(i + 92) = *(__int16*)(v1 + 72);
	if ((unsigned __int64)(int)(v26 + 1) > 0x1FFFFFFFFFFFFFFFi64)
		sub_14005ABE0(v2, aMemoryAllocati);
	v27 = *(_QWORD*)(v2 + 32);
	v28 = 8i64 * v26;
	v29 = 8i64 * *(int*)(i + 72);
	v30 = (*(__int64(__fastcall**)(_QWORD, _QWORD, __int64, __int64))(v27 + 16))(
		*(_QWORD*)(v27 + 24),
		*(_QWORD*)(i + 56),
		v29,
		v28);
	if (!v30 && v28)
		sub_140061040(v2, 4);
	*(_QWORD*)(v27 + 120) += v28 - v29;
	*(_QWORD*)(i + 56) = v30;
	*(_DWORD*)(i + 72) = *(unsigned __int8*)(i + 112);
	*(_QWORD*)(a1 + 48) = *(_QWORD*)(v1 + 16);
	*(_QWORD*)(v2 + 16) -= 32i64;
	result = (unsigned int)(*(_DWORD*)(a1 + 16) - 285);
	if ((unsigned int)result <= 1)
	{
		v32 = *(_QWORD*)(a1 + 56);
		v33 = sub_140062650(
			v32,
			(unsigned __int64*)(*(_QWORD*)(a1 + 24) + 32i64),
			*(_QWORD*)(*(_QWORD*)(a1 + 24) + 16i64));
		result = (unsigned __int64)sub_14005C630(v32, *(_QWORD*)(*(_QWORD*)(a1 + 48) + 8i64), v33);
		if (!*(_DWORD*)(result + 8))
		{
			*(_DWORD*)result = 1;
			*(_DWORD*)(result + 8) = 1;
		}
	}
	return result;
}

