#include "../winhttp.h"

//----- (000000014062B000) ----------------------------------------------------
__int64 __fastcall sub_14062B000(int* a1, __int64 a2)
{
	int v2; // r9d
	unsigned int v3; // r10d
	int v4; // eax
	int v6; // eax
	__int64 v7; // [rsp+20h] [rbp-18h] BYREF
	__int64 v8; // [rsp+28h] [rbp-10h]

	v2 = a1[2];
	v3 = a1[6];
	if (dword_140C636A8 - v2 >= v3)
	{
		if (dword_140C636A8 - v2 < (unsigned int)a1[4])
		{
			a1[2] = v3 + v2;
		}
		else
		{
			a1[2] = dword_140C636A8;
			a1[3] = 1;
		}
	}
	else
	{
		v4 = a1[3];
		if (v4 == a1[5])
		{
			Apollo_LUAEvent(*(_QWORD*)(qword_140C65898 + 29504), "MailResult", L"i", 64i64);
			return 2147500037i64;
		}
		a1[3] = v4 + 1;
	}
	v7 = 0i64;
	v8 = 0i64;
	v6 = *a1;
	v7 = a2;
	LODWORD(v8) = v6;
	sub_1403F4900(qword_140C65898, 0x123u, (__int64)&v7);
	return 0i64;
}
// 1409EEF7C: using guessed type wchar_t aI_34[2];
// 140C636A8: using guessed type int dword_140C636A8;
// 140C65898: using guessed type __int64 qword_140C65898;

