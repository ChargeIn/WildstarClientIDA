//----- (00000001404CF730) ----------------------------------------------------
char __fastcall sub_1404CF730(__int64* a1, __int64* a2)
{
	__int64 v2; // r9
	__int64 v3; // rcx
	unsigned int v4; // ecx
	__int64 v5; // r8
	__int64 v6; // rdx
	__int64 v8; // rcx
	unsigned int v9; // edx
	__int64 v10; // rcx
	unsigned int v11; // ecx
	unsigned int v12; // ecx
	unsigned int v13; // edx

	v2 = *a1;
	v3 = *(_QWORD*)(*a1 + 16);
	if (v3)
		v4 = *(_DWORD*)(v3 + 4);
	else
		v4 = 0;
	v5 = *a2;
	v6 = *(_QWORD*)(*a2 + 16);
	if (v6 && v4 < *(_DWORD*)(v6 + 4))
		return -1;
	v8 = *(_QWORD*)(v2 + 16);
	if (v8)
		v9 = *(_DWORD*)(v8 + 4);
	else
		v9 = 0;
	v10 = *(_QWORD*)(v5 + 16);
	if (v10)
		v11 = *(_DWORD*)(v10 + 4);
	else
		v11 = 0;
	if (v9 > v11)
		return 1;
	v12 = *(_DWORD*)(v2 + 24);
	v13 = *(_DWORD*)(v5 + 24);
	if (v12 < v13)
		return -1;
	return v12 > v13;
}

