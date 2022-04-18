#include "../winhttp.h"

//----- (000000014062A8C0) ----------------------------------------------------
__int64 __fastcall sub_14062A8C0(unsigned int* a1, __int64 a2, unsigned int a3)
{
	unsigned int v3; // r9d
	unsigned int v5; // r10d
	unsigned int v8; // eax
	__int64 v10; // rax
	unsigned int v11; // ecx
	unsigned int v12; // eax
	__int64 v13; // [rsp+20h] [rbp-18h] BYREF
	unsigned __int64 v14; // [rsp+28h] [rbp-10h]

	v3 = a1[2];
	v5 = a1[6];
	if (dword_140C636A8 - v3 >= v5)
	{
		if (dword_140C636A8 - v3 < a1[4])
		{
			a1[2] = v5 + v3;
		}
		else
		{
			a1[2] = dword_140C636A8;
			a1[3] = 1;
		}
	}
	else
	{
		v8 = a1[3];
		if (v8 == a1[5])
		{
			Apollo_LUAEvent(*(_QWORD*)(qword_140C65898 + 29504), "MailResult", L"i", 64i64);
			return 2147500037i64;
		}
		a1[3] = v8 + 1;
	}
	if ((dword_140DC3E58 & 1) != 0)
	{
		v11 = dword_140DC3E5C;
	}
	else
	{
		dword_140DC3E58 |= 1u;
		v10 = sub_140200220(0x939u);
		if (v10)
		{
			v11 = *(_DWORD*)(v10 + 4);
			dword_140DC3E5C = v11;
		}
		else
		{
			v11 = 3;
			dword_140DC3E5C = 3;
		}
	}
	if (*(_DWORD*)(*(_QWORD*)(qword_140C65898 + 120) + 56i64) >= v11)
	{
		v14 = 0i64;
		v13 = 0i64;
		v12 = *a1;
		v13 = a2;
		v14 = __PAIR64__(v12, a3);
		sub_1403F4900(qword_140C65898, 0x126u, (__int64)&v13);
		return 0i64;
	}
	else
	{
		Apollo_LUAEvent(*(_QWORD*)(qword_140C65898 + 29504), "MailResult", L"i", 161i64);
		return 2147500037i64;
	}
}
// 1409EEF7C: using guessed type wchar_t aI_34[2];
// 140C636A8: using guessed type int dword_140C636A8;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140DC3E58: using guessed type int dword_140DC3E58;
// 140DC3E5C: using guessed type int dword_140DC3E5C;

