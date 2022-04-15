//----- (00000001401634F0) ----------------------------------------------------
__int64 __fastcall sub_1401634F0(__int64 a1, int* a2, int a3)
{
	__int64 v3; // rax
	int v7; // r10d
	unsigned __int64 v8; // r11
	int v9; // r10d
	unsigned __int64 v10; // r8
	__int64 v11; // rdx
	int v12; // ecx
	bool v13; // r8

	v3 = *(_QWORD*)(a1 + 464);
	if (v3)
		v7 = *(_DWORD*)(v3 + 1300);
	else
		v7 = 0;
	v8 = *(_QWORD*)(a1 + 1144);
	v9 = -v7;
	v10 = 0i64;
	*(_DWORD*)(a1 + 1068) = -1;
	if (v8)
	{
		v11 = *(_QWORD*)(a1 + 1136);
		do
		{
			if (**(_BYTE**)v11)
				v12 = *(_DWORD*)(*(_QWORD*)v11 + 4i64);
			else
				v12 = 0;
			v9 += v12;
			if (*a2 >= v9 && *a2 < v9 + 10)
			{
				*(_DWORD*)(a1 + 1068) = v10;
				*(_DWORD*)(a1 + 1072) = *(_DWORD*)(*(_QWORD*)v11 + 4i64);
			}
			++v10;
			v11 += 8i64;
		} while (v10 < v8);
	}
	if (*(int*)(a1 + 1068) < 0)
	{
		v13 = a3 != *(_DWORD*)(a1 + 1060) || *(_BYTE*)(a1 + 1064) == 0;
		sub_140163460(a1, a3, v13);
	}
	return 0i64;
}

