#include "../winhttp.h"

//----- (0000000140907EA0) ----------------------------------------------------
__int64 __fastcall sub_140907EA0(__int64 a1, _WORD** a2, unsigned int a3, __int64 a4, _DWORD* a5)
{
	_DWORD* v5; // rbx
	__int16 v6; // r15
	int v7; // r8d
	unsigned int v8; // r12d
	unsigned int v11; // eax
	int v12; // edx
	int v13; // r9d
	int v14; // r15d
	_DWORD* v15; // rcx
	int v16; // edi
	_DWORD* v17; // r14
	unsigned int v18; // edi
	int v19; // esi
	unsigned int v20; // r10d
	unsigned int v21; // r9d
	__int64 v22; // rcx
	unsigned __int64 v23; // rdx
	_WORD* v24; // rbx
	_WORD* v25; // rbx
	int v26; // eax
	unsigned int v27; // ecx
	_WORD* v28; // rbx
	char v29; // dl
	unsigned __int64 v30; // rcx
	unsigned int v31; // edi
	__int64 v32; // r8
	unsigned __int64 v33; // rax
	int v36; // [rsp+80h] [rbp+18h]
	int v37; // [rsp+90h] [rbp+28h]

	v5 = a5;
	v6 = a3;
	v7 = (a3 >> 11) & 1;
	v8 = 0;
	v36 = v7;
	if (*a5)
	{
		v11 = sub_1409080E0(a1, a2, v6, a4, 0, *a5 - 1);
		v7 = v36;
		v8 = v11;
	}
	v12 = *a5;
	if (*a5 != -1)
	{
		v13 = v6 & 1;
		v37 = v13;
		v14 = v6 & 0x800;
		while (1)
		{
			v15 = v5 + 1;
			if (v5[1] == v12 + 1)
			{
				do
					v5 = v15++;
				while (*v15 == *v5 + 1);
			}
			v16 = v5[1];
			v17 = v5 + 1;
			if (v16 == -1)
			{
				v18 = -1;
				if (v7)
					v18 = 1114111;
			}
			else
			{
				v18 = v16 - 1;
			}
			v19 = 0;
			v20 = *v5 + 1;
			if (v13)
			{
				v21 = *v5 + 1;
				if (v20 <= v18)
				{
					do
					{
						if (v21 >= 0x100)
							break;
						v22 = v21++;
						++v19;
						v23 = *(unsigned __int8*)(v22 + *(_QWORD*)(a4 + 8));
						*(_BYTE*)((v23 >> 3) + a1) |= 1 << (v23 & 7);
					} while (v21 <= v18);
				}
			}
			if (v14 || v18 <= 0xFFFF)
			{
				if (v18 < 0x100)
				{
					v29 = __ROL1__(1, v20);
					if (v20 <= v18)
					{
						v30 = v20;
						v31 = v18 - v20 + 1;
						v32 = v31;
						v19 += v31;
						do
						{
							v33 = v30++;
							*(_BYTE*)((v33 >> 3) + a1) |= v29;
							v29 = __ROL1__(v29, 1);
							--v32;
						} while (v32);
					}
					goto LABEL_35;
				}
			}
			else
			{
				v18 = 0xFFFF;
			}
			v24 = *a2;
			if (!v14)
			{
				if (v20 >= v18)
				{
					if (v20 == v18)
					{
						*v24 = 1;
						v24[1] = v20;
						v24 += 2;
					}
				}
				else
				{
					v24 += 3;
					*(v24 - 3) = 2;
					*(v24 - 2) = v20;
					*(v24 - 1) = v18;
				}
				goto LABEL_34;
			}
			if (v20 < v18)
				break;
			if (v20 == v18)
			{
				*v24 = 1;
				v28 = v24 + 1;
				v27 = v20;
				goto LABEL_29;
			}
		LABEL_34:
			*a2 = v24;
		LABEL_35:
			v12 = *v17;
			v7 = v36;
			v13 = v37;
			v8 += v19;
			v5 = v17;
			if (*v17 == -1)
				return v8;
		}
		*v24 = 2;
		v25 = v24 + 1;
		v26 = sub_140919B80(v20, v25);
		v27 = v18;
		v28 = &v25[v26];
	LABEL_29:
		v24 = &v28[(unsigned int)sub_140919B80(v27, v28)];
		goto LABEL_34;
	}
	return v8;
}

