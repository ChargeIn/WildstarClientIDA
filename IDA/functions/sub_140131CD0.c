//----- (0000000140131CD0) ----------------------------------------------------
__int64 __fastcall sub_140131CD0(_QWORD* a1)
{
	__int64 v2; // rax
	_DWORD* v3; // rdx
	_DWORD* v4; // rdi
	int v5; // eax
	__int128 v7; // [rsp+20h] [rbp-18h] BYREF

	v2 = sub_140131630(a1, 1u);
	v3 = (_DWORD*)(a1[3] + 16i64);
	v4 = (_DWORD*)v2;
	if ((unsigned __int64)v3 >= a1[2] || v3 == dword_140A12138 || *(_DWORD*)(a1[3] + 24i64) != 5)
	{
		v7 = *(_OWORD*)sub_140056AB0(a1, 2u);
	}
	else
	{
		sub_1400F0A10((__int64)a1, 2, (__int64)"x", (float*)&v7);
		sub_1400F0A10((__int64)a1, 2, (__int64)"y", (float*)&v7 + 1);
	}
	v5 = (int)*(float*)&v7;
	v4[353] = (int)*((float*)&v7 + 1);
	v4[352] = v5;
	sub_1400C3AD0((__int64)(v4 + 256), v4 + 340);
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];

