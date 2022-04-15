//----- (0000000140552F50) ----------------------------------------------------
__int64 __fastcall sub_140552F50(__int64 a1)
{
	__int64 v1; // r9
	unsigned int v2; // r8d
	__int64 v3; // rax
	__int64 v4; // rcx
	unsigned int v5; // ecx
	__int64 v7; // [rsp+8h] [rbp+8h]

	v1 = *(_QWORD*)(*(_QWORD*)qword_140C65B80 + 8i64);
	v2 = **(_DWORD**)(a1 + 8);
	v3 = *(_QWORD*)(v1 + 8);
	v4 = v1;
	while (v3)
	{
		if (*(_DWORD*)(v3 + 32) < v2)
		{
			v3 = *(_QWORD*)(v3 + 24);
		}
		else
		{
			v4 = v3;
			v3 = *(_QWORD*)(v3 + 16);
		}
	}
	if (v4 == v1 || (v7 = v4, v2 < *(_DWORD*)(v4 + 32)))
		v7 = *(_QWORD*)(*(_QWORD*)qword_140C65B80 + 8i64);
	v5 = 0;
	LOBYTE(v5) = v7 != v1 && v7 != -40;
	return v5;
}
// 140C65B80: using guessed type __int64 qword_140C65B80;

