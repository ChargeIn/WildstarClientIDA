#include "../winhttp.h"

//----- (00000001403DB9A0) ----------------------------------------------------
__int64 __fastcall sub_1403DB9A0(__int64 a1, unsigned int* a2)
{
	int v5; // edx
	__int64 v6; // rsi
	unsigned __int64 v7; // rdx
	unsigned int v8; // edi
	unsigned __int64 v9; // rax
	_DWORD* v10; // rcx
	unsigned int i; // ebp

	if (!*(_QWORD*)(a1 + 120))
		return 2147500037i64;
	v5 = *a2;
	if (*(_DWORD*)(a1 + 26176) == v5)
	{
		v6 = sub_1403D90D0(a1, v5);
		if (v6)
		{
			if (a2[10])
			{
				if (a2[12])
				{
					sub_1403A71F0(a1, 0, 0x65u, 1);
					return 0i64;
				}
				sub_1400EA3E0(*(_QWORD*)(a1 + 29504), "InvokeVendorWindow", byte_1409E9E94, *a2);
			}
			*(_DWORD*)(v6 + 14044) = a2[8];
			*(_DWORD*)(v6 + 14048) = a2[9];
			if (a2[11] || a2[10] || a2[4] != 1)
			{
				sub_1403D2FC0((__int64*)(v6 + 14000));
				v8 = 0;
				for (i = 0; i < a2[4]; ++i)
					sub_14047ABA0(v6, *((_QWORD*)a2 + 3) + 80i64 * i);
			}
			else
			{
				v7 = *(_QWORD*)(v6 + 14008);
				v8 = 0;
				v9 = 0i64;
				if (!v7)
					goto LABEL_16;
				v10 = *(_DWORD**)(v6 + 14000);
				while (*v10 != **((_DWORD**)a2 + 3))
				{
					++v9;
					v10 += 64;
					if (v9 >= v7)
						goto LABEL_16;
				}
				if (*(_QWORD*)(v6 + 14000) + (v9 << 8))
					sub_14047B160(v6, *((_QWORD*)a2 + 3));
				else
					LABEL_16:
				sub_14047ABA0(v6, *((_QWORD*)a2 + 3));
			}
			if (a2[1])
			{
				sub_1400523E0((__int64*)(v6 + 14016));
				if (a2[1])
				{
					do
						sub_14047B500(v6, (__int64*)(*((_QWORD*)a2 + 1) + 8i64 * v8++));
					while (v8 < a2[1]);
				}
			}
			sub_1400EA3E0(*(_QWORD*)(a1 + 29504), "VendorItemsUpdated", &unk_1409D0D66);
		}
	}
	return 0i64;
}
// 1409E9E94: using guessed type _BYTE byte_1409E9E94[104];

