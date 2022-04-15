//----- (0000000140429630) ----------------------------------------------------
__int64 __fastcall sub_140429630(__int64 a1)
{
	int* v2; // rdx
	__int64 result; // rax
	int v4; // r8d
	int v5; // r9d
	int v6; // r10d
	int v7; // ecx
	int v8; // [rsp+20h] [rbp-48h]
	int v9; // [rsp+28h] [rbp-40h]
	int v10; // [rsp+30h] [rbp-38h]
	int v11; // [rsp+38h] [rbp-30h]
	int v12; // [rsp+40h] [rbp-28h]
	int v13; // [rsp+48h] [rbp-20h]

	v2 = *(int**)(qword_140C658A8 + 56);
	if (v2 || (result = qword_140C658B0, (v2 = *(int**)(qword_140C658B0 + 56)) != 0i64))
	{
		result = (unsigned int)v2[2];
		v4 = 0;
		if ((_DWORD)result == 10 || (v5 = 0, (_DWORD)result == 118))
			v5 = 1;
		v6 = v2[12];
		if (v6)
		{
			v7 = v2[13];
			if (v5)
				v7 = ((_DWORD)result != 10) + 4;
			LOBYTE(v4) = v6 == 1;
			v13 = v4;
			v12 = v2[6];
			v11 = v2[7];
			v10 = v2[8];
			v9 = v7;
			v8 = *v2;
			return sub_1400EA3E0(
				a1,
				"DamageOrHealingDone",
				"UUiiiibS",
				(unsigned int)v2[1],
				v8,
				v9,
				v10,
				v11,
				v12,
				v13,
				*((_QWORD*)v2 + 10));
		}
	}
	return result;
}
// 140C658A8: using guessed type __int64 qword_140C658A8;
// 140C658B0: using guessed type __int64 qword_140C658B0;

