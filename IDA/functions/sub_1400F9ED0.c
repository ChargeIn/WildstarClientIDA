//----- (00000001400F9ED0) ----------------------------------------------------
__int64 __fastcall sub_1400F9ED0(__int64 a1)
{
	int v1; // edx
	__int64 result; // rax
	_QWORD* v3; // rax
	__int64 v4; // r10
	__int64 v5; // rdx
	__int64 v6; // r11
	__int64 v7; // rcx
	_DWORD* v8; // rax

	v1 = *(_DWORD*)(a1 + 8);
	if (v1 == -2)
		return 0xFFFFFFFFi64;
	v3 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 32i64) + 160i64), v1);
	v5 = *(_QWORD*)(v4 + 16);
	*(_QWORD*)v5 = *v3;
	*(_DWORD*)(v5 + 8) = *((_DWORD*)v3 + 2);
	*(_QWORD*)(v4 + 16) += 16i64;
	v7 = *(_QWORD*)(v6 + 16);
	v8 = (_DWORD*)(*(_QWORD*)(v7 + 16) - 16i64);
	if (v8 == dword_140A12138)
		result = 0xFFFFFFFFi64;
	else
		result = (unsigned int)v8[2];
	*(_QWORD*)(v7 + 16) -= 16i64;
	return result;
}
// 1400F9EFB: variable 'v4' is possibly undefined
// 1400F9F10: variable 'v6' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];

