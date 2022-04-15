//----- (0000000140551630) ----------------------------------------------------
__int64 __fastcall sub_140551630(__int64 a1, unsigned int a2)
{
	__int64 v2; // r10
	unsigned int v3; // r9d
	__int64 v4; // rax
	__int64 v5; // rcx
	__int64 v7; // [rsp+8h] [rbp+8h]

	v2 = *(_QWORD*)(*(_QWORD*)qword_140C65B80 + 8i64);
	v3 = **(_DWORD**)(a1 + 8);
	v4 = *(_QWORD*)(v2 + 8);
	v5 = v2;
	while (v4)
	{
		if (*(_DWORD*)(v4 + 32) < v3)
		{
			v4 = *(_QWORD*)(v4 + 24);
		}
		else
		{
			v5 = v4;
			v4 = *(_QWORD*)(v4 + 16);
		}
	}
	if (v5 == v2 || (v7 = v5, v3 < *(_DWORD*)(v5 + 32)))
		v7 = *(_QWORD*)(*(_QWORD*)qword_140C65B80 + 8i64);
	if (v7 == v2 || v7 == -40)
		return 0i64;
	else
		return sub_140611490((__int64*)(v7 + 40), a2);
}
// 140C65B80: using guessed type __int64 qword_140C65B80;

