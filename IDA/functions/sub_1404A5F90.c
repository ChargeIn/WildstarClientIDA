//----- (00000001404A5F90) ----------------------------------------------------
void __fastcall sub_1404A5F90(__int64 a1)
{
	__int64 v2; // rbx
	unsigned int v3; // ebp
	__int64 v4; // rsi
	__int64 v5; // [rsp+20h] [rbp-28h]
	__int64 v6; // [rsp+50h] [rbp+8h] BYREF

	while (*(_QWORD*)(a1 + 64))
	{
		v2 = *(_QWORD*)(*(_QWORD*)(a1 + 56) + 16i64);
		v3 = *(_DWORD*)(v2 + 32);
		v4 = *(_QWORD*)(v2 + 40);
		sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "HazardRemoved", byte_1409E9A5C, v3);
		LODWORD(v5) = *(_DWORD*)(v4 + 24);
		sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "HazardRemoveMinimapUnit", byte_1409E99FC, v3, v5);
		sub_14018B900(*(_QWORD*)(v2 + 40), 0);
		v6 = v2;
		sub_1404A6830(a1 + 48, &v6);
	}
}
// 1404A6019: variable 'v5' is possibly undefined
// 1409E99FC: using guessed type _BYTE byte_1409E99FC[72];
// 1409E9A5C: using guessed type _BYTE byte_1409E9A5C[32];
// 140C65898: using guessed type __int64 qword_140C65898;

