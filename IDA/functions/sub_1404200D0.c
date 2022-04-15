//----- (00000001404200D0) ----------------------------------------------------
void __fastcall sub_1404200D0(__int64 a1, _QWORD* a2, _QWORD* a3)
{
	__int64 v4; // rsi
	__int64 v5; // rbx
	__int64 v6; // rax

	*a3 += 8i64;
	v4 = sub_140629AF0(qword_140C65898 + 27592, *(unsigned int*)(*a3 - 8i64) | 0x500000000000000i64);
	if (*(_QWORD*)(a2[4] + 120i64) >= *(_QWORD*)(a2[4] + 112i64))
		sub_14005E2C0((__int64)a2);
	v5 = a2[2];
	v6 = sub_14005C1B0((__int64)a2, 0, 0);
	*(_DWORD*)(v5 + 8) = 5;
	*(_QWORD*)v5 = v6;
	a2[2] += 16i64;
	sub_1406B33F0(a2, v4);
}
// 140C65898: using guessed type __int64 qword_140C65898;

