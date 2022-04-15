#include "../winhttp.h"

//----- (0000000140337950) ----------------------------------------------------
__int64 __fastcall sub_140337950(__int64 a1, __int64 a2, __int64 a3)
{
	const __m128i* v6; // rax
	const __m128i* v7; // rbx
	__int8* v8; // rcx
	const __m128i* v9; // rcx
	__int64 result; // rax
	const __m128i* v11; // rax
	const __m128i* v12; // rax
	int v13; // ecx

	v6 = sub_1407DDCF8(*(const __m128i**)a1, (const __m128i*) & unk_1409E68FC);
	v7 = 0i64;
	v8 = 0i64;
	if (v6)
		v8 = &v6->m128i_i8[1];
	v9 = (const __m128i*)(v8 + 1);
	*(_QWORD*)(a2 + 8) = v9;
	if (!v9)
		return 2147500037i64;
	v11 = sub_1407DDCF8(v9, (const __m128i*) & unk_1409E69C4);
	if (v11)
		v7 = (const __m128i*) & v11->m128i_i8[1];
	*(_QWORD*)(a3 + 8) = v7;
	if (!v7)
		return 2147500037i64;
	v12 = sub_1407DDCF8(v7, (const __m128i*) & unk_1409E6984);
	if (!v12)
		return 2147500037i64;
	*(_DWORD*)a2 = *(_DWORD*)(a3 + 8) - *(_DWORD*)(a2 + 8) - 1;
	v13 = (_DWORD)v12 - *(_DWORD*)(a3 + 8);
	result = 0i64;
	*(_DWORD*)a3 = v13;
	*(_DWORD*)(a1 + 16) = 1;
	return result;
}

