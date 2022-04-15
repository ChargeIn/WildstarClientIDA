#include "../winhttp.h"

//----- (00000001407799E0) ----------------------------------------------------
void __fastcall sub_1407799E0(__int64 a1)
{
	int v2; // eax
	int v3; // ecx
	__int64 v4; // rax
	__int64 v5; // rax
	unsigned int v6; // ecx

	if (sub_140779BE0(a1))
	{
		if (*(_DWORD*)(a1 + 168))
		{
			v2 = sub_14018CDF0();
			v3 = v2 - *(_DWORD*)(a1 + 160);
			*(_DWORD*)(a1 + 160) = v2;
			v4 = *(_QWORD*)a1;
			*(_DWORD*)(a1 + 164) = v3;
			(*(void(__fastcall**)(__int64))(v4 + 136))(a1);
			v5 = *(_QWORD*)(a1 + 144);
			if (*(_DWORD*)(v5 + 4) != 5)
			{
				v6 = *(_DWORD*)(v5 + 12);
				if (v6)
				{
					if (*(_DWORD*)(a1 + 160) - *(_DWORD*)(a1 + 156) > v6)
						sub_140779660(a1, 0i64);
				}
			}
		}
	}
	else
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)a1 + 88i64))(a1);
	}
}

