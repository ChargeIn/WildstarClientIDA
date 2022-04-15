//----- (000000014064A100) ----------------------------------------------------
__int64 __fastcall sub_14064A100(__int64 a1)
{
	int* v2; // rax
	__int64 v3; // rax
	int* v4; // rcx
	__int64 result; // rax
	__int64 v6; // rax
	double v7; // xmm0_8

	v2 = (int*)sub_1406622C0(a1, 1);
	if (v2 && (v3 = sub_1403D90D0(qword_140C65898, *v2)) != 0)
	{
		v4 = *(int**)(v3 + 208);
		if (v4)
		{
			v6 = *(_QWORD*)(a1 + 16);
			v7 = (double)*v4;
			*(_DWORD*)(v6 + 8) = 3;
			*(double*)v6 = v7;
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

