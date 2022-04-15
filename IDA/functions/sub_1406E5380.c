//----- (00000001406E5380) ----------------------------------------------------
__int64 __fastcall sub_1406E5380(__int64 a1, int a2)
{
	unsigned __int64 v3; // rdi
	__int64 result; // rax
	_QWORD* v5; // rbx
	__int64* v6; // rbx
	__int64 v7; // rbx
	__int64 v8; // rcx
	int v9; // [rsp+38h] [rbp+10h] BYREF

	v9 = a2;
	v3 = (*(__int64(__fastcall**)(int*))(a1 + 2440))(&v9);
	result = v3 / *(_QWORD*)(a1 + 2424);
	v5 = *(_QWORD**)(*(_QWORD*)(a1 + 2432) + 8 * (v3 % *(_QWORD*)(a1 + 2424)));
	if (v5)
	{
		while (1)
		{
			if (v3 == *v5)
			{
				result = (*(__int64(__fastcall**)(int*, _QWORD*))(a1 + 2448))(&v9, v5 + 2);
				if ((_DWORD)result)
					break;
			}
			v5 = (_QWORD*)v5[1];
			if (!v5)
				return result;
		}
		v6 = v5 + 3;
		if (v6)
		{
			v7 = *v6;
			v8 = *(_QWORD*)(v7 + 592);
			if (v8)
			{
				result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v8 + 8i64))(v8);
				*(_QWORD*)(v7 + 592) = 0i64;
			}
		}
	}
	return result;
}

