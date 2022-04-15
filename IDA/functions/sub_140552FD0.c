//----- (0000000140552FD0) ----------------------------------------------------
_BOOL8 __fastcall sub_140552FD0(__int64 a1)
{
	unsigned int v1; // r8d
	__int64 v2; // rax
	__int64 v3; // rcx
	__int64 v4; // rdx
	__int64 v6; // [rsp+8h] [rbp+8h]

	v1 = **(_DWORD**)(a1 + 8);
	v2 = *(_QWORD*)(*(_QWORD*)qword_140C65B80 + 40i64);
	v3 = *(_QWORD*)(v2 + 8);
	v4 = v2;
	while (v3)
	{
		if (*(_DWORD*)(v3 + 32) < v1)
		{
			v3 = *(_QWORD*)(v3 + 24);
		}
		else
		{
			v4 = v3;
			v3 = *(_QWORD*)(v3 + 16);
		}
	}
	if (v4 == v2 || (v6 = v4, v1 < *(_DWORD*)(v4 + 32)))
		v6 = *(_QWORD*)(*(_QWORD*)qword_140C65B80 + 40i64);
	return v6 != v2;
}
// 140C65B80: using guessed type __int64 qword_140C65B80;

