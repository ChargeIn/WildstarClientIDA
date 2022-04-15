#include "../winhttp.h"

//----- (0000000140854640) ----------------------------------------------------
char __fastcall sub_140854640(__int64 a1, char a2)
{
	char v3; // cl
	__int64* v4; // rax
	__int64 v5; // rcx
	__int64 v6; // rcx
	bool v7; // al
	__int64 i; // rbx
	__int64 v9; // rcx
	bool v10; // al

	v3 = *(_BYTE*)(a1 + 90);
	LOBYTE(v4) = v3 & 1;
	if ((v3 & 1) != a2)
	{
		LOBYTE(v4) = v3 ^ (a2 ^ v3) & 1;
		v5 = *(_QWORD*)(a1 + 56);
		*(_BYTE*)(a1 + 90) = (_BYTE)v4;
		if (v5)
		{
			v6 = v5 + 32;
			v7 = *(_BYTE*)(v6 + 26) == 0;
			*(_BYTE*)(v6 + 26) = v7;
			if (v7)
				sub_140850E70(v6);
			else
				sub_140850D80(v6);
			v4 = *(__int64**)(a1 + 56);
			for (i = *v4; i != v4[1]; i += 24i64)
			{
				v9 = *(_QWORD*)(i + 8);
				if (v9)
				{
					v10 = *(_BYTE*)(v9 + 26) == 0;
					*(_BYTE*)(v9 + 26) = v10;
					if (v10)
						sub_140850E70(v9);
					else
						sub_140850D80(v9);
				}
				v4 = *(__int64**)(a1 + 56);
			}
		}
	}
	return (char)v4;
}

