//----- (00000001403BED60) ----------------------------------------------------
__int64 __fastcall sub_1403BED60(__int64* a1, unsigned int* a2)
{
	unsigned int v2; // ebx
	__int64 v4; // r8
	__int64 v5; // rdx
	__int64 v6; // rcx
	__int64 v7; // rax
	__int64 v8; // rax
	__int64 v10; // [rsp+38h] [rbp+10h] BYREF

	v2 = *a2;
	if (*a2)
	{
		v4 = a1[693];
		v5 = v4;
		v6 = *(_QWORD*)(v4 + 8);
		v7 = v6;
		while (v7)
		{
			if (*(_DWORD*)(v7 + 32) < v2)
			{
				v7 = *(_QWORD*)(v7 + 24);
			}
			else
			{
				v5 = v7;
				v7 = *(_QWORD*)(v7 + 16);
			}
		}
		if (v5 == v4 || (v10 = v5, v2 < *(_DWORD*)(v5 + 32)))
			v10 = v4;
		if (v10 != v4 && *(_DWORD*)(v10 + 36))
		{
			v8 = v4;
			while (v6)
			{
				if (*(_DWORD*)(v6 + 32) < v2)
				{
					v6 = *(_QWORD*)(v6 + 24);
				}
				else
				{
					v8 = v6;
					v6 = *(_QWORD*)(v6 + 16);
				}
			}
			if (v8 == v4 || (v10 = v8, v2 < *(_DWORD*)(v8 + 32)))
				v10 = v4;
			if (v10 != v4)
				sub_1403D5FD0((__int64)(a1 + 692), &v10);
		}
		sub_1403BEF30(a1, v2, 0);
	}
	return 0i64;
}

