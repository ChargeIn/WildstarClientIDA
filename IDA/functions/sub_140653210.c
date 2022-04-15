//----- (0000000140653210) ----------------------------------------------------
__int64 __fastcall sub_140653210(__int64 a1)
{
	int* v2; // rax
	_DWORD* v3; // rax
	__int64 result; // rax
	int v5; // ecx
	__int64 v6; // rax

	v2 = (int*)sub_1406622C0(a1, 1);
	if (v2 && (v3 = (_DWORD*)sub_1403D90D0(qword_140C65898, *v2)) != 0i64)
	{
		if ((~(v3[10] >> 2) & 1) != 0)
		{
			v5 = v3[15];
			if (!v5)
				v5 = v3[14];
			v6 = *(_QWORD*)(a1 + 16);
			*(_DWORD*)(v6 + 8) = 3;
			*(double*)v6 = (double)v5;
			*(_QWORD*)(a1 + 16) += 16i64;
			return 1i64;
		}
		else
		{
			result = 1i64;
			*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
			*(_QWORD*)(a1 + 16) += 16i64;
		}
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
		*(_QWORD*)(a1 + 16) += 16i64;
		return 1i64;
	}
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;

