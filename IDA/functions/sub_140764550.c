//----- (0000000140764550) ----------------------------------------------------
__int64 __fastcall sub_140764550(__int64* a1, __int64* a2)
{
	__int64 v2; // rax
	__int64 v3; // rcx
	unsigned int v6; // edx
	__int64 v7; // rbx
	__int64 v8; // rax
	__int64 v9; // r8
	int v10; // ecx
	__int64 v11; // rdx
	int v12; // eax
	int v13; // eax
	int v14; // ecx
	__int64 v15; // rax
	__int64 v16; // rcx

	v2 = *a1;
	v3 = *a2;
	if (v2 == *a2)
		return 0i64;
	if (!v2)
		return 1i64;
	if (!v3)
		return 0xFFFFFFFFi64;
	v6 = *(_DWORD*)(v2 + 16);
	if (v6 == *(_DWORD*)(v3 + 16))
		return 0i64;
	v7 = sub_140214E00(v6);
	v8 = sub_140214E00(*(_DWORD*)(*a2 + 16));
	v9 = v8;
	if (!v7)
		return 1i64;
	if (!v8)
		return 0xFFFFFFFFi64;
	v10 = 0;
	v11 = *(_QWORD*)(qword_140C65898 + 120);
	if (v11)
		v12 = *(_DWORD*)(v11 + 56);
	else
		v12 = 0;
	v13 = v12 - *(_DWORD*)(v7 + 24);
	if (v11)
		v10 = *(_DWORD*)(v11 + 56);
	v14 = v10 - *(_DWORD*)(v9 + 24);
	if (v13 != v14)
		return (unsigned int)(v13 - v14);
	v15 = *(unsigned int*)(v7 + 12);
	v16 = *(unsigned int*)(v9 + 12);
	if ((_DWORD)v15 == (_DWORD)v16)
		return 0i64;
	else
		return (unsigned int)(dword_140B76280[v15] - dword_140B76280[v16]);
}
// 140B76280: using guessed type _DWORD dword_140B76280[16];
// 140C65898: using guessed type __int64 qword_140C65898;

