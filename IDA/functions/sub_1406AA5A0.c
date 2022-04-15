//----- (00000001406AA5A0) ----------------------------------------------------
__int64 __fastcall sub_1406AA5A0(_QWORD* a1)
{
	__int64 v2; // rsi
	int v3; // eax
	int v4; // ecx
	__int64 v5; // rax
	int v6; // r11d
	int v7; // eax
	int v8; // r11d
	__int64 v9; // rax
	__int64 v10; // rax
	__int64 v11; // rax

	v2 = sub_1406A93C0(a1);
	if (v2)
	{
		v3 = dword_140DC4B70;
		if ((dword_140DC4B70 & 1) != 0)
		{
			v4 = dword_140DC4B7C;
		}
		else
		{
			v3 = dword_140DC4B70 | 1;
			v4 = 0;
			dword_140DC4B7C = 0;
			dword_140DC4B70 |= 1u;
		}
		if ((v3 & 2) == 0)
		{
			v3 |= 2u;
			dword_140DC4B84 = 0;
			dword_140DC4B70 = v3;
		}
		if ((v3 & 4) == 0)
		{
			dword_140DC4B8C = 0;
			dword_140DC4B70 = v3 | 4;
		}
		if (v4)
		{
			v6 = dword_140DC4B78;
		}
		else
		{
			dword_140DC4B7C = 1;
			v5 = sub_140200220(0x40Bu);
			if (v5)
			{
				v6 = *(_DWORD*)(v5 + 4);
				dword_140DC4B78 = v6;
			}
			else
			{
				v6 = 0;
				dword_140DC4B78 = 0;
			}
		}
		if (qword_140C65898)
		{
			v7 = sub_1403ABFE0(qword_140C65898 + 7160, 31, 0);
			v6 = v8 + 2 * v7;
		}
		if (qword_140C7DFE0)
		{
			if (dword_140DC4B84)
			{
				v6 = dword_140DC4B80;
			}
			else
			{
				dword_140DC4B84 = 1;
				v9 = sub_140200220(0x40Bu);
				if (v9)
				{
					v6 = *(_DWORD*)(v9 + 8);
					dword_140DC4B80 = v6;
				}
				else
				{
					v6 = 0;
					dword_140DC4B80 = 0;
				}
			}
		}
		if (*(_DWORD*)(v2 + 48) == 5)
		{
			if (dword_140DC4B8C)
			{
				v6 = dword_140DC4B88;
			}
			else
			{
				dword_140DC4B8C = 1;
				v10 = sub_140200220(0x40Bu);
				if (v10)
				{
					v6 = *(_DWORD*)(v10 + 12);
					dword_140DC4B88 = v6;
				}
				else
				{
					v6 = 0;
					dword_140DC4B88 = 0;
				}
			}
		}
		v11 = a1[2];
		*(_DWORD*)(v11 + 8) = 3;
		*(double*)v11 = (double)v6;
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
	}
	a1[2] += 16i64;
	return 1i64;
}
// 1406AA673: variable 'v8' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C7DFE0: using guessed type __int64 qword_140C7DFE0;
// 140DC4B70: using guessed type int dword_140DC4B70;
// 140DC4B78: using guessed type int dword_140DC4B78;
// 140DC4B7C: using guessed type int dword_140DC4B7C;
// 140DC4B80: using guessed type int dword_140DC4B80;
// 140DC4B84: using guessed type int dword_140DC4B84;
// 140DC4B88: using guessed type int dword_140DC4B88;
// 140DC4B8C: using guessed type int dword_140DC4B8C;

