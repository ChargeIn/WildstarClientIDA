//----- (0000000140058240) ----------------------------------------------------
__int64 __fastcall sub_140058240(__int64 a1, __int64 a2, int a3)
{
	__int64 v5; // r9
	__int64 result; // rax
	__int64 v7; // r8
	__int64 v8; // rcx
	__int64 v9; // rdx

	if (a1 != a2)
	{
		v5 = a3;
		result = -16i64 * a3;
		*(_QWORD*)(a1 + 16) += result;
		if (a3 > 0)
		{
			v7 = 0i64;
			do
			{
				v8 = *(_QWORD*)(a1 + 16);
				v9 = *(_QWORD*)(a2 + 16);
				v7 += 16i64;
				*(_QWORD*)(a2 + 16) = v9 + 16;
				*(_QWORD*)v9 = *(_QWORD*)(v8 + v7 - 16);
				result = *(unsigned int*)(v8 + v7 - 8);
				*(_DWORD*)(v9 + 8) = result;
				--v5;
			} while (v5);
		}
	}
	return result;
}

