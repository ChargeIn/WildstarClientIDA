//----- (000000014030A510) ----------------------------------------------------
__int64 __fastcall sub_14030A510(__int64 a1, __int64 a2)
{
	unsigned __int64 v2; // rdi
	unsigned __int64 v5; // rsi
	__int64 v6; // r14
	__int64 v7; // rbp
	__int64 v8; // rdx
	__int64 v9; // r8
	int v10; // r9d
	__int64 v11; // rax
	__int64 v12; // rcx

	v2 = *(_QWORD*)(a2 + 8);
	if (v2)
	{
		do
		{
			v5 = (v2 - 1) >> 1;
			v6 = 16 * v5;
			v7 = 16 * v2;
			if ((*(int(__fastcall**)(unsigned __int64, unsigned __int64, _QWORD))a1)(
				16 * v2 + *(_QWORD*)(a1 + 8) + 8i64,
				16 * v5 + *(_QWORD*)(a1 + 8) + 8i64,
				*(_QWORD*)(a1 + 24)) >= 0)
				break;
			v8 = *(_QWORD*)(a1 + 8);
			v9 = *(_QWORD*)(v8 + 16 * v2);
			v10 = *(_DWORD*)(v8 + v7 + 8);
			v11 = v8 + v7;
			if (v8 + v7)
			{
				*(_QWORD*)v11 = *(_QWORD*)(v8 + 16 * v5);
				*(_DWORD*)(v11 + 8) = *(_DWORD*)(v8 + v6 + 8);
			}
			v12 = v6 + *(_QWORD*)(a1 + 8);
			if (v12)
			{
				*(_QWORD*)v12 = v9;
				*(_DWORD*)(v12 + 8) = v10;
			}
			*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 16 * v2) + 8i64) = v2;
			v2 = (v2 - 1) >> 1;
		} while (v5);
	}
	if (*(_QWORD*)(a2 + 8) == v2)
		return 0i64;
	*(_QWORD*)(a2 + 8) = v2;
	return 1i64;
}

