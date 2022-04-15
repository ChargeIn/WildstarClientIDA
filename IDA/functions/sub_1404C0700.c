//----- (00000001404C0700) ----------------------------------------------------
void __fastcall sub_1404C0700(__int64 a1, unsigned int a2)
{
	__int64 v4; // rcx
	__int64 v5; // rax
	_QWORD v6[2]; // [rsp+20h] [rbp-28h] BYREF
	char v7[24]; // [rsp+30h] [rbp-18h] BYREF
	int v8; // [rsp+58h] [rbp+10h] BYREF

	if (*(_DWORD*)(a1 + 104))
	{
		v8 = *(_DWORD*)(a1 + 104);
		sub_1404CB7C0(qword_140C659F8 + 256, &v8);
	}
	v4 = *(_QWORD*)(a1 + 296);
	*(_DWORD*)(a1 + 104) = a2;
	*(_DWORD*)(a1 + 652) = 0;
	*(_DWORD*)(a1 + 656) = 1;
	sub_1404C8200(v4, a2, a1);
	v5 = sub_1403D90D0(qword_140C65898, *(_DWORD*)(a1 + 104));
	if (v5)
		sub_1404C07B0(a1, v5);
	if (a2)
	{
		LODWORD(v6[0]) = a2;
		v6[1] = a1;
		sub_140055F80(qword_140C659F8 + 256, (__int64)v7, v6);
	}
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C659F8: using guessed type __int64 qword_140C659F8;
// 1404C0700: using guessed type char var_18[24];

