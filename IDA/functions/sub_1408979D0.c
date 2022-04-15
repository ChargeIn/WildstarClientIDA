#include "../winhttp.h"

//----- (00000001408979D0) ----------------------------------------------------
__int64 __fastcall sub_1408979D0(__int64 a1, __int64* a2, _BYTE* a3)
{
	__int64 v6; // rdi
	__int64 v7; // rbx
	__int64 v8; // rbp
	int v9; // esi
	__int64* v10; // r14
	char v11; // al
	bool v12; // zf
	unsigned __int16* v13; // r10
	unsigned __int16* v14; // r9
	int v15; // r8d
	unsigned __int16* v16; // rax
	__int64 v17; // rdx
	int v18; // r14d
	int v19; // r14d

	*a3 = 0;
	if (((*(_DWORD*)(*a2 + 56) - 1) & 0xFFFFFFFD) != 0)
		v6 = a2[2];
	else
		v6 = sub_140896C70(*a2);
	v7 = 0i64;
	if (v6)
	{
		v8 = *a2;
		v9 = -1;
		if (!*(_WORD*)(v6 + 34))
		{
			v10 = a2 + 1;
			if (v10)
			{
				v11 = *((_BYTE*)v10 + 2);
				if ((v11 & 1) == 0 || (v11 & 2) == 0 && (v12 = *(_WORD*)v10 == 1, -- * (_WORD*)v10, v12))
				{
					*a3 = 1;
					return (unsigned __int16)v7;
				}
			}
			*(_WORD*)(v6 + 34) = (__int64)(unsigned int)(*(_DWORD*)(v8 + 40) - *(_DWORD*)(v8 + 32)) >> 3;
			sub_14087C360(v6, (unsigned int)((__int64)(*(_QWORD*)(v8 + 40) - *(_QWORD*)(v8 + 32)) >> 3));
			v13 = *(unsigned __int16**)(v6 + 40);
			v14 = *(unsigned __int16**)(v6 + 48);
			v15 = *(_DWORD*)(v6 + 24);
			v16 = v13;
			for (*(_DWORD*)(v6 + 28) = v15; v16 != v14; *(_DWORD*)(v6 + 28) = v15)
			{
				v17 = *v16++;
				v15 -= *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(v8 + 32) + 8 * v17) + 24i64);
			}
			*(_WORD*)(v6 + 32) -= v14 - v13;
		}
		if (*(_BYTE*)(v8 + 72))
		{
			if (!*(_DWORD*)(v6 + 28))
			{
			LABEL_17:
				*(_WORD*)(v6 + 34) = 0;
				return (unsigned __int16)v7;
			}
			v18 = sub_14087C1B0(v6);
			if (v18 <= -1)
			{
			LABEL_38:
				LOWORD(v7) = v7 - 1;
				sub_140897E70(a1, v8, v7, v8 + 32, v6);
				return (unsigned __int16)v7;
			}
			while (1)
			{
				if (*(_BYTE*)(v8 + 73))
				{
					if (sub_14087C2D0(v6, v7) || sub_14087C2A0(v6, v7))
						goto LABEL_26;
				}
				else if (*(_WORD*)(v8 + 76) && sub_14087C2A0(v6, v7))
				{
					goto LABEL_26;
				}
				v9 += *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(v8 + 32) + 8 * v7) + 24i64);
			LABEL_26:
				v7 = (unsigned int)(v7 + 1);
				if (v9 >= v18)
					goto LABEL_38;
			}
		}
		if (!*(_WORD*)(v6 + 32))
			goto LABEL_17;
		v19 = (unsigned __int16)((int)sub_1407DDB28() % *(unsigned __int16*)(v6 + 32));
		while (1)
		{
			if (*(_BYTE*)(v8 + 73))
			{
				if (sub_14087C2D0(v6, v7) || sub_14087C2A0(v6, v7))
					goto LABEL_37;
			}
			else if (*(_WORD*)(v8 + 76) && sub_14087C2A0(v6, v7))
			{
				goto LABEL_37;
			}
			++v9;
		LABEL_37:
			LOWORD(v7) = v7 + 1;
			if (v9 >= v19)
				goto LABEL_38;
		}
	}
	*a3 = 1;
	return (unsigned __int16)v7;
}
// 140897B5F: conditional instruction was optimized away because r14d.4<10000u

