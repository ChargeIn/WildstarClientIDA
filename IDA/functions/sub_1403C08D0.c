//----- (00000001403C08D0) ----------------------------------------------------
__int64 __fastcall sub_1403C08D0(__int64 a1, unsigned int* a2)
{
	int* v4; // rax
	int v5; // r8d
	_QWORD v7[2]; // [rsp+20h] [rbp-28h] BYREF
	char v8[24]; // [rsp+30h] [rbp-18h] BYREF

	v4 = sub_14018B280(12i64, 0);
	*v4 = a2[1];
	v4[1] = a2[2];
	v5 = *((unsigned __int8*)a2 + 12);
	v7[1] = v4;
	v4[2] = v5;
	LODWORD(v7[0]) = *a2;
	sub_140055F80(a1 + 28576, (__int64)v8, v7);
	sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "PetSpawned", byte_140B66548, *a2);
	return 0i64;
}
// 140B66548: using guessed type _BYTE byte_140B66548[8];
// 140C65898: using guessed type __int64 qword_140C65898;
// 1403C08D0: using guessed type char var_18[24];

