//----- (00000001403DF570) ----------------------------------------------------
__int64 __fastcall sub_1403DF570(__int64 a1, int* a2)
{
	_DWORD* v3; // rax
	int v4; // ecx
	__int64 v5; // r8
	__int64 v6; // rcx
	BOOL v7; // edx
	__int64 result; // rax

	v3 = (_DWORD*)sub_1403D90D0(a1, *a2);
	if (!v3)
		return 0i64;
	v4 = a2[1];
	v5 = qword_140C65898;
	v3[1578] = 1;
	v3[76] = v4;
	v6 = *(_QWORD*)(v5 + 120);
	if (!v6)
		return 0i64;
	v7 = v3[2] == *(_DWORD*)(v6 + 8);
	result = 0i64;
	if (v7)
		*(_DWORD*)(v5 + 28568) = 1;
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;

