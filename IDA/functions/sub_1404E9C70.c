//----- (00000001404E9C70) ----------------------------------------------------
__int64 __fastcall sub_1404E9C70(_QWORD* a1)
{
	__m128* v2; // rax
	__m128* v3; // rbx
	__m128* v4; // rcx
	unsigned int v5; // esi
	__int32 v6; // eax
	unsigned int v7; // ebp
	__int32 v8; // eax
	unsigned int v9; // ebx
	__m128 v11; // [rsp+20h] [rbp-18h] BYREF
	unsigned __int64 v12; // [rsp+48h] [rbp+10h] BYREF

	if (!qword_140C63658)
		sub_140056830(a1, (unsigned __int64*)"AlienFx not loaded.");
	v2 = (__m128*)a1[3];
	v3 = (__m128*)dword_140A12138;
	v4 = (__m128*)dword_140A12138;
	if ((unsigned __int64)v2 < a1[2])
		v4 = v2;
	v5 = 0;
	v6 = v4->m128_i32[2];
	if (v6 == 3)
		goto LABEL_9;
	if (v6 == 4 && sub_14005AC80((char*)(v4->m128_u64[0] + 32), &v12))
	{
		v11.m128_i32[2] = 3;
		v4 = &v11;
		v11.m128_u64[0] = v12;
	LABEL_9:
		v7 = (int)*(double*)v4->m128_u64;
		goto LABEL_10;
	}
	v7 = 0;
LABEL_10:
	if ((unsigned __int64)(a1[3] + 16i64) < a1[2])
		v3 = (__m128*)(a1[3] + 16i64);
	v8 = v3->m128_i32[2];
	if (v8 == 3)
		goto LABEL_16;
	if (v8 == 4 && sub_14005AC80((char*)(v3->m128_u64[0] + 32), &v12))
	{
		v11.m128_i32[2] = 3;
		v3 = &v11;
		v11.m128_u64[0] = v12;
	LABEL_16:
		v5 = (int)*(double*)v3->m128_u64;
	}
	if ((int)sub_1400FD4A0((__int64)v4, v7, v5, v11.m128_f32) < 0)
		sub_140056830(a1, (unsigned __int64*)"GetLightColor failed to get light %d color on device %d", v5, v7);
	v9 = sub_140141F10(qword_140C63678, &v11);
	LODWORD(v12) = v9;
	sub_1401430E0(a1, (unsigned int*)&v12);
	sub_1401429A0(qword_140C63678, v9);
	return 1i64;
}
// 1404E9D5B: variable 'v4' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C63658: using guessed type __int64 qword_140C63658;
// 140C63678: using guessed type __int64 qword_140C63678;

