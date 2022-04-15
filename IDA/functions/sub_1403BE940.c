//----- (00000001403BE940) ----------------------------------------------------
__int64 __fastcall sub_1403BE940(_QWORD* a1, __int64 a2)
{
	unsigned int v2; // ebx
	__int64 v5; // r8
	__int64 v6; // rdx
	__int64 v7; // rcx
	__int64 v8; // rax
	__int64 v9; // rax
	__int64 v10; // rdx
	__int64 v11; // rcx
	__int64 v12; // rax
	__int64 v14; // [rsp+48h] [rbp+10h] BYREF

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
		if (v6 == v5 || (v14 = v6, v2 < *(_DWORD*)(v6 + 32)))
			v14 = v5;
		if (v14 != v5 && *(_DWORD*)(v14 + 36))
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
			if (v9 == v5 || (v14 = v9, v2 < *(_DWORD*)(v9 + 32)))
				v14 = v5;
			if (v14 != v5)
				sub_1403D5FD0((__int64)(a1 + 692), &v14);
		}
		v10 = a1[689];
		v11 = v10;
		v12 = *(_QWORD*)(v10 + 8);
		while (v12)
		{
			if (*(_DWORD*)(v12 + 32) < v2)
			{
				v12 = *(_QWORD*)(v12 + 24);
			}
			else
			{
				v11 = v12;
				v12 = *(_QWORD*)(v12 + 16);
			}
		}
		if (v11 == v10 || (v14 = v11, v2 < *(_DWORD*)(v11 + 32)))
			v14 = v10;
		if (v14 == v10)
			sub_1403BE620(a1, v2, *(_DWORD*)(a2 + 4), *(_DWORD*)(a2 + 8), *(_DWORD*)(a2 + 12));
	}
	return 0i64;
}

