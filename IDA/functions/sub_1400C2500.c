#include "../winhttp.h"

//----- (00000001400C2500) ----------------------------------------------------
void __fastcall sub_1400C2500(__int64 a1, unsigned __int16* a2)
{
	__int16* v4; // rax
	int v5; // eax
	__int16* v6; // rsi
	wchar_t* v7; // rdx
	unsigned int v8; // eax
	int v9; // ecx
	char v10[8]; // [rsp+20h] [rbp-28h] BYREF
	__int16* v11; // [rsp+28h] [rbp-20h]
	__int16* v12; // [rsp+30h] [rbp-18h]
	__int16* v13; // [rsp+38h] [rbp-10h]

	if (a2)
	{
		if (*(_DWORD*)(a1 + 56))
		{
			*(_DWORD*)(a1 + 56) = 0;
			v4 = (__int16*)sub_14018B280(16i64, 0);
			v11 = v4;
			v12 = v4;
			v13 = v4 + 8;
			if (v4)
				*v4 = 0;
			v5 = sub_1400B8AA0(a2, (int*)"i", (__int64)v10);
			v6 = v11;
			if (v5)
			{
				sub_1400B8980(a1, v11);
				v7 = (wchar_t*)&unk_1409D28F4;
			}
			else
			{
				v8 = (unsigned __int16)sub_140056430(*a2) - 97;
				if (v8 > 0x14 || (v9 = 1065233, v7 = L"an ", !_bittest(&v9, v8)))
					v7 = L"a ";
			}
			sub_1400B8980(a1, (__int16*)v7);
			if (v6)
				sub_14018B900((__int64)v6, 0);
		}
		sub_1400B8980(a1, (__int16*)a2);
	}
}
// 1409D3C74: using guessed type wchar_t aA_0[3];
// 140A14818: using guessed type wchar_t aAn[4];
// 1400C2500: using guessed type char var_28[8];

