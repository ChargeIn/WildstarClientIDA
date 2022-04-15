//----- (0000000140554580) ----------------------------------------------------
void __fastcall sub_140554580(__int64 a1, int a2, int a3)
{
	__int64 v5; // r9
	__int64 v6; // rax
	__int64 v7; // rcx
	__int64 v8; // rdx
	unsigned int v9; // r8d
	__int128 v10; // [rsp+60h] [rbp-18h] BYREF

	if ((_DWORD)qword_140C7DC60)
		sub_1405548F0((__int64)&qword_140C7DC60);
	dword_140C7DC68 = a2;
	qword_140C7DC6C = -4294966996i64;
	HIDWORD(qword_140C7DC60) = 0;
	LODWORD(qword_140C7DC74) = a3;
	sub_1405546B0((__int64)&qword_140C7DC60, 0, 0);
	if ((_DWORD)qword_140C7DC60)
	{
		if ((dword_140DC33BC & 1) != 0)
		{
			v7 = qword_140DC33C0;
		}
		else
		{
			dword_140DC33BC |= 1u;
			v6 = sub_140200220(0x232u);
			if (v6)
				v7 = sub_140248F00(*(_DWORD*)(v6 + 4));
			else
				v7 = sub_140248F00(0);
			qword_140DC33C0 = v7;
		}
		if (v7)
		{
			v8 = *(_QWORD*)(qword_140C65898 + 25744);
			if (v8)
			{
				v9 = *(_DWORD*)(v8 + 8);
				v10 = 0i64;
				sub_1405787D0(v7, 0, v9, v5, v7, 0i64, 0i64, 0, qword_140C7DCE0, &v10, 0);
			}
		}
	}
}
// 140554691: variable 'v5' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C7DC60: using guessed type __int64 qword_140C7DC60;
// 140C7DC68: using guessed type int dword_140C7DC68;
// 140C7DC6C: using guessed type __int64 qword_140C7DC6C;
// 140C7DC74: using guessed type __int64 qword_140C7DC74;
// 140C7DCE0: using guessed type __int64 qword_140C7DCE0[32];
// 140DC33BC: using guessed type int dword_140DC33BC;
// 140DC33C0: using guessed type __int64 qword_140DC33C0;

