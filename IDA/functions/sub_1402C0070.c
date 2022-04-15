#include "../winhttp.h"

//----- (00000001402C0070) ----------------------------------------------------
__int64 __fastcall sub_1402C0070(__int64 a1, _WORD* a2, __int64 a3, int a4)
{
	__int64 v8; // rsi
	int v9; // ebx
	unsigned __int8 v11; // bl
	_QWORD* v12; // r8
	unsigned __int64 v13; // r10
	__int16 v14; // r9
	unsigned __int64 v15; // r11
	unsigned __int64 v16; // rax
	__int64 v17; // rcx
	unsigned __int64 v18; // rbx
	__int64 v19; // r13
	__int16 v20; // ax
	int v21; // esi
	unsigned __int8 v22; // si
	__int64 v23; // rcx
	__int64 v24; // rax
	unsigned __int64 v25; // rcx
	__int64 v26; // rax
	int v27; // r14d
	__int64 v28; // rax
	__int64 v29; // [rsp+80h] [rbp+8h] BYREF
	unsigned __int8 v30; // [rsp+98h] [rbp+20h] BYREF

	v8 = 208i64 * a4;
	v9 = sub_1402C0490(a1, &v30, v8 + a1 + 8);
	if (v9 >= 0)
	{
		v11 = v30;
		v12 = *(_QWORD**)(a1 + 840);
		v13 = v30;
		v14 = 0;
		v15 = 0i64;
		if (v30)
		{
			while (1)
			{
				if (v12[3] > 7ui64)
				{
					v16 = ++v12[2];
					v12[3] = 0i64;
					if (v16 >= v12[1])
						break;
				}
				v17 = v12[3];
				++v15;
				v14 = (2 * v14) | (*(unsigned __int8*)v12[2] << v17 >> 7) & 1;
				v12[3] = v17 + 1;
				if (v15 >= v13)
					goto LABEL_7;
			}
			v29 = 0x141E5CB70i64;
			sub_1401A3130(14, 2, &v29, 2147500037i64, v11, a4);
			return 2147500037i64;
		}
		else
		{
		LABEL_7:
			v18 = 1i64;
			if (v14 < 1 << (v13 - 1))
				v14 += 1 - (1 << v13);
			v19 = v8 + 112;
			v20 = v14 + *(_WORD*)(a1 + 2 * a3);
			*a2 = v20;
			*(_WORD*)(a1 + 2 * a3) = v20;
			while (1)
			{
				v21 = sub_1402C0490(a1, &v30, a1 + v19);
				if (v21 < 0)
				{
					v29 = 0x141E5CB58i64;
					sub_1401A3130(14, 2, &v29, (unsigned int)v21, a4);
					return (unsigned int)v21;
				}
				v22 = v30;
				if (!v30)
					break;
				if (v30 == 0xF0)
				{
					if (v18 + 16 >= 0x40)
					{
						v29 = 0x141E5CB40i64;
						sub_1401A3130(14, 2, &v29, v18, a4);
						return 2147500037i64;
					}
					v23 = 16i64;
					do
					{
						v24 = dword_140AED820[v18++];
						a2[v24] = 0;
						--v23;
					} while (v23);
				}
				else
				{
					v25 = (unsigned __int64)v30 >> 4;
					if (v25 + v18 >= 0x40)
					{
						v29 = 0x141E5CB18i64;
						sub_1401A3130(14, 2, &v29, v18, (unsigned __int64)v30 >> 4, v30, a4);
						return 2147500037i64;
					}
					for (; v25; --v25)
					{
						v26 = dword_140AED820[v18++];
						a2[v26] = 0;
					}
					v27 = sub_1402C03F0(a1, &a2[dword_140AED820[v18]], v22 & 0xF);
					if (v27 < 0)
					{
						v29 = 0x141E5CB90i64;
						sub_1401A3130(14, 2, &v29, (unsigned int)v27, v18, v22 & 0xF, v22, a4);
						return (unsigned int)v27;
					}
					++v18;
				}
				if (v18 >= 0x40)
					return 0i64;
			}
			do
			{
				v28 = dword_140AED820[v18++];
				a2[v28] = 0;
			} while (v18 < 0x40);
			return 0i64;
		}
	}
	else
	{
		v29 = 0x141E5CB00i64;
		sub_1401A3130(14, 2, &v29, (unsigned int)v9, a4);
		return (unsigned int)v9;
	}
}
// 140AED820: using guessed type unsigned int dword_140AED820[120];

