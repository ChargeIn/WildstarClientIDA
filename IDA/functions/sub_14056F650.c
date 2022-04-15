//----- (000000014056F650) ----------------------------------------------------
__int64 __fastcall sub_14056F650(unsigned __int64 a1, unsigned int a2, unsigned int a3)
{
	int v3; // eax
	__int64 v4; // rdi
	int v8; // eax
	unsigned __int64 v9; // rsi
	__int64 v10; // rax
	unsigned __int64 v11; // rax
	__int64 v12; // rcx
	unsigned __int64 v13; // rsi
	__int64 v14; // rax
	unsigned __int64 v15; // rax
	unsigned __int64 v16; // [rsp+40h] [rbp+8h] BYREF
	struct _FILETIME SystemTimeAsFileTime; // [rsp+58h] [rbp+20h] BYREF

	v16 = a1;
	v3 = dword_140DC3420;
	v4 = qword_140C65970;
	if ((dword_140DC3420 & 1) == 0)
	{
		v3 = dword_140DC3420 | 1;
		dword_140DC3430 = 0;
		dword_140DC3420 |= 1u;
	}
	if ((v3 & 2) == 0)
	{
		dword_140DC3440 = 0;
		dword_140DC3420 = v3 | 2;
	}
	if (a2 == *(_DWORD*)(qword_140C65970 + 8))
		return 0i64;
	v8 = *(_DWORD*)(qword_140C65970 + 12);
	if (!_bittest(&v8, a2))
		return 165i64;
	GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
	v9 = (*(_QWORD*)&SystemTimeAsFileTime - *(_QWORD*)(v4 + 48)) / 0x989680ui64;
	if (dword_140DC3430)
	{
		v11 = qword_140DC3428;
	}
	else
	{
		dword_140DC3430 = 1;
		v10 = sub_140200220(0x93Eu);
		if (!v10)
		{
			qword_140DC3428 = 0i64;
			goto LABEL_13;
		}
		v11 = *(unsigned int*)(v10 + 4);
		qword_140DC3428 = v11;
	}
	if (v9 < v11)
	{
		if (!a3)
			return 166i64;
		v13 = *(_QWORD*)(*(_QWORD*)(qword_140C635F0 + 5584) + 280i64);
		if (dword_140DC3440)
		{
			v15 = qword_140DC3438;
		}
		else
		{
			dword_140DC3440 = 1;
			v14 = sub_140200220(0x93Eu);
			if (!v14)
			{
				qword_140DC3438 = 0i64;
				goto LABEL_13;
			}
			v15 = *(unsigned int*)(v14 + 8);
			qword_140DC3438 = v15;
		}
		if (v13 < v15)
			return 164i64;
	}
LABEL_13:
	v12 = qword_140C65898;
	*(_DWORD*)(v4 + 288) = a2;
	v16 = __PAIR64__(a3, a2);
	sub_1403F4900(v12, 0x6B2u, (__int64)&v16);
	return 167i64;
}
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65970: using guessed type __int64 qword_140C65970;
// 140DC3420: using guessed type int dword_140DC3420;
// 140DC3428: using guessed type __int64 qword_140DC3428;
// 140DC3430: using guessed type int dword_140DC3430;
// 140DC3438: using guessed type __int64 qword_140DC3438;
// 140DC3440: using guessed type int dword_140DC3440;

