//----- (00000001405C0E00) ----------------------------------------------------
__int64 __fastcall sub_1405C0E00(__int64 a1, int* a2)
{
	__int64 v2; // r10
	int v3; // r9d
	__int64 v4; // rax
	__int64 v5; // r8
	bool v6; // zf
	__int64 v8; // [rsp+30h] [rbp+8h]

	v2 = *(_QWORD*)(a1 + 72);
	v3 = *a2;
	v4 = *(_QWORD*)(v2 + 8);
	v5 = v2;
	while (v4)
	{
		if (*(_DWORD*)(v4 + 32) < v3)
		{
			v4 = *(_QWORD*)(v4 + 24);
		}
		else
		{
			v5 = v4;
			v4 = *(_QWORD*)(v4 + 16);
		}
	}
	if (v5 == v2 || (v8 = v5, v3 < *(_DWORD*)(v5 + 32)))
		v8 = *(_QWORD*)(a1 + 72);
	if (v8 != v2 && v8 != -40)
	{
		v6 = *(_DWORD*)(v8 + 60) == 0;
		*(_DWORD*)(v8 + 72) = a2[1];
		if (v6)
			sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "MatchingAverageWaitTimeUpdated", &unk_1409D1255);
	}
	return 0i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;

