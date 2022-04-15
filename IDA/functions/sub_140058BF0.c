//----- (0000000140058BF0) ----------------------------------------------------
__int64 __fastcall sub_140058BF0(__int64 a1, int a2)
{
	int* v2; // rax
	__int64 v3; // r10
	__int64 v4; // rdx
	int* v5; // r11
	__int64 v6; // rdx
	__int64 v7; // rax
	__int64 result; // rax
	__int64 v9; // r8
	__int64 v10; // rax
	__int64 v11; // r10
	char v12; // cl
	__int64 v13; // rdx
	__int64 v14; // rcx

	v2 = (int*)sub_1400580E0(a1, a2);
	v4 = *(_QWORD*)(v3 + 16);
	v5 = v2;
	if (*(_DWORD*)(v4 - 8))
		v6 = *(_QWORD*)(v4 - 16);
	else
		v6 = 0i64;
	v7 = v2[2];
	if ((_DWORD)v7 == 5)
	{
		*(_QWORD*)(*(_QWORD*)v5 + 16i64) = v6;
		if (v6)
		{
			if ((*(_BYTE*)(v6 + 9) & 3) != 0)
			{
				v13 = *(_QWORD*)v5;
				if ((*(_BYTE*)(*(_QWORD*)v5 + 9i64) & 4) != 0)
				{
					v14 = *(_QWORD*)(v3 + 32);
					*(_BYTE*)(v13 + 9) &= ~4u;
					*(_QWORD*)(v13 + 48) = *(_QWORD*)(v14 + 64);
					*(_QWORD*)(v14 + 64) = v13;
				}
			}
		}
	LABEL_17:
		*(_QWORD*)(v3 + 16) -= 16i64;
		return 1i64;
	}
	if ((_DWORD)v7 != 7)
	{
		*(_QWORD*)(*(_QWORD*)(v3 + 32) + 8 * v7 + 224) = v6;
		*(_QWORD*)(v3 + 16) -= 16i64;
		return 1i64;
	}
	*(_QWORD*)(*(_QWORD*)v5 + 16i64) = v6;
	if (!v6)
		goto LABEL_17;
	if ((*(_BYTE*)(v6 + 9) & 3) == 0)
		goto LABEL_17;
	v9 = *(_QWORD*)v5;
	if ((*(_BYTE*)(*(_QWORD*)v5 + 9i64) & 4) == 0)
		goto LABEL_17;
	v10 = *(_QWORD*)(v3 + 32);
	if (*(_BYTE*)(v10 + 33) == 1)
	{
		sub_14005C960(*(_QWORD*)(v3 + 32), v6);
		*(_QWORD*)(v11 + 16) -= 16i64;
		return 1i64;
	}
	else
	{
		v12 = *(_BYTE*)(v9 + 9) & 0xF8 | *(_BYTE*)(v10 + 32) & 3;
		result = 1i64;
		*(_BYTE*)(v9 + 9) = v12;
		*(_QWORD*)(v3 + 16) -= 16i64;
	}
	return result;
}
// 140058BFC: variable 'v3' is possibly undefined
// 140058C73: variable 'v11' is possibly undefined

