//----- (0000000140582720) ----------------------------------------------------
__int64 __fastcall sub_140582720(__int64 a1, __int64 a2)
{
	__int64 v3; // rax
	__int64 v4; // rdi
	int v6; // [rsp+20h] [rbp-18h]

	v3 = sub_1405845F0(a1, *(_QWORD*)(a2 + 8));
	v4 = v3;
	if (v3)
	{
		sub_14048FC60(v3 + 576, (_DWORD*)(a2 + 16));
		v6 = *(_DWORD*)(a2 + 16);
		sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "GuildPerkDeactivated", byte_1409EA7DC, v4, v6);
	}
	return 0i64;
}
// 1409EA7DC: using guessed type _BYTE byte_1409EA7DC[40];
// 140C65898: using guessed type __int64 qword_140C65898;

