#include "../winhttp.h"

//----- (0000000140907CA0) ----------------------------------------------------
__int64 __fastcall sub_140907CA0(__int64 a1, _QWORD* a2, __int16 a3, __int64 a4, unsigned int* a5, int a6)
{
	unsigned int* v6; // r15
	unsigned int v7; // r12d
	unsigned int v9; // r10d
	_WORD** v10; // rbx
	__int64 v12; // rsi
	_DWORD* v13; // rcx
	unsigned int i; // eax
	unsigned int v15; // edi
	int v16; // ebp
	unsigned int v17; // r9d
	__int64 v18; // rcx
	unsigned __int64 v19; // rdx
	_WORD* v20; // rbx
	_WORD* v21; // rbx
	int v22; // eax
	unsigned int v23; // ecx
	_WORD* v24; // rbx
	char v25; // dl
	unsigned __int64 v26; // rcx
	unsigned int v27; // edi
	__int64 v28; // r8
	unsigned __int64 v29; // rax
	unsigned int* v30; // r15
	__int16 v33; // [rsp+70h] [rbp+18h]

	v33 = a3;
	v6 = a5;
	v7 = 0;
	v9 = *a5;
	v10 = (_WORD**)a2;
	if (*a5 != -1)
	{
		while (1)
		{
			v12 = 0i64;
			if (v9 != a6)
				break;
		LABEL_30:
			v30 = &v6[v12];
			v9 = v30[1];
			v6 = v30 + 1;
			if (v9 == -1)
				return v7;
		}
		v13 = v6 + 1;
		for (i = v9 + 1; *v13 == i; ++v12)
		{
			++v13;
			++i;
		}
		v15 = v6[v12];
		v16 = 0;
		if ((a3 & 1) != 0)
		{
			v17 = v9;
			if (v9 <= v15)
			{
				do
				{
					if (v17 >= 0x100)
						break;
					v18 = v17++;
					++v16;
					v19 = *(unsigned __int8*)(v18 + *(_QWORD*)(a4 + 8));
					*(_BYTE*)((v19 >> 3) + a1) |= 1 << (v19 & 7);
				} while (v17 <= v15);
				a3 = v33;
			}
		}
		if ((a3 & 0x800) != 0 || v15 <= 0xFFFF)
		{
			if (v15 < 0x100)
			{
				v25 = __ROL1__(1, v9);
				if (v9 <= v15)
				{
					v26 = v9;
					v27 = v15 - v9 + 1;
					v28 = v27;
					v16 += v27;
					do
					{
						v29 = v26++;
						*(_BYTE*)((v29 >> 3) + a1) |= v25;
						v25 = __ROL1__(v25, 1);
						--v28;
					} while (v28);
				}
				goto LABEL_29;
			}
		}
		else
		{
			v15 = 0xFFFF;
		}
		v20 = *v10;
		if ((a3 & 0x800) == 0)
		{
			if (v9 >= v15)
			{
				if (v9 == v15)
				{
					*v20 = 1;
					v20[1] = v9;
					v20 += 2;
				}
			}
			else
			{
				*v20 = 2;
				v20[1] = v9;
				v20[2] = v15;
				v20 += 3;
			}
			goto LABEL_28;
		}
		if (v9 >= v15)
		{
			if (v9 != v15)
			{
			LABEL_28:
				*a2 = v20;
				v10 = (_WORD**)a2;
			LABEL_29:
				a3 = v33;
				v7 += v16;
				goto LABEL_30;
			}
			*v20 = 1;
			v24 = v20 + 1;
			v23 = v9;
		}
		else
		{
			*v20 = 2;
			v21 = v20 + 1;
			v22 = sub_140919B80(v9, v21);
			v23 = v15;
			v24 = &v21[v22];
		}
		v20 = &v24[(unsigned int)sub_140919B80(v23, v24)];
		goto LABEL_28;
	}
	return v7;
}

