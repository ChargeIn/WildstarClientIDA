//----- (0000000140662110) ----------------------------------------------------
__int64 __fastcall sub_140662110(__int64 a1)
{
	int* v2; // rax
	__int64 v3; // rax
	int v4; // ecx
	__int64 v5; // rdx
	__int64 result; // rax
	__int64 v7; // rax

	v2 = (int*)sub_1406622C0(a1, 1);
	if (v2 && (v3 = sub_1403D90D0(qword_140C65898, *v2)) != 0)
	{
		v4 = *(unsigned __int8*)(v3 + 434);
		v5 = *(_QWORD*)(a1 + 16);
		result = 1i64;
		*(_DWORD*)(v5 + 8) = 3;
		*(double*)v5 = (double)v4;
		*(_QWORD*)(a1 + 16) += 16i64;
	}
	else
	{
		v7 = *(_QWORD*)(a1 + 16);
		*(_QWORD*)v7 = 0i64;
		*(_DWORD*)(v7 + 8) = 3;
		*(_QWORD*)(a1 + 16) += 16i64;
		return 1i64;
	}
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;

