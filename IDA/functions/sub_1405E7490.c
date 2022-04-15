//----- (00000001405E7490) ----------------------------------------------------
__int64 __fastcall sub_1405E7490(__int64 a1, unsigned __int64 a2, int a3)
{
	__int64 v7; // r8
	__int64 v8; // rax
	__int64 v9; // rbx
	char v10; // [rsp+38h] [rbp+10h] BYREF

	if (a2 >= sub_1405E73E0(a1))
		return 2147500037i64;
	if (a2 == *(_QWORD*)(a1 + 48))
		return 0i64;
	if (!*(_DWORD*)(a1 + 4 * a2 + 8))
		return 2147500037i64;
	if (a3)
	{
		if (!qword_140C65898)
			return 2147500037i64;
		v7 = *(_QWORD*)(qword_140C65898 + 120);
		if (!v7)
			return 2147500037i64;
		v8 = sub_1403ACD90(qword_140C65B70, *(_DWORD*)(a1 + 4 * a2 + 20), v7);
		if (v8)
		{
			if ((*(_DWORD*)(*(_QWORD*)(v8 + 112) + 36i64) & 0xFFFFFFFD) == 0)
			{
				v9 = *(_QWORD*)(*(_QWORD*)(qword_140C65898 + 120) + 5640i64);
				if (v9)
				{
					while (*(_DWORD*)(v9 + 4) || !*(_QWORD*)(v9 + 32) || !(unsigned int)sub_140195F70(v9 + 16))
					{
						v9 = *(_QWORD*)(v9 + 136);
						if (!v9)
							goto LABEL_16;
					}
					return 2147500037i64;
				}
			}
		}
	}
LABEL_16:
	*(_QWORD*)(a1 + 48) = a2;
	if (qword_140C89D90)
		sub_1405C7960((__int64*)qword_140C89D90, *(_DWORD*)(a1 + 4 * a2 + 8));
	if (a3)
	{
		v10 = a2;
		sub_1403F4900(qword_140C65898, 0x16Fu, (__int64)&v10);
	}
	return 0i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B70: using guessed type __int64 qword_140C65B70;
// 140C89D90: using guessed type __int64 qword_140C89D90;

