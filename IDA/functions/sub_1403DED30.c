//----- (00000001403DED30) ----------------------------------------------------
__int64 __fastcall sub_1403DED30(__int64 a1, int* a2)
{
	__int64 v3; // rax
	_DWORD* v4; // r8
	int v5; // ecx
	__int64 v6; // rdx
	__int64 v7; // rax
	int v8; // r9d
	int v9; // eax
	__int64 v10; // rax
	__int64 result; // rax

	v3 = sub_1403D90D0(a1, *a2);
	v4 = (_DWORD*)v3;
	if (!v3)
		return 0i64;
	v5 = a2[1];
	v6 = qword_140C65898;
	*(_DWORD*)(v3 + 6312) = 1;
	*(_DWORD*)(v3 + 14160) = v5;
	v7 = *(_QWORD*)(v6 + 120);
	v8 = 0;
	if (v7 && v4[2] == *(_DWORD*)(v7 + 8))
		*(_DWORD*)(v6 + 28568) = 1;
	v9 = a2[2];
	if (v4[3541] == v9)
		return 0i64;
	v4[3541] = v9;
	v4[1578] = 1;
	v10 = *(_QWORD*)(v6 + 120);
	if (!v10)
		return 0i64;
	LOBYTE(v8) = v4[2] == *(_DWORD*)(v10 + 8);
	result = 0i64;
	if (v8)
		*(_DWORD*)(v6 + 28568) = 1;
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;

