//----- (000000014006BCE0) ----------------------------------------------------
__int64 __fastcall sub_14006BCE0(__int64 a1, int a2, int a3, int a4)
{
	__int64 v5; // rbx
	signed int v6; // esi
	int v7; // r8d
	int v8; // edx
	__int64 result; // rax

	v5 = a1;
	v6 = ((int)((unsigned __int64)(1374389535i64 * (a3 - 1)) >> 32) >> 4)
		+ ((unsigned int)((unsigned __int64)(1374389535i64 * (a3 - 1)) >> 32) >> 31)
		+ 1;
	if (a4 == -1)
		a4 = 0;
	v7 = *(_DWORD*)(*(_QWORD*)(a1 + 24) + 8i64);
	if (v6 > 511)
	{
		sub_14006BBF0(a1, ((a2 | (a4 << 17)) << 6) | 0x22, v7);
		v8 = v6;
		v7 = *(_DWORD*)(*(_QWORD*)(v5 + 24) + 8i64);
		a1 = v5;
	}
	else
	{
		v8 = ((a2 | ((v6 | (a4 << 9)) << 8)) << 6) | 0x22;
	}
	result = sub_14006BBF0(a1, v8, v7);
	*(_DWORD*)(v5 + 60) = a2 + 1;
	return result;
}

