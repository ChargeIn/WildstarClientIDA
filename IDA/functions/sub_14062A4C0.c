#include "../winhttp.h"

//----- (000000014062A4C0) ----------------------------------------------------
__int64 __fastcall sub_14062A4C0(_DWORD* a1, _WORD* a2, __int64 a3, __int64 a4, __int64 a5, int a6, __int64 a7)
{
	int v7; // r10d
	unsigned int v10; // r8d
	int v12; // eax
	__int64 v13; // r9
	__int64 v15[6]; // [rsp+20h] [rbp-C8h] BYREF
	int v16; // [rsp+50h] [rbp-98h]

	v7 = a1[2];
	v10 = a1[6];
	if (dword_140C636A8 - v7 >= v10)
	{
		if ((unsigned int)(dword_140C636A8 - v7) < a1[4])
		{
			a1[2] = v10 + v7;
		}
		else
		{
			a1[2] = dword_140C636A8;
			a1[3] = 1;
		}
	}
	else
	{
		v12 = a1[3];
		if (v12 == a1[5])
		{
			v13 = 64i64;
		LABEL_5:
			Apollo_LUAEvent(*(_QWORD*)(qword_140C65898 + 29504), "MailResult", L"i", v13);
			return 2147500037i64;
		}
		a1[3] = v12 + 1;
	}
	if (!(unsigned int)sub_1403E1170(a2, 0))
	{
		v13 = 53i64;
		goto LABEL_5;
	}
	sub_1407E4830((int*)v15, 0i64, 0x88ui64);
	v15[4] = a7;
	v15[0] = (__int64)a2;
	v15[1] = a3;
	v16 = a6;
	v15[2] = a4;
	v15[3] = a5;
	sub_1403F4900(qword_140C65898, 0x168u, (__int64)v15);
	return 0i64;
}
// 1409EEF7C: using guessed type wchar_t aI_34[2];
// 140C636A8: using guessed type int dword_140C636A8;
// 140C65898: using guessed type __int64 qword_140C65898;

