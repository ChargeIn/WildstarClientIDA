//----- (0000000140553630) ----------------------------------------------------
__int64 __fastcall sub_140553630(__int64 a1)
{
	unsigned int* v1; // r10
	unsigned int v2; // r8d
	__int64 v3; // r9
	__int64 v4; // rcx
	__int64 v5; // rax
	unsigned int v6; // edx
	unsigned int v7; // eax
	__int64 v9; // [rsp+8h] [rbp+8h]

	v1 = *(unsigned int**)(a1 + 8);
	v2 = *v1;
	v3 = *(_QWORD*)(*(_QWORD*)qword_140C65B80 + 8i64);
	v4 = v3;
	v5 = *(_QWORD*)(v3 + 8);
	while (v5)
	{
		if (*(_DWORD*)(v5 + 32) < v2)
		{
			v5 = *(_QWORD*)(v5 + 24);
		}
		else
		{
			v4 = v5;
			v5 = *(_QWORD*)(v5 + 16);
		}
	}
	if (v4 == v3 || (v9 = v4, v2 < *(_DWORD*)(v4 + 32)))
		v9 = *(_QWORD*)(*(_QWORD*)qword_140C65B80 + 8i64);
	if (v9 == v3)
		return 0i64;
	if (v9 == -40)
		return 0i64;
	v6 = *(_DWORD*)(v9 + 116);
	if (dword_140C636A8 < v6)
		return 0i64;
	v7 = v1[72];
	if (!v7 || dword_140C636A8 - v6 > v7)
		return 0i64;
	else
		return v7 - (dword_140C636A8 - v6);
}
// 140C636A8: using guessed type int dword_140C636A8;
// 140C65B80: using guessed type __int64 qword_140C65B80;

