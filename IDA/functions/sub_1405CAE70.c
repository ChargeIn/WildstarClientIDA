//----- (00000001405CAE70) ----------------------------------------------------
__int64 __fastcall sub_1405CAE70(__int64 a1, __int64 a2, double a3, double a4)
{
	__int64 v5; // rsi
	__int64 result; // rax
	__int64* v7; // rcx
	__int64 v8; // rcx
	__int64* v9; // rcx
	__int64 v10; // rcx

	sub_1400B6120(*(_QWORD*)a1 + 568i64, a1 + 12);
	v5 = qword_140C65898;
	result = sub_1403D90D0(qword_140C65898, *(_DWORD*)(a1 + 12));
	if (result)
		result = sub_1403D9590(v5, result, a3, a4);
	v7 = *(__int64**)(a1 + 32);
	if (v7)
	{
		result = *(_QWORD*)(a1 + 40);
		*v7 = result;
	}
	v8 = *(_QWORD*)(a1 + 40);
	if (v8)
	{
		result = *(_QWORD*)(a1 + 32);
		*(_QWORD*)(v8 + 32) = result;
	}
	*(_QWORD*)(a1 + 32) = 0i64;
	*(_QWORD*)(a1 + 40) = 0i64;
	v9 = *(__int64**)(a1 + 16);
	if (v9)
	{
		result = *(_QWORD*)(a1 + 24);
		*v9 = result;
	}
	v10 = *(_QWORD*)(a1 + 24);
	if (v10)
	{
		result = *(_QWORD*)(a1 + 16);
		*(_QWORD*)(v10 + 16) = result;
	}
	*(_QWORD*)(a1 + 24) = 0i64;
	*(_QWORD*)(a1 + 16) = 0i64;
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;

