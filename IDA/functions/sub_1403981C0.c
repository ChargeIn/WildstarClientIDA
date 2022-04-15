//----- (00000001403981C0) ----------------------------------------------------
void __fastcall sub_1403981C0(__int64 a1)
{
	__int64 v1; // rsi
	__int64 v3; // rdi
	__int64 v4; // rax
	int v5; // esi
	int v6; // [rsp+30h] [rbp+8h] BYREF

	v1 = *(_QWORD*)(a1 + 120);
	v3 = sub_140561C30(qword_140C65B70, *(_DWORD*)(v1 + 5632));
	if ((v3
		|| *(_QWORD*)(qword_140C65898 + 120) == v1
		&& (v4 = sub_14039DF50(qword_140C65898)) != 0
		&& (v3 = sub_1404695E0(v4)) != 0)
		&& ((v5 = *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(v3 + 312) + 112i64) + 4i64), v5 == (unsigned int)sub_1403982A0(a1, 0))
			|| v5 == (unsigned int)sub_1403982A0(a1, 1)))
	{
		sub_14039CCE0(a1, *(_DWORD*)(v3 + 92), 6u);
	}
	else
	{
		v6 = 0;
		sub_1403F4900(a1, 0x17Eu, (__int64)&v6);
		*(_DWORD*)(a1 + 26656) = 0;
	}
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B70: using guessed type __int64 qword_140C65B70;

