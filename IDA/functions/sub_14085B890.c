//----- (000000014085B890) ----------------------------------------------------
void __fastcall sub_14085B890(__int64 a1)
{
	__int64 v1; // rax
	unsigned int v3; // ecx
	_DWORD* v4; // rax
	char v5; // al
	float v6; // xmm0_4
	_QWORD** v7; // rdi
	_QWORD** v8; // rsi
	_QWORD* i; // rbx
	__int64 v10; // rax

	v1 = *(_QWORD*)(a1 + 48);
	if (v1)
	{
		v3 = 0;
		v4 = (_DWORD*)(v1 + 4);
		while (!*v4)
		{
			++v3;
			v4 += 2;
			if (v3 >= 4)
				goto LABEL_5;
		}
		goto LABEL_10;
	}
LABEL_5:
	if ((*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)a1 + 112i64))(a1) == 12
		|| *(_DWORD*)(a1 + 164)
		|| (v5 = *(_BYTE*)(a1 + 91), (v5 & 4) != 0)
		|| a1 == qword_140C62458
		|| (v5 & 8) != 0)
	{
	LABEL_10:
		LODWORD(v6) = sub_14085A3F0(a1, 0, 4).m128_u32[0];
		*(_BYTE*)(a1 + 328) |= 0x20u;
		if (a1 == qword_140C62458)
			sub_1408332F0(v6);
		else
			sub_140833270(*(_DWORD*)(a1 + 24), v6);
	}
	*(_BYTE*)(a1 + 328) &= ~1u;
	if ((*(_BYTE*)(a1 + 328) & 1) == 0)
		sub_14085C930(a1);
	v7 = (_QWORD**)(a1 + 136);
	v8 = (_QWORD**)(a1 + 112);
	for (i = *(_QWORD**)(a1 + 136); ; ++i)
	{
		if (i == v7[1])
		{
			if (v7 != v8)
			{
				i = *v8;
				v7 = v8;
			}
			if (i == v7[1])
				break;
		}
		v10 = *(_QWORD*)(*i + 56i64);
		if (v10 && (*(_WORD*)(v10 + 72) || *(_WORD*)(v10 + 74)))
			(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*i + 408i64))(*i);
	}
}
// 14085B976: conditional instruction was optimized away because rax.8!=0
// 140C62458: using guessed type __int64 qword_140C62458;

