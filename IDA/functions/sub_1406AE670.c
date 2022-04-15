//----- (00000001406AE670) ----------------------------------------------------
__int64 __fastcall sub_1406AE670(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rcx
	unsigned __int64 v4; // rdx
	__int64 v5; // rax
	__int64 v6; // rcx
	__int64 v7; // rax
	int v9; // [rsp+38h] [rbp+10h] BYREF

	v2 = sub_140056AB0(a1, 1u);
	if (v2
		&& qword_140C659F0
		&& ((v4 = *(_QWORD*)(v2 + 16)) == 0 ? (v5 = sub_1404C9B90(v3, *(_DWORD*)(v2 + 8))) : (v5 = sub_1404B6E50(v3, v4)),
			v5
			&& (v6 = sub_140203DA0(*(_DWORD*)(v5 + 96))) != 0
			&& (v7 = sub_1403ACD90(qword_140C65B70, *(_DWORD*)(v6 + 40), *(_QWORD*)(qword_140C65898 + 25744))) != 0))
	{
		v9 = **(_DWORD**)(v7 + 112);
		return sub_1403D3470(a1, &v9);
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		return 1i64;
	}
}
// 1406AE6A8: variable 'v3' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C659F0: using guessed type __int64 qword_140C659F0;
// 140C65B70: using guessed type __int64 qword_140C65B70;

