//----- (000000014004EB60) ----------------------------------------------------
__int64 __fastcall sub_14004EB60(_QWORD* a1)
{
	_DWORD* v1; // rax
	__int64* v3; // rax
	__int64 v4; // rbx
	float v5; // xmm7_4
	float v6; // xmm6_4
	float v7; // xmm2_4
	__int64 v9; // [rsp+58h] [rbp+10h]

	v1 = (_DWORD*)a1[3];
	if (((unsigned __int64)v1 >= a1[2] || v1 == dword_140A12138 || v1[2])
		&& (v3 = (__int64*)sub_140056AB0(a1, 1u)) != 0i64)
	{
		v4 = *v3;
	}
	else
	{
		v4 = 0i64;
	}
	v5 = sub_140056C40(a1, 2u);
	v6 = sub_140056C40(a1, 3u);
	*(float*)&v9 = v6;
	v7 = sub_140056C40(a1, 4u);
	*(float*)(v4 + 36) = (float)(*(float*)&dword_140C3B438 * 0.0055555557) * v5;
	*((float*)&v9 + 1) = v7;
	*(_QWORD*)(v4 + 40) = v9;
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C3B438: using guessed type int dword_140C3B438;

