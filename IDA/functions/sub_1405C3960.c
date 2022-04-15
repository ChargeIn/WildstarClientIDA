//----- (00000001405C3960) ----------------------------------------------------
__int64 __fastcall sub_1405C3960(__int64 a1, unsigned int a2)
{
	__int64 v2; // r9
	__int64 v3; // rax
	__int64 v4; // r8
	unsigned int v5; // edx
	__int64 v7; // [rsp+8h] [rbp+8h]

	v2 = *(_QWORD*)(a1 + 512);
	v3 = *(_QWORD*)(v2 + 8);
	v4 = v2;
	while (v3)
	{
		if (*(_DWORD*)(v3 + 32) < a2)
		{
			v3 = *(_QWORD*)(v3 + 24);
		}
		else
		{
			v4 = v3;
			v3 = *(_QWORD*)(v3 + 16);
		}
	}
	if (v4 == v2 || (v7 = v4, a2 < *(_DWORD*)(v4 + 32)))
		v7 = *(_QWORD*)(a1 + 512);
	v5 = 0;
	LOBYTE(v5) = v7 == v2
		|| (((*(_DWORD*)(*(_QWORD*)(v7 + 40) + 8i64) & *(_DWORD*)(a1 + 160)) == 0) & *(_DWORD*)(*(_QWORD*)(v7 + 40) + 8i64)) == 0;
	return v5;
}

