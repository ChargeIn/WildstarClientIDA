//----- (00000001406D6090) ----------------------------------------------------
__int64 __fastcall sub_1406D6090(_QWORD* a1)
{
	_DWORD* v2; // r14
	_DWORD* v3; // rax
	__int64 v4; // rbx
	int v5; // ebp
	int v6; // edi
	int v7; // esi
	unsigned int v8; // eax
	int v9; // eax

	v2 = (_DWORD*)sub_1406D5FA0(a1);
	if (v2)
	{
		v3 = (_DWORD*)(a1[3] + 16i64);
		if ((unsigned __int64)v3 < a1[2] && v3 != dword_140A12138 && *(int*)(a1[3] + 24i64) > 0)
			sub_140056D60(a1, 2u);
		sub_1406D0EC0(v2);
		v4 = *(_QWORD*)v2;
		v5 = v2[180];
		v6 = v2[182];
		v7 = v2[506];
		v8 = (*(__int64(__fastcall**)(_DWORD*))(*(_QWORD*)v2 + 616i64))(v2);
		v9 = (*(__int64(__fastcall**)(_DWORD*, _QWORD))(v4 + 672))(v2, v8);
		sub_1400CAD80((__int64)v2, v7 * v9 + v5 - v6, v6 - v5, v7);
	}
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];

