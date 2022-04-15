//----- (00000001406D8D50) ----------------------------------------------------
__int64 __fastcall sub_1406D8D50(__int64 a1, signed int a2, int* a3, unsigned __int8 a4)
{
	__int64 result; // rax
	unsigned int v8; // r8d
	int v9; // r9d
	int v10; // edx
	int v11; // r10d
	int v12; // ecx
	int v13; // eax
	int v14; // eax

	result = sub_1400D2120(a1, a2, a3, a4);
	v8 = result;
	if (!*(_QWORD*)(*(_QWORD*)(a1 + 32) + 3384i64))
	{
		v9 = *(_DWORD*)(a1 + 716);
		v10 = *(_DWORD*)(a1 + 720);
		v11 = *(_DWORD*)(a1 + 724);
		v12 = *(_DWORD*)(a1 + 728);
		if (a2)
		{
			if (a2 == 1 && *a3 >= v9 && *a3 < v11)
			{
				v14 = a3[1];
				if (v14 >= v10 && v14 < v12)
					*(_BYTE*)(a1 + 1025) = 1;
			}
		}
		else if (*a3 >= v9 && *a3 < v11)
		{
			v13 = a3[1];
			if (v13 >= v10 && v13 < v12)
			{
				*(_BYTE*)(a1 + 1024) = 1;
				return v8;
			}
		}
		return v8;
	}
	return result;
}

