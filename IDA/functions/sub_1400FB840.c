//----- (00000001400FB840) ----------------------------------------------------
__int64 __fastcall sub_1400FB840(__int64 a1, int a2)
{
	_DWORD* v4; // rax
	__int64 v5; // rdx
	_DWORD* v6; // rax
	__int64 v7; // r10
	__int64 v8; // rdx

	v4 = sub_1400580E0(*(_QWORD*)(a1 + 16), a2);
	if (v4 == dword_140A12138 || v4[2] != 5)
		return 2147500037i64;
	sub_1400579E0(*(_QWORD*)(a1 + 16), v5, *(_DWORD*)(a1 + 8));
	v6 = sub_1400580E0(*(_QWORD*)(a1 + 16), a2);
	v8 = *(_QWORD*)(v7 + 16);
	*(_QWORD*)v8 = *(_QWORD*)v6;
	*(_DWORD*)(v8 + 8) = v6[2];
	*(_QWORD*)(v7 + 16) += 16i64;
	*(_DWORD*)(a1 + 8) = sub_1400578C0(*(_QWORD*)(a1 + 16));
	return 0i64;
}
// 1400FB872: variable 'v5' is possibly undefined
// 1400FB885: variable 'v7' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];

