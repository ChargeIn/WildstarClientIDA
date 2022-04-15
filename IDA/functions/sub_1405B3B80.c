//----- (00000001405B3B80) ----------------------------------------------------
__int64 __fastcall sub_1405B3B80(__int64 a1, __int64 a2, unsigned int a3, int a4, __int64 a5)
{
	double v5; // xmm2_8
	unsigned int v7; // esi
	__int64 result; // rax
	__int64 v11; // rdi
	__int64 v12; // rbx
	__int64 i; // rbx
	unsigned int v14; // [rsp+60h] [rbp+18h] BYREF

	v14 = a3;
	v7 = a3;
	if (!*(_DWORD*)(a1 + 3408) && *(_DWORD*)(a1 + 128) != 18)
		return 2147500037i64;
	v11 = a5;
	if (a5 && (unsigned int)(*(_DWORD*)(a5 + 4) - 2) <= 1)
		sub_14079AAA0((_QWORD*)a5);
	v12 = 0i64;
	if (*(_DWORD*)a2)
	{
		while (1)
		{
			result = sub_1405B4AB0(a1, &v14, (unsigned int*)(*(_QWORD*)(a2 + 16) + 72 * v12), 0i64, (_DWORD*)v11);
			if ((int)result < 0)
				break;
			v12 = (unsigned int)(v12 + 1);
			if ((unsigned int)v12 >= *(_DWORD*)a2)
			{
				v7 = v14;
				goto LABEL_11;
			}
		}
	}
	else
	{
	LABEL_11:
		if (v11)
		{
			if (*(_QWORD*)(v11 + 144))
			{
				*(_DWORD*)(v11 + 4) = 1;
			}
			else
			{
				*(_DWORD*)(v11 + 4) = 2;
				if (*(_QWORD*)(v11 + 88) || *(_QWORD*)(v11 + 96))
					sub_140195960(v11 + 8, *(_DWORD*)v11 != 0 ? 0x96 : 0, v11 + 80, 4);
			}
		}
		if (a4)
		{
			sub_1405B4F50(a1, v7);
			sub_1405B5070(a1, v7);
			sub_1405B82A0(a1, v7, v5);
			for (i = *(_QWORD*)(a1 + 3848); i; i = *(_QWORD*)(i + 3864))
				sub_1405B4EF0(i, v7, v5);
		}
		return 0i64;
	}
	return result;
}
// 1405B3C9E: variable 'v5' is possibly undefined

