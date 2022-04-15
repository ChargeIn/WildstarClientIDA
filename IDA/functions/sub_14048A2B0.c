//----- (000000014048A2B0) ----------------------------------------------------
__int64 __fastcall sub_14048A2B0(__int64 a1, unsigned int a2)
{
	__int64 v2; // r14
	__int64 v4; // rdx
	__int64 v5; // rcx
	__int64 v6; // rax
	__int64 v7; // rsi
	__int64 v8; // rbp
	int v9; // edi
	int v10; // ebx
	unsigned int v11; // edi
	int v12; // eax
	int v14; // ebx
	int v15; // ecx
	int v16; // eax
	unsigned int v17; // edi
	unsigned int v18; // ebp
	unsigned int v19; // r11d
	__int64 v20; // rdx
	unsigned int* v21; // r8
	__int64 v22; // rax
	int v23; // ecx
	__int64 v24; // [rsp+20h] [rbp-28h] BYREF
	__int64 v25; // [rsp+50h] [rbp+8h]

	v2 = qword_140C65930;
	v4 = *(_QWORD*)(qword_140C65930 + 264);
	v5 = v4;
	v6 = *(_QWORD*)(v4 + 8);
	while (v6)
	{
		if (*(_DWORD*)(v6 + 32) < a2)
		{
			v6 = *(_QWORD*)(v6 + 24);
		}
		else
		{
			v5 = v6;
			v6 = *(_QWORD*)(v6 + 16);
		}
	}
	if (v5 == v4 || (v25 = v5, a2 < *(_DWORD*)(v5 + 32)))
		v25 = *(_QWORD*)(qword_140C65930 + 264);
	if (v25 == v4)
		return 0i64;
	v7 = *(_QWORD*)(v25 + 40);
	if (!v7)
		return 0i64;
	v8 = *(int*)(*(_QWORD*)v7 + 20i64);
	if (!(_DWORD)v8)
		return 0i64;
	v9 = *(_DWORD*)(*(_QWORD*)v7 + 24i64);
	if (!v9 || !sub_140488520((_QWORD*)v7, a2))
		return 0i64;
	if (v9 == 4)
	{
		v10 = -1;
		if (*(_DWORD*)(v7 + 56) != -1)
			v10 = *(_DWORD*)(v7 + 56);
		v11 = 0;
		v12 = 0;
		if (v10)
			v12 = v10;
		LOBYTE(v11) = v12 == 0;
		return v11;
	}
	if (v9 == 1 && *(_DWORD*)(v2 + 4 * v8 + 288) != a2)
		return 0i64;
	v14 = -1;
	v15 = *((_DWORD*)sub_1405FD1D0(*(_QWORD*)qword_140C65B80, &v24, v8) + 2);
	v16 = -1;
	if (v15 != -1)
		v16 = v15;
	v17 = 0;
	v18 = 0;
	if (v16)
		v18 = v16;
	if (v24)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v24 - 16) + 8i64))(v24 - 16);
	v19 = sub_1403ABFE0(qword_140C65898 + 7160, 37, 0);
	if (v18 >= v19)
	{
		v20 = *(int*)(*(_QWORD*)v7 + 20i64);
		if ((int)v20 < 3)
		{
			v21 = *(unsigned int**)(qword_140C65930 + 40 * v20 + 168);
			if (v21)
			{
				v22 = sub_140489580(qword_140C65930, *v21);
				if (v22)
				{
					v23 = 0;
					if (*(_DWORD*)(v22 + 56) != -1)
						v14 = *(_DWORD*)(v22 + 56);
					if (v14)
						v23 = v14;
					v18 -= v23;
				}
			}
		}
	}
	LOBYTE(v17) = v18 < v19;
	return v17;
}
// 14048A43B: variable 'v19' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65930: using guessed type __int64 qword_140C65930;
// 140C65B80: using guessed type __int64 qword_140C65B80;

