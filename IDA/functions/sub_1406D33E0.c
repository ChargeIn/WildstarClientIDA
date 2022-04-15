//----- (00000001406D33E0) ----------------------------------------------------
__int64 __fastcall sub_1406D33E0(__int64 a1, signed int a2, int* a3, unsigned __int8 a4)
{
	__int64 v4; // rbx
	__int64 result; // rax
	int v8; // ecx
	int v9; // eax
	__int64 v10; // rax

	v4 = a2;
	result = sub_1400D2120(a1, a2, a3, a4);
	if ((*(_BYTE*)(a1 + 28) & 0x40) != 0)
	{
		if (((*(float(__fastcall**)(__int64))(*(_QWORD*)a1 + 72i64))(a1) <= 0.0
			|| (*(float(__fastcall**)(__int64))(*(_QWORD*)a1 + 72i64))(a1) >= 1.0)
			&& !*(_QWORD*)(*(_QWORD*)(a1 + 32) + 3384i64))
		{
			if ((_DWORD)v4)
			{
				if ((_DWORD)v4 == 1)
					*(_BYTE*)(a1 + 2088) = 1;
			}
			else
			{
				*(_BYTE*)(a1 + 2089) = 1;
			}
			v8 = *a3;
			*(_DWORD*)(a1 + 904) = *a3;
			*(_DWORD*)(a1 + 908) = a3[1];
			*(_DWORD*)(a1 + 8 * v4 + 864) = v8;
			*(_DWORD*)(a1 + 8 * v4 + 868) = *(_DWORD*)(a1 + 908);
			v9 = sub_14018CDF0();
			*(_DWORD*)(a1 + 932) = v9;
			*(_DWORD*)(a1 + 4 * v4 + 912) = v9;
			v10 = (*(__int64(__fastcall**)(__int64, int*))(*(_QWORD*)a1 + 664i64))(a1, a3);
			if (v10)
				*(_QWORD*)(a1 + 2096) = v10;
		}
		return 0i64;
	}
	return result;
}

