//----- (00000001404ADE10) ----------------------------------------------------
_BOOL8 __fastcall sub_1404ADE10(__int64 a1, unsigned int a2, _QWORD* a3, _QWORD* a4)
{
	int v4; // eax
	__int64 v8; // rcx
	__int64 v9; // rax
	int v10; // r9d
	__int64 v11; // rcx
	BOOL v12; // ebx
	__int64 v13; // rax
	int v14; // r9d

	v4 = dword_140DC30D8;
	if ((dword_140DC30D8 & 1) != 0)
	{
		v8 = (unsigned int)dword_140DC30E4;
	}
	else
	{
		v4 = dword_140DC30D8 | 1;
		v8 = 0i64;
		dword_140DC30D8 |= 1u;
		dword_140DC30E4 = 0;
	}
	if ((v4 & 2) == 0)
	{
		dword_140DC30EC = 0;
		dword_140DC30D8 = v4 | 2;
	}
	if ((_DWORD)v8)
	{
		v10 = dword_140DC30E0;
	}
	else
	{
		dword_140DC30E4 = 1;
		v9 = sub_140200220(0x51Bu);
		if (v9)
		{
			v10 = *(_DWORD*)(v9 + 4);
			dword_140DC30E0 = v10;
		}
		else
		{
			v10 = 0;
			dword_140DC30E0 = 0;
		}
	}
	v12 = sub_1404ADC50(v8, a2, a3, v10) != 0;
	if (dword_140DC30EC)
	{
		v14 = dword_140DC30E8;
	}
	else
	{
		dword_140DC30EC = 1;
		v13 = sub_140200220(0x51Bu);
		if (v13)
		{
			v14 = *(_DWORD*)(v13 + 8);
			dword_140DC30E8 = v14;
		}
		else
		{
			v14 = 0;
			dword_140DC30E8 = 0;
		}
	}
	if (!(unsigned int)sub_1404ADC50(v11, a2, a4, v14))
		return 0;
	return v12;
}
// 1404ADEA5: variable 'v8' is possibly undefined
// 1404ADEF9: variable 'v11' is possibly undefined
// 140DC30D8: using guessed type int dword_140DC30D8;
// 140DC30E0: using guessed type int dword_140DC30E0;
// 140DC30E4: using guessed type int dword_140DC30E4;
// 140DC30E8: using guessed type int dword_140DC30E8;
// 140DC30EC: using guessed type int dword_140DC30EC;

