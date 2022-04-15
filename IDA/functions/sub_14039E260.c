#include "../winhttp.h"

//----- (000000014039E260) ----------------------------------------------------
__int64 __fastcall sub_14039E260(__int64 a1, __m128* a2)
{
	__int64 v2; // rdi
	__int64 v4; // rcx
	float v6; // xmm6_4
	int v7; // xmm7_4
	unsigned int v8; // eax
	unsigned int v9; // esi
	__int32 v10; // eax
	_BYTE v11[12]; // [rsp+30h] [rbp-38h] BYREF

	v2 = qword_140C65898;
	v4 = *(_QWORD*)(qword_140C65898 + 120);
	if (!v4 || *(_DWORD*)(v4 + 128) != 20 || !(unsigned int)sub_1403AD600(v4))
		return 44i64;
	if (sub_14039E0E0(v2) && !sub_14039E0A0(v2))
		return 43i64;
	if (!a2 || !(*(unsigned int(__fastcall**)(__m128*))(a2->m128_u64[0] + 32))(a2))
		return 45i64;
	v6 = 0.0;
	v7 = 1084227584;
	v8 = sub_14046C580((__int64)a2, *(_QWORD*)(v2 + 25744));
	v9 = v8;
	if (v8 && sub_1403ACD90(qword_140C65B70, v8, *(_QWORD*)(qword_140C65898 + 25744)))
	{
		v6 = sub_1403AD860(qword_140C65B70, v9, (__int64)a2);
		v7 = sub_1403AD8F0(qword_140C65B70, v9, (__int64)a2);
	}
	if (!sub_1403AD690(*(__m128**)(v2 + 25744), a2, v6, *(float*)&v7, 3.0))
		return 51i64;
	*(_QWORD*)v11 = 0i64;
	v10 = a2->m128_i32[2];
	*(_QWORD*)&v11[4] = 3i64;
	*(_DWORD*)v11 = v10;
	sub_1403F4900(qword_140C65898, 0x1B0u, (__int64)v11);
	return 0i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B70: using guessed type __int64 qword_140C65B70;

