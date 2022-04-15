//----- (0000000140707D80) ----------------------------------------------------
__int64 __fastcall sub_140707D80(__int64 a1)
{
	_DWORD* v2; // rcx
	__int64 result; // rax
	_DWORD* v4; // rax
	char v5; // [rsp+38h] [rbp+10h] BYREF

	if ((dword_140DC4C80 & 1) == 0)
	{
		dword_140DC4C8C = 0;
		dword_140DC4C80 |= 1u;
		dword_140DC4C90 = 3000;
		dword_140DC4C94 = 1;
		dword_140DC4C98 = 3000;
		dword_140DC4C88 = dword_140C636A8 - 3000;
		sub_1407DD89C(nullsub_12);
	}
	if (qword_140C65898)
	{
		if (dword_140C636A8 - dword_140DC4C88 >= (unsigned int)dword_140DC4C98)
		{
			if (dword_140C636A8 - dword_140DC4C88 < (unsigned int)dword_140DC4C90)
			{
				dword_140DC4C88 += dword_140DC4C98;
			}
			else
			{
				dword_140DC4C88 = dword_140C636A8;
				dword_140DC4C8C = 1;
			}
			goto LABEL_10;
		}
		if (dword_140DC4C8C != dword_140DC4C94)
		{
			++dword_140DC4C8C;
		LABEL_10:
			v5 = 0;
			sub_1403F4900(qword_140C65898, 0x6E8u, (__int64)&v5);
			v2 = *(_DWORD**)(a1 + 16);
			result = 1i64;
			*v2 = 1;
			v2[2] = 1;
			*(_QWORD*)(a1 + 16) += 16i64;
			return result;
		}
	}
	v4 = *(_DWORD**)(a1 + 16);
	*v4 = 0;
	v4[2] = 1;
	*(_QWORD*)(a1 + 16) += 16i64;
	return 1i64;
}
// 140956810: using guessed type __int64 __fastcall nullsub_12();
// 140C636A8: using guessed type int dword_140C636A8;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140DC4C80: using guessed type int dword_140DC4C80;
// 140DC4C88: using guessed type int dword_140DC4C88;
// 140DC4C8C: using guessed type int dword_140DC4C8C;
// 140DC4C90: using guessed type int dword_140DC4C90;
// 140DC4C94: using guessed type int dword_140DC4C94;
// 140DC4C98: using guessed type int dword_140DC4C98;

