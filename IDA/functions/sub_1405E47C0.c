//----- (00000001405E47C0) ----------------------------------------------------
__int64 __fastcall sub_1405E47C0(__int64 a1, unsigned int a2)
{
	__int64 v4; // rax
	__int64 v5; // rcx
	__int64 v6; // rax
	__int64 v7; // rcx
	__int64 v8; // rax
	unsigned int v9; // r11d
	__int64 v10; // rax
	unsigned int v11; // r11d
	__int64 v12; // r9
	unsigned __int64 v13; // rbx
	unsigned __int64 v14; // r8
	_DWORD** i; // r10
	__int64 v16; // rcx
	_DWORD* j; // rax

	v4 = sub_140245C00(a2);
	if (!v4)
		return 1i64;
	v6 = sub_1405BE150(v5, *(_DWORD*)(v4 + 8));
	if (!v6 || (*(_BYTE*)(v6 + 16) & 8) == 0)
		return 1i64;
	if ((dword_140C8AFC0 & 1) != 0)
	{
		v9 = dword_140C8AFBC;
	}
	else
	{
		dword_140C8AFC0 |= 1u;
		v8 = sub_140200220(0x443u);
		if (v8)
		{
			v9 = *(_DWORD*)(v8 + 4);
			dword_140C8AFBC = v9;
		}
		else
		{
			v9 = 1;
			dword_140C8AFBC = 1;
		}
	}
	if (v9 <= 1)
		return 1i64;
	v10 = sub_1405BE260(v7, a2);
	v12 = 0i64;
	if (v10)
		v13 = *(_QWORD*)(v10 + 8);
	else
		v13 = 0i64;
	if (v13)
	{
		v14 = *(_QWORD*)(a1 + 72);
		for (i = *(_DWORD***)v10; ; ++i)
		{
			v16 = 0i64;
			if (!v14)
				break;
			for (j = *(_DWORD**)(a1 + 64); *j != **i; ++j)
			{
				if (++v16 >= v14)
					return 1i64;
			}
			if (++v12 >= v13)
				return v11;
		}
		return 1i64;
	}
	return v11;
}
// 1405E47E2: variable 'v5' is possibly undefined
// 1405E4847: variable 'v7' is possibly undefined
// 1405E48AC: variable 'v11' is possibly undefined
// 140C8AFBC: using guessed type int dword_140C8AFBC;
// 140C8AFC0: using guessed type int dword_140C8AFC0;

