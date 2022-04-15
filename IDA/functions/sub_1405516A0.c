//----- (00000001405516A0) ----------------------------------------------------
__int64 __fastcall sub_1405516A0(__int64 a1, unsigned int a2)
{
	__int64 v2; // r11
	__int64 v3; // r10
	unsigned int v4; // r9d
	__int64 v5; // rax
	__int64 v6; // rcx
	__int64 v7; // rcx
	unsigned int v8; // edx
	__int64 v10; // [rsp+8h] [rbp+8h]

	v2 = a2;
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
	if (v6 == v3 || (v10 = v6, v4 < *(_DWORD*)(v6 + 32)))
		v10 = *(_QWORD*)(*(_QWORD*)qword_140C65B80 + 8i64);
	if (v10 == v3)
		return 0i64;
	v7 = v10 + 40;
	if (v10 == -40)
		return 0i64;
	if (!*(_QWORD*)v7)
		return 0i64;
	v8 = *(_DWORD*)(*(_QWORD*)v7 + 16i64);
	if ((_DWORD)v2 == v8 || (unsigned int)v2 > v8)
		return 0i64;
	else
		return (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(v7 + 8 * v2 + 16) + 64i64))(*(_QWORD*)(v7 + 8 * v2 + 16));
}
// 140C65B80: using guessed type __int64 qword_140C65B80;

