//----- (00000001404A1CA0) ----------------------------------------------------
_BOOL8 __fastcall sub_1404A1CA0(__int64 a1, _QWORD* a2, int a3)
{
	__int64 v3; // rbp
	unsigned __int64 v6; // rdi
	_QWORD* v7; // rbx
	_BOOL8 result; // rax
	__int64* v9; // rbx
	__int64 v10; // rbp
	int v11; // eax
	BOOL v12; // r15d
	__int64 v13; // rbx
	__int64 v14; // r8
	int v15; // eax
	int* v16; // rcx
	__int64 v17; // rdx
	int* v18; // rcx
	__int64 v19; // rdx
	int v20; // [rsp+20h] [rbp-58h] BYREF
	int v21[4]; // [rsp+28h] [rbp-50h] BYREF

	v3 = *(_QWORD*)(a1 + 8);
	v20 = a3;
	v6 = (*(__int64(__fastcall**)(int*))(v3 + 24))(&v20);
	v7 = *(_QWORD**)(*(_QWORD*)(v3 + 16) + 8 * (v6 % *(_QWORD*)(v3 + 8)));
	if (!v7)
		return 0i64;
	while (v6 != *v7 || !(*(unsigned int(__fastcall**)(int*, _QWORD*))(v3 + 32))(&v20, v7 + 2))
	{
		v7 = (_QWORD*)v7[1];
		if (!v7)
			return 0i64;
	}
	v9 = v7 + 3;
	if (!v9)
		return 0i64;
	v10 = *v9;
	v11 = v20;
	*(_QWORD*)(a1 + 56) = a2;
	*(_DWORD*)(a1 + 48) = v11;
	v12 = (*(_BYTE*)(v10 + 4) & 1) != 0;
	v13 = 0i64;
	do
	{
		v14 = *(_QWORD*)(v10 + 8 * v13 + 8);
		if (!v14)
			break;
		v15 = sub_1404A2100(a1, a2, v14);
		v21[v13] = v15;
		v13 = (unsigned int)(v13 + 1);
		if (!*(_DWORD*)(a1 + 108))
		{
			if (v12)
			{
				if (v15)
					break;
			}
			else if (!v15)
			{
				break;
			}
		}
	} while ((unsigned int)v13 < 3);
	result = 0i64;
	*(_DWORD*)(a1 + 48) = 0;
	*(_QWORD*)(a1 + 56) = 0i64;
	if (v12)
	{
		if ((_DWORD)v13)
		{
			v16 = v21;
			v17 = (unsigned int)v13;
			do
			{
				if (result || *v16)
					result = 1i64;
				++v16;
				--v17;
			} while (v17);
		}
	}
	else
	{
		result = 1i64;
		if ((_DWORD)v13)
		{
			v18 = v21;
			v19 = (unsigned int)v13;
			do
			{
				result = result && *v18++;
				--v19;
			} while (v19);
		}
	}
	return result;
}
// 1404A1CA0: using guessed type int var_50[4];

