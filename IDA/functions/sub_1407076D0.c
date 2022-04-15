#include "../winhttp.h"

//----- (00000001407076D0) ----------------------------------------------------
__int64 __fastcall sub_1407076D0(__int64 a1)
{
	__int64 v2; // rax
	int v3; // edi
	__int64 v4; // rax
	__int64 v5; // rax
	__int64 v7; // rax
	__int64 v8; // rbx
	int v9; // eax
	__int64 v10; // rdx

	if ((dword_140DC4C64 & 1) != 0)
	{
		if (dword_140DC4C6C)
		{
			v3 = dword_140DC4C68;
			goto LABEL_8;
		}
	}
	else
	{
		dword_140DC4C64 |= 1u;
	}
	dword_140DC4C6C = 1;
	v2 = sub_140200220(0x51Bu);
	if (v2)
	{
		v3 = *(_DWORD*)(v2 + 4);
		dword_140DC4C68 = v3;
	}
	else
	{
		v3 = 0;
		dword_140DC4C68 = 0;
	}
LABEL_8:
	v4 = *(_QWORD*)(*(_QWORD*)(qword_140C65898 + 120) + 5640i64);
	if (v4)
	{
		while (*(_DWORD*)(v4 + 8) != v3)
		{
			v4 = *(_QWORD*)(v4 + 136);
			if (!v4)
				goto LABEL_11;
		}
		if (!dword_140DC4C6C)
		{
			dword_140DC4C6C = 1;
			v7 = sub_140200220(0x51Bu);
			if (v7)
				v3 = *(_DWORD*)(v7 + 4);
			else
				v3 = 0;
			dword_140DC4C68 = v3;
		}
		v8 = *(_QWORD*)(*(_QWORD*)(qword_140C65898 + 120) + 5640i64);
		if (v8)
		{
			while (1)
			{
				if (*(_DWORD*)(v8 + 4) == 1 && v3 == *(_DWORD*)(v8 + 12))
				{
					if (*(_QWORD*)(v8 + 32))
					{
						v9 = sub_140195F70(v8 + 16);
						if (v9)
							break;
					}
				}
				v8 = *(_QWORD*)(v8 + 136);
				if (!v8)
					goto LABEL_24;
			}
		}
		else
		{
		LABEL_24:
			v9 = 0;
		}
		v10 = *(_QWORD*)(a1 + 16);
		*(_DWORD*)(v10 + 8) = 3;
		*(double*)v10 = (float)((float)v9 * 0.001);
	}
	else
	{
	LABEL_11:
		v5 = *(_QWORD*)(a1 + 16);
		*(_QWORD*)v5 = 0i64;
		*(_DWORD*)(v5 + 8) = 3;
	}
	*(_QWORD*)(a1 + 16) += 16i64;
	return 1i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140DC4C64: using guessed type int dword_140DC4C64;
// 140DC4C68: using guessed type int dword_140DC4C68;
// 140DC4C6C: using guessed type int dword_140DC4C6C;

