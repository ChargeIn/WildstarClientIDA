//----- (0000000140473890) ----------------------------------------------------
__int64 __fastcall sub_140473890(__int64 a1)
{
	__int64 v1; // rax
	__int64 v3; // rax
	int v4; // r9d
	int* v5; // r11
	__int64 v6; // r8
	unsigned int* v7; // rdx
	__int64 result; // rax

	v1 = *(_QWORD*)(a1 + 24);
	if (!v1)
		return 0i64;
	v3 = *(_QWORD*)(v1 + 296);
	v4 = *(_DWORD*)(a1 + 13820);
	v5 = *(int**)(qword_140C65898 + 120);
	v6 = *(_QWORD*)(v3 + 8);
	v7 = *(unsigned int**)v3;
	result = v5
		? sub_140612F70(qword_140C65898, v7, v6, v4, v5[13], v5[55], v5[54])
		: sub_140612F70(qword_140C65898, v7, v6, v4, 3, 23, 17);
	if (!(_DWORD)result)
		return 0i64;
	*(_DWORD*)(a1 + 13820) = result;
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;

