//----- (0000000140170340) ----------------------------------------------------
char __fastcall sub_140170340(__int64 a1, int* a2, int* a3)
{
	__int64 v3; // rax
	int v4; // r8d
	__int64 v5; // rdx
	__int64 v6; // r9
	__int64 v7; // rax
	__int64 v8; // rax

	v3 = *a2;
	if ((_DWORD)v3 == -1)
		return 0;
	v4 = *a3;
	if (v4 == -1)
		return 0;
	if ((_DWORD)v3 == v4)
		return 0;
	if ((int)v3 < 0)
		return 0;
	v5 = (__int64)(*(_QWORD*)(a1 + 1424) - *(_QWORD*)(a1 + 1416)) >> 3;
	if ((int)v3 >= (int)v5)
		return 0;
	v6 = *(_QWORD*)(a1 + 1416);
	v7 = *(_QWORD*)(v6 + 8 * v3);
	if (!v7)
		return 0;
	while (1)
	{
		v8 = *(int*)(v7 + 104);
		if ((_DWORD)v8 == v4)
			break;
		if ((int)v8 >= 0 && (int)v8 < (int)v5)
		{
			v7 = *(_QWORD*)(v6 + 8 * v8);
			if (v7)
				continue;
		}
		return 0;
	}
	return 1;
}

