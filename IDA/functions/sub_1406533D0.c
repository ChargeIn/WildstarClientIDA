//----- (00000001406533D0) ----------------------------------------------------
__int64 __fastcall sub_1406533D0(__int64 a1)
{
	int* v2; // rax
	__int64 v3; // rax
	__int64 result; // rax
	__int64 v5; // rcx
	int v6; // edx
	__int64 v7; // rax

	v2 = (int*)sub_1406622C0(a1, 1);
	if (v2 && (v3 = sub_1403D90D0(qword_140C65898, *v2)) != 0)
	{
		if ((~(*(_DWORD*)(v3 + 40) >> 3) & 1) != 0)
		{
			v5 = *(_QWORD*)(v3 + 280);
			if (v5)
				v6 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v5 + 24i64))(v5);
			else
				v6 = 0;
			v7 = *(_QWORD*)(a1 + 16);
			*(_DWORD*)(v7 + 8) = 3;
			*(double*)v7 = (double)v6;
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

