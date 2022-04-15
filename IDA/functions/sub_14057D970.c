//----- (000000014057D970) ----------------------------------------------------
__int64 __fastcall sub_14057D970(__int64 a1, __int64 a2)
{
	float v2; // xmm1_4
	int* v5; // rax
	__int64 v6; // rcx
	int v8; // [rsp+20h] [rbp-18h]
	__int64 v9; // [rsp+40h] [rbp+8h] BYREF

	v2 = *(float*)(a2 + 20);
	v9 = 0i64;
	sub_1401E82F0(&v9, v2);
	v5 = sub_140055BE0(a1 + 576, (_DWORD*)(a2 + 16));
	v6 = qword_140C65898;
	*(_QWORD*)v5 = v9;
	v8 = *(_DWORD*)(a2 + 16);
	sub_1400EA3E0(*(_QWORD*)(v6 + 29504), "GuildPerkActivated", byte_1409EA6C4, a1, v8);
	return 0i64;
}
// 1409EA6C4: using guessed type _BYTE byte_1409EA6C4[40];
// 140C65898: using guessed type __int64 qword_140C65898;

