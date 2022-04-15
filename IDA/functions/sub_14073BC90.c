#include "../winhttp.h"

//----- (000000014073BC90) ----------------------------------------------------
__int64 __fastcall sub_14073BC90(_QWORD* a1)
{
	__int64 v2; // rax
	_DWORD* v3; // rdx
	int v4; // edx
	int v5; // ebx
	int* v6; // rcx
	__int64 v7; // r8
	__int64 v8; // rcx
	__int64 v9; // rax
	int v10; // eax
	int v11; // edx
	__int64 v12; // r10
	__int64 v13; // r11
	__int64 v14; // r8
	__int64 v15; // rcx
	__int64 v16; // rax
	unsigned int v17; // eax
	int v18; // ecx
	bool v19; // zf
	int* v20; // rax
	int v21; // r11d
	_DWORD* v22; // rax
	__int64 v24; // [rsp+38h] [rbp+10h]
	__int64 v25; // [rsp+38h] [rbp+10h]

	v2 = sub_140056AB0(a1, 0xFFFFFFFF);
	if (v2)
	{
		v4 = *(_DWORD*)v2;
		if (*(_DWORD*)v2 && v4 == *(_DWORD*)(qword_140C65B98 + 268))
		{
			v5 = 0;
		LABEL_46:
			v22 = (_DWORD*)a1[2];
			v22[2] = 1;
			*v22 = v5;
			goto LABEL_47;
		}
		v6 = *(int**)(v2 + 16);
		if (v6 || *(_QWORD*)(v2 + 24))
		{
			if (((v4 - 3) & 0xFFFFFFFC) != 0 || v4 == 5)
			{
				v5 = 0;
				if (v6)
					v21 = sub_1405BFC70(qword_140C65B98, v4, *v6);
				else
					v21 = 0;
				v19 = v21 == 0;
				goto LABEL_45;
			}
			v20 = *(int**)(v2 + 24);
			v5 = 0;
			if (v20)
			{
				v19 = (unsigned int)sub_1405BFB90(qword_140C65B98, v4, *v20) == 0;
				goto LABEL_45;
			}
		}
		else
		{
			v7 = *(_QWORD*)(qword_140C65B98 + 72);
			v8 = v7;
			v9 = *(_QWORD*)(v7 + 8);
			while (v9)
			{
				if (*(_DWORD*)(v9 + 32) < v4)
				{
					v9 = *(_QWORD*)(v9 + 24);
				}
				else
				{
					v8 = v9;
					v9 = *(_QWORD*)(v9 + 16);
				}
			}
			if (v8 == v7 || (v24 = v8, v4 < *(_DWORD*)(v8 + 32)))
				v24 = *(_QWORD*)(qword_140C65B98 + 72);
			v5 = 0;
			if (v24 == v7 || v24 == -40)
				LOBYTE(v10) = 0;
			else
				v10 = *(_DWORD*)(v24 + 64);
			if ((v10 & 1) == 0)
				goto LABEL_46;
			if (sub_1405BFB30(qword_140C65B98, v4))
			{
				v14 = *(_QWORD*)(v12 + 72);
				v15 = v14;
				v16 = *(_QWORD*)(v14 + 8);
				while (v16)
				{
					if (*(_DWORD*)(v16 + 32) < v11)
					{
						v16 = *(_QWORD*)(v16 + 24);
					}
					else
					{
						v15 = v16;
						v16 = *(_QWORD*)(v16 + 16);
					}
				}
				if (v15 == v14 || (v25 = v15, v11 < *(_DWORD*)(v15 + 32)))
					v25 = *(_QWORD*)(v12 + 72);
				v17 = v25 == v14 || v25 == -40 ? 0 : *(_DWORD*)(v25 + 64);
				v18 = 1;
				if (((v17 >> 8) & 1) == *(_DWORD*)(v13 + 4))
					goto LABEL_36;
			}
		}
		v18 = 0;
	LABEL_36:
		v19 = v18 == 0;
	LABEL_45:
		LOBYTE(v5) = !v19;
		goto LABEL_46;
	}
	v3 = (_DWORD*)a1[2];
	*v3 = 0;
	v3[2] = 1;
LABEL_47:
	a1[2] += 16i64;
	return 1i64;
}
// 14073BD6B: variable 'v12' is possibly undefined
// 14073BD83: variable 'v11' is possibly undefined
// 14073BDD0: variable 'v13' is possibly undefined
// 140C65B98: using guessed type __int64 qword_140C65B98;

