//----- (000000014085C930) ----------------------------------------------------
void __fastcall sub_14085C930(__int64 a1)
{
	__int64 v1; // rax
	unsigned int v3; // edx
	_DWORD* v4; // rax
	char v5; // al
	unsigned __int32 v6; // xmm0_4

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
		goto LABEL_11;
	}
LABEL_5:
	if ((*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)a1 + 112i64))(a1) == 12
		|| *(_DWORD*)(a1 + 164)
		|| (v5 = *(_BYTE*)(a1 + 91), (v5 & 4) != 0)
		|| a1 == qword_140C62458
		|| (v5 & 8) != 0)
	{
	LABEL_11:
		*(_DWORD*)(a1 + 320) = 0;
		goto LABEL_12;
	}
	*(_DWORD*)(a1 + 320) = sub_14085A3F0(a1, 0, 4).m128_u32[0];
LABEL_12:
	v6 = sub_14085A3F0(a1, 1u, 0).m128_u32[0];
	*(_BYTE*)(a1 + 328) |= 1u;
	*(_DWORD*)(a1 + 324) = v6;
}
// 140C62458: using guessed type __int64 qword_140C62458;

