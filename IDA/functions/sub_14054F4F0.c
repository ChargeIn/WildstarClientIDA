//----- (000000014054F4F0) ----------------------------------------------------
__int64 __fastcall sub_14054F4F0(__int64 a1)
{
	__int64 v1; // r9
	unsigned int v2; // r8d
	__int64 v3; // rax
	__int64 v4; // rcx
	__int64 v6; // [rsp+8h] [rbp+8h]

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
	if (v4 == v1 || (v6 = v4, v2 < *(_DWORD*)(v4 + 32)))
		v6 = *(_QWORD*)(*(_QWORD*)qword_140C65B80 + 8i64);
	if (v6 == v1 || v6 == -40)
		return 0i64;
	else
		return *(unsigned int*)(v6 + 112);
}
// 140C65B80: using guessed type __int64 qword_140C65B80;

