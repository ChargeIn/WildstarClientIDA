//----- (00000001400D2910) ----------------------------------------------------
bool __fastcall sub_1400D2910(__int64 a1)
{
	__int64 v1; // rax
	char* v2; // r8
	int v4; // [rsp+50h] [rbp+8h] BYREF

	v1 = *(_QWORD*)(a1 + 32);
	v2 = &byte_140B7B700;
	v4 = 0;
	if (*(_QWORD*)(v1 + 3440))
		v2 = *(char**)(v1 + 3440);
	sub_1400D4070(a1, 0x18u, (char*)a1, "si>b", v2, *(_QWORD*)(v1 + 3488), &v4);
	return v4 != 0;
}
// 140B7B700: using guessed type char byte_140B7B700;

