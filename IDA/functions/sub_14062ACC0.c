#include "../winhttp.h"

//----- (000000014062ACC0) ----------------------------------------------------
__int64 __fastcall sub_14062ACC0(_DWORD* a1, unsigned __int64 a2)
{
	int v2; // r8d
	unsigned int v3; // r9d
	int v5; // eax
	__int64 v6; // r9
	__int64 v7; // rcx
	__int64 v9; // rax
	unsigned __int64 v10; // [rsp+30h] [rbp+8h] BYREF

	v2 = a1[2];
	v3 = a1[6];
	if (dword_140C636A8 - v2 >= v3)
	{
		if ((unsigned int)(dword_140C636A8 - v2) < a1[4])
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
		v5 = a1[3];
		if (v5 == a1[5])
		{
			v6 = 64i64;
		LABEL_5:
			v7 = qword_140C65898;
		LABEL_6:
			sub_1400EA3E0(*(_QWORD*)(v7 + 29504), "MailResult", L"i", v6);
			return 2147500037i64;
		}
		a1[3] = v5 + 1;
	}
	v9 = sub_140629AF0((__int64)a1, a2);
	if (!v9)
	{
		v6 = 71i64;
		goto LABEL_5;
	}
	v7 = qword_140C65898;
	if ((*(_BYTE*)(v9 + 76) & 8) != 0)
	{
		v6 = 119i64;
		goto LABEL_6;
	}
	v10 = a2;
	sub_1403F4900(qword_140C65898, 0x124u, (__int64)&v10);
	return 0i64;
}
// 1409EEF7C: using guessed type wchar_t aI_34[2];
// 140C636A8: using guessed type int dword_140C636A8;
// 140C65898: using guessed type __int64 qword_140C65898;

