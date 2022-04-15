//----- (00000001403BEE40) ----------------------------------------------------
__int64 __fastcall sub_1403BEE40(__int64* a1, __int64 a2)
{
	unsigned int v2; // ebx
	__int64 v5; // r8
	__int64 v6; // rdx
	__int64 v7; // rcx
	__int64 v8; // rax
	__int64 v9; // rax
	__int64 v11; // [rsp+38h] [rbp+10h] BYREF

	v2 = *(_DWORD*)a2;
	if (*(_DWORD*)a2)
	{
		v5 = a1[693];
		v6 = v5;
		v7 = *(_QWORD*)(v5 + 8);
		v8 = v7;
		while (v8)
		{
			if (*(_DWORD*)(v8 + 32) < v2)
			{
				v8 = *(_QWORD*)(v8 + 24);
			}
			else
			{
				v6 = v8;
				v8 = *(_QWORD*)(v8 + 16);
			}
		}
		if (v6 == v5 || (v11 = v6, v2 < *(_DWORD*)(v6 + 32)))
			v11 = v5;
		if (v11 != v5 && *(_DWORD*)(v11 + 36))
		{
			v9 = v5;
			while (v7)
			{
				if (*(_DWORD*)(v7 + 32) < v2)
				{
					v7 = *(_QWORD*)(v7 + 24);
				}
				else
				{
					v9 = v7;
					v7 = *(_QWORD*)(v7 + 16);
				}
			}
			if (v9 == v5 || (v11 = v9, v2 < *(_DWORD*)(v9 + 32)))
				v11 = v5;
			if (v11 != v5)
				sub_1403D5FD0((__int64)(a1 + 692), &v11);
		}
		sub_1403BF4E0(a1, v2, *(_DWORD*)(a2 + 4));
	}
	return 0i64;
}

