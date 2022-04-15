//----- (000000014062C9B0) ----------------------------------------------------
__int64 __fastcall sub_14062C9B0(struct tagPOINT a1, __int64 a2, _OWORD* a3)
{
	__int64 v3; // rcx
	int v5; // eax
	_DWORD* v6; // rdi
	int v7; // edx
	__int64 v8; // rax
	float v9; // xmm7_4
	__int64 v10; // rax
	float v11; // xmm7_4
	float v12; // xmm8_4
	int v13; // ebp
	float v14; // xmm3_4
	float v15; // xmm2_4
	int v16; // esi
	float v17; // xmm1_4
	float v18; // xmm6_4
	float v19; // xmm0_4
	float v20; // xmm0_4
	double v21; // xmm0_8
	double v22; // xmm0_8
	__int64 result; // rax
	struct tagPOINT Point; // [rsp+70h] [rbp+8h] BYREF
	int v25; // [rsp+78h] [rbp+10h]
	int v26; // [rsp+7Ch] [rbp+14h]

	Point = a1;
	v3 = qword_140C65898;
	*(_OWORD*)a2 = *a3;
	if (!sub_14039E1A0(v3))
		return a2;
	v5 = dword_140C4EAC0;
	if (*(_DWORD*)qword_140C63750 < dword_140C4EAC0)
		v5 = *(_DWORD*)qword_140C63750;
	if (!byte_140C4EAD0[v5])
		return a2;
	v6 = (_DWORD*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 584i64))(qword_140C65670);
	v7 = v6[1] + (v6[3] >> 1);
	v25 = *v6 + (v6[2] >> 1);
	v26 = v7;
	GetCursorPos(&Point);
	ScreenToClient(*(HWND*)(qword_140C635F0 + 8), &Point);
	v8 = *(_QWORD*)(qword_140C65898 + 29096);
	if (!v8)
		v8 = *(_QWORD*)(qword_140C65898 + 29088);
	v9 = (float)*(int*)(v8 + 488);
	v10 = *(_QWORD*)(qword_140C65898 + 29096);
	v11 = v9 * 0.5;
	if (!v10)
		v10 = *(_QWORD*)(qword_140C65898 + 29088);
	v12 = (float)*(int*)(v10 + 492) * 0.5;
	v13 = (int)fmaxf(-v11, fminf((float)(Point.x - v25), v11));
	v14 = (float)(int)v6[2] * 0.039999999;
	v15 = (float)(int)v6[3] * 0.039999999;
	v16 = (int)fmaxf(-v12, fminf((float)(Point.y - v26), v12));
	if ((float)(v13 * v13 + v16 * v16) <= (float)(v15 * v15))
		return a2;
	v17 = 0.0;
	v18 = 0.0;
	v19 = (float)(int)abs32(v13);
	if (v19 > v14)
		v17 = (float)(v19 - v14) / (float)(v11 - v14);
	v20 = (float)(int)abs32(v16);
	if (v20 > v15)
		v18 = (float)(v20 - v15) / (float)(v12 - v15);
	if (fabs(v17) >= 0.0000099999997)
	{
		v21 = sub_1408FBFC0(COERCE_DOUBLE(1084227584i64), v17 * 1.5);
		*(_DWORD*)a2 = LODWORD(v21);
		if (v13 < 0)
			*(float*)a2 = *(float*)&v21 * -1.0;
	}
	if (fabs(v18) < 0.0000099999997)
		return a2;
	v22 = sub_1408FBFC0(COERCE_DOUBLE(1088421888i64), v18 * 1.5);
	result = a2;
	*(_DWORD*)(a2 + 4) = LODWORD(v22);
	if (v16 < 0)
		*(float*)(a2 + 4) = *(float*)&v22 * -1.0;
	return result;
}
// 140B7B500: using guessed type __int128 xmmword_140B7B500;
// 140B7B530: using guessed type __int128 xmmword_140B7B530;
// 140C4EAC0: using guessed type int dword_140C4EAC0;
// 140C4EAD0: using guessed type _BYTE byte_140C4EAD0[32];
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C65670: using guessed type __int64 qword_140C65670;
// 140C65898: using guessed type __int64 qword_140C65898;

