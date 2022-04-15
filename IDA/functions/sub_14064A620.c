//----- (000000014064A620) ----------------------------------------------------
__int64 __fastcall sub_14064A620(__int64 a1)
{
	int* v2; // rax
	__int64 v3; // rax
	int v4; // ecx
	__int64 result; // rax
	int v6; // edx
	__int64 v7; // rcx

	v2 = (int*)sub_1406622C0(a1, 1);
	if (!v2)
		goto LABEL_6;
	v3 = sub_1403D90D0(qword_140C65898, *v2);
	if (!v3 || (*(_BYTE*)(v3 + 40) & 1) != 0)
		goto LABEL_6;
	v4 = *(_DWORD*)(v3 + 128);
	if (v4 == 30)
	{
		if (*(_DWORD*)(v3 + 440) != 3)
		{
		LABEL_6:
			*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
			*(_QWORD*)(a1 + 16) += 16i64;
			return 1i64;
		}
	}
	else if (v4 == 23)
	{
		goto LABEL_6;
	}
	v6 = *(_DWORD*)(v3 + 584);
	if (v6 <= 0)
		v6 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v3 + 72i64))(v3);
	v7 = *(_QWORD*)(a1 + 16);
	result = 1i64;
	*(_DWORD*)(v7 + 8) = 3;
	*(double*)v7 = (double)v6;
	*(_QWORD*)(a1 + 16) += 16i64;
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;

