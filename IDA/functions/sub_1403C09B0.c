//----- (00000001403C09B0) ----------------------------------------------------
__int64 __fastcall sub_1403C09B0(__int64 a1, unsigned int* a2)
{
	__int64 v2; // rsi
	__int64 v4; // r10
	__int64 v5; // r8
	__int64 v6; // rax
	unsigned int v7; // eax
	__int64 v8; // rbx
	__int64 v10; // [rsp+30h] [rbp+8h] BYREF

	v2 = a1 + 28576;
	v4 = *(_QWORD*)(a1 + 28584);
	v5 = v4;
	v6 = *(_QWORD*)(v4 + 8);
	while (v6)
	{
		if (*(_DWORD*)(v6 + 32) < *a2)
		{
			v6 = *(_QWORD*)(v6 + 24);
		}
		else
		{
			v5 = v6;
			v6 = *(_QWORD*)(v6 + 16);
		}
	}
	if (v5 == v4 || (v7 = *(_DWORD*)(v5 + 32), v10 = v5, *a2 < v7))
		v10 = v4;
	v8 = v10;
	if (v10 != *(_QWORD*)(a1 + 28584))
	{
		sub_14018B900(*(_QWORD*)(v10 + 40), 0);
		v10 = v8;
		sub_1403D60D0(v2, &v10);
		sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "PetDespawned", byte_140B66548, *a2);
	}
	return 0i64;
}
// 140B66548: using guessed type _BYTE byte_140B66548[8];
// 140C65898: using guessed type __int64 qword_140C65898;

