//----- (000000014059ACB0) ----------------------------------------------------
__int64 __fastcall sub_14059ACB0(__int64 a1)
{
	int v1; // ebx
	unsigned __int64 v2; // r8
	unsigned int v3; // edx
	__int64 v4; // r9
	__int64 v5; // rax
	__int64 v6; // rcx
	int v7; // eax
	unsigned int v8; // edx
	unsigned __int64 v9; // r9
	int v10; // r10d
	__int64 v11; // r8
	__int64 v12; // rcx
	__int64 v14; // rax
	_DWORD* i; // rax
	int v16; // [rsp+38h] [rbp+10h] BYREF

	v1 = 0;
	v2 = *(_QWORD*)(qword_140C63650 + 768);
	v3 = 0;
	if (v2)
	{
		v4 = *(_QWORD*)(qword_140C63650 + 760);
		v5 = 0i64;
		while (*(_QWORD*)(*(_QWORD*)(v4 + 8 * v5) + 400i64) != a1)
		{
			v5 = ++v3;
			if (v3 >= v2)
				goto LABEL_5;
		}
		v6 = *(_QWORD*)(v4 + 8i64 * v3);
	}
	else
	{
	LABEL_5:
		v6 = 0i64;
	}
	v7 = sub_1400F26A0(v6 + 384, 1);
	v8 = 0;
	v9 = *(_QWORD*)(qword_140C65898 + 5792);
	v10 = v7;
	if (v9)
	{
		v11 = *(_QWORD*)(qword_140C65898 + 5784);
		v12 = 0i64;
		while (*(_DWORD*)(*(_QWORD*)(v11 + 8 * v12) + 8i64) != v7)
		{
			v12 = ++v8;
			if (v8 >= v9)
				return 0i64;
		}
		v14 = *(_QWORD*)(v11 + 8i64 * v8);
		if (v14 && *(_DWORD*)(v14 + 12))
		{
			for (i = (_DWORD*)(v14 + 24); !*i; ++i)
			{
				if ((unsigned int)++v1 >= 0xA)
					return 0i64;
			}
			v16 = v10;
			sub_1403F4900(qword_140C65898, 0x858u, (__int64)&v16);
		}
	}
	return 0i64;
}
// 140C63650: using guessed type __int64 qword_140C63650;
// 140C65898: using guessed type __int64 qword_140C65898;

