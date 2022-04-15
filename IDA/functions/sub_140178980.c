//----- (0000000140178980) ----------------------------------------------------
__int64 __fastcall sub_140178980(_QWORD* a1)
{
	__int64 v2; // rdi
	_DWORD* v3; // rax
	int v4; // ecx
	BOOL v5; // ebx
	__int64 v6; // rcx
	int v7; // esi

	v2 = sub_140177AC0(a1);
	v3 = dword_140A12138;
	if ((unsigned __int64)(a1[3] + 16i64) < a1[2])
		v3 = (_DWORD*)(a1[3] + 16i64);
	v4 = v3[2];
	v5 = v4 && (v4 != 1 || *v3);
	v6 = *(_QWORD*)(v2 + 1040);
	v7 = *(_DWORD*)(v6 + 1032);
	sub_1401601D0(v6);
	(*(void(__fastcall**)(_QWORD, void*))(**(_QWORD**)(v2 + 1024) + 80i64))(*(_QWORD*)(v2 + 1024), &unk_1409DDFD4);
	if (v5 && v7 != *(_DWORD*)(*(_QWORD*)(v2 + 1040) + 1032i64))
		sub_1400D4070(v2, 0x31u, (char*)v2, byte_1409DE15C, *(_DWORD*)(*(_QWORD*)(v2 + 1040) + 1032i64), v7);
	return 0i64;
}
// 1409DE15C: using guessed type _BYTE byte_1409DE15C[608];
// 140A12138: using guessed type _DWORD dword_140A12138[4];

