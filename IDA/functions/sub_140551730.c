//----- (0000000140551730) ----------------------------------------------------
__int64 __fastcall sub_140551730(__int64 a1, unsigned int a2, unsigned int a3)
{
	__int64 v3; // r11
	unsigned int v4; // r10d
	__int64 v5; // rax
	__int64 v6; // rcx
	__int64 v8; // [rsp+8h] [rbp+8h]

	v3 = *(_QWORD*)(*(_QWORD*)qword_140C65B80 + 8i64);
	v4 = **(_DWORD**)(a1 + 8);
	v5 = *(_QWORD*)(v3 + 8);
	v6 = v3;
	while (v5)
	{
		if (*(_DWORD*)(v5 + 32) < v4)
		{
			v5 = *(_QWORD*)(v5 + 24);
		}
		else
		{
			v6 = v5;
			v5 = *(_QWORD*)(v5 + 16);
		}
	}
	if (v6 == v3 || (v8 = v6, v4 < *(_DWORD*)(v6 + 32)))
		v8 = *(_QWORD*)(*(_QWORD*)qword_140C65B80 + 8i64);
	if (v8 == v3 || v8 == -40)
		return 0i64;
	else
		return sub_140611680((__int64*)(v8 + 40), a2, a3);
}
// 140C65B80: using guessed type __int64 qword_140C65B80;

