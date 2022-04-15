//----- (00000001400D28C0) ----------------------------------------------------
char __fastcall sub_1400D28C0(__int64 a1)
{
	__int64 v1; // rax
	char* v2; // rdx
	__int64 v3; // r8
	char* v4; // rax

	v1 = *(_QWORD*)(a1 + 32);
	v2 = *(char**)(v1 + 3440);
	v3 = *(_QWORD*)(v1 + 3488);
	v4 = &byte_140B7B700;
	if (v2)
		v4 = v2;
	return sub_1400D4070(a1, 0x17u, (char*)a1, byte_1409D2FFC, v4, v3);
}
// 1409D2FFC: using guessed type _BYTE byte_1409D2FFC[24];
// 140B7B700: using guessed type char byte_140B7B700;

