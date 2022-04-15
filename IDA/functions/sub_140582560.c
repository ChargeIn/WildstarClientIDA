//----- (0000000140582560) ----------------------------------------------------
__int64 __fastcall sub_140582560(__int64 a1, __int64 a2)
{
	__int64 v3; // rax
	int v5; // [rsp+28h] [rbp-20h]
	int v6; // [rsp+30h] [rbp-18h]

	v3 = sub_1405845F0(a1, *(_QWORD*)(a2 + 8));
	v6 = *(_DWORD*)(a2 + 32);
	v5 = *(_DWORD*)(a2 + 16) + 1;
	if (v3)
		sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "GuildResult", "ZSii", v3, *(_QWORD*)(a2 + 24), v5, v6);
	else
		sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "GuildResult", "ZSii", 0i64, *(_QWORD*)(a2 + 24), v5, v6);
	return 0i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;

