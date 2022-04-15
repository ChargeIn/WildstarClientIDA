//----- (00000001400D27A0) ----------------------------------------------------
_BOOL8 __fastcall sub_1400D27A0(__int64 a1, _DWORD* a2)
{
	_QWORD* v2; // r8
	int v4; // eax
	char* v5; // rcx
	BOOL v7; // [rsp+60h] [rbp+8h] BYREF

	v2 = *(_QWORD**)(a1 + 32);
	if (*(char*)(a1 + 28) >= 0)
		return 0i64;
	v4 = *(_DWORD*)(a1 + 656);
	v5 = &byte_140B7B700;
	v7 = (v4 & 0x4000) == 0i64;
	if (v2[430])
		v5 = (char*)v2[430];
	sub_1400D4070(a1, 0x15u, (char*)a1, "iiWsi>i", *a2, a2[1], v2[423], v5, v2[436], &v7);
	return v7;
}
// 140B7B700: using guessed type char byte_140B7B700;

