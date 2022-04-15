//----- (00000001405A5550) ----------------------------------------------------
__int64 __fastcall sub_1405A5550(__int64 a1, __int64 a2)
{
	_DWORD* v4; // rsi
	unsigned int v5; // ecx
	int v6; // edi
	__int64 v7; // r10
	__int64 v8; // rax

	v4 = (_DWORD*)sub_140561C30(qword_140C65B70, *(_DWORD*)a2);
	if (v4)
	{
		v5 = *(_DWORD*)(a2 + 4);
		v6 = 0;
		if (v5 <= 0x14B)
			sub_140237240(v5);
		(*(void(__fastcall**)(_DWORD*))(*(_QWORD*)v4 + 8i64))(v4);
		sub_1400035B0();
		if (*(_QWORD*)(a1 + 120))
		{
			if (sub_14053FCA0((__int64)v4))
				sub_14046AA00(v7, 0, 0);
			if ((dword_140DC3488 & 1) == 0)
			{
				dword_140DC3488 |= 1u;
				v8 = sub_140200220(0x1A1u);
				if (v8)
					v6 = *(_DWORD*)(v8 + 4);
				dword_140DC348C = v6;
			}
			if ((*(unsigned int(__fastcall**)(_DWORD*))(*(_QWORD*)v4 + 8i64))(v4) == dword_140DC348C
				&& v4[85] == *(_DWORD*)(*(_QWORD*)(a1 + 120) + 8i64))
			{
				sub_1400EA3E0(*(_QWORD*)(a1 + 29504), "CraftingInterrupted", byte_1409D135B);
			}
		}
		sub_14053E1B0((__int64)v4, *(_DWORD*)(a2 + 4), *(_DWORD*)(a2 + 8), *(_DWORD*)(a2 + 12));
	}
	return 0i64;
}
// 1405A5619: variable 'v7' is possibly undefined
// 1409D135B: using guessed type _BYTE byte_1409D135B[3];
// 140C3FE68: using guessed type __int64 qword_140C3FE68;
// 140C3FE70: using guessed type __int64 qword_140C3FE70;
// 140C65B70: using guessed type __int64 qword_140C65B70;
// 140DC3488: using guessed type int dword_140DC3488;
// 140DC348C: using guessed type int dword_140DC348C;

