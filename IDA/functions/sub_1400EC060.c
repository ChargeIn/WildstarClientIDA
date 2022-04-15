#include "../winhttp.h"

//----- (00000001400EC060) ----------------------------------------------------
void __fastcall sub_1400EC060(__int64 a1, _BYTE* a2, int a3)
{
	_QWORD* v3; // r14
	__int64 v4; // rbp
	_QWORD* v6; // r11
	_QWORD* v8; // r9
	_QWORD* v9; // r10
	int v10; // esi
	_BYTE* v11; // rbx
	int v12; // r8d
	int v13; // ecx
	_BYTE* v14; // rdx
	__int64 v15; // rbx
	int v16; // eax
	int v17; // esi
	char* v18; // r8
	int v19; // eax
	int v20; // ecx
	int v21; // edx
	_BYTE* v22; // r10
	int v23; // eax
	__int64 v24; // rbx
	__int64 v25; // r10
	int v26; // ecx
	_QWORD* v27; // rdx
	__int64 v28; // rcx
	__int64 v29; // r10
	__int64 v30; // r11
	_QWORD* v31; // rcx
	__int64 v32; // rax
	_DWORD* v33; // r8
	__int64 v34; // rdx
	int v35; // ecx
	int v36; // ecx
	BOOL v37; // ecx
	__int64 v38; // rax
	_QWORD* i; // rax
	__int64 j; // rax
	double v41; // [rsp+20h] [rbp+8h]
	double v42; // [rsp+20h] [rbp+8h]

	v3 = *(_QWORD**)(a1 + 3296);
	v4 = *(_QWORD*)(a1 + 400);
	v6 = (_QWORD*)v3[1];
	v8 = v3;
	v9 = v6;
	if (v6)
	{
		v10 = (char)*a2;
		while (1)
		{
			v11 = (_BYTE*)v9[4];
			LOBYTE(v12) = *v11;
			v13 = (char)*v11 - v10;
			if (v13)
			{
			LABEL_7:
				if (v13 < 0)
				{
					v9 = (_QWORD*)v9[3];
					goto LABEL_10;
				}
			}
			else
			{
				v14 = a2;
				v15 = v11 - a2;
				while ((_BYTE)v12)
				{
					v12 = (char)v14[v15 + 1];
					v16 = (char)*++v14;
					v13 = v12 - v16;
					if (v12 != v16)
						goto LABEL_7;
				}
			}
			v8 = v9;
			v9 = (_QWORD*)v9[2];
		LABEL_10:
			if (!v9)
			{
				v17 = (char)*a2;
				while (1)
				{
					v18 = (char*)v6[4];
					v19 = *v18;
					v20 = v17 - v19;
					if (v17 == v19)
						break;
				LABEL_16:
					if (v20 >= 0)
						goto LABEL_18;
					v3 = v6;
					v6 = (_QWORD*)v6[2];
				LABEL_19:
					if (!v6)
						goto LABEL_20;
				}
				LOBYTE(v21) = *a2;
				v22 = a2;
				while ((_BYTE)v21)
				{
					v21 = (char)v22[1];
					v23 = v18[1];
					++v22;
					++v18;
					v20 = v21 - v23;
					if (v21 != v23)
						goto LABEL_16;
				}
			LABEL_18:
				v6 = (_QWORD*)v6[3];
				goto LABEL_19;
			}
		}
	}
LABEL_20:
	if (v8 != v3)
	{
		while (1)
		{
			v24 = v8[5];
			v25 = *(_QWORD*)(*(_QWORD*)(v4 + 32) + 160i64);
			v26 = *(_DWORD*)(v24 + 112);
			if ((unsigned int)(v26 - 1) >= *(_DWORD*)(v25 + 56))
			{
				if ((double)v26 == 0.0)
				{
					v27 = *(_QWORD**)(v25 + 32);
				}
				else
				{
					v41 = (double)v26;
					v27 = (_QWORD*)(*(_QWORD*)(v25 + 32)
						+ 40
						* ((unsigned int)(LODWORD(v41) + HIDWORD(v41)) % (((1i64 << *(_BYTE*)(v25 + 11)) - 1) | 1)));
				}
				while (*((_DWORD*)v27 + 6) != 3 || (double)v26 != *((double*)v27 + 2))
				{
					v27 = (_QWORD*)v27[4];
					if (!v27)
					{
						v27 = &unk_140A12138;
						break;
					}
				}
			}
			else
			{
				v27 = (_QWORD*)(*(_QWORD*)(v25 + 24) + 16i64 * (v26 - 1));
			}
			v28 = *(_QWORD*)(v4 + 16);
			*(_QWORD*)v28 = *v27;
			*(_DWORD*)(v28 + 8) = *((_DWORD*)v27 + 2);
			*(_QWORD*)(v4 + 16) += 16i64;
			v29 = *(_QWORD*)(*(_QWORD*)(v4 + 32) + 160i64);
			v30 = *(_QWORD*)(v4 + 16);
			if ((unsigned int)(a3 - 1) >= *(_DWORD*)(v29 + 56))
			{
				if ((double)a3 == 0.0)
				{
					v31 = *(_QWORD**)(v29 + 32);
				}
				else
				{
					v42 = (double)a3;
					v31 = (_QWORD*)(*(_QWORD*)(v29 + 32)
						+ 40
						* ((unsigned int)(LODWORD(v42) + HIDWORD(v42)) % (((1i64 << *(_BYTE*)(v29 + 11)) - 1) | 1)));
				}
				while (*((_DWORD*)v31 + 6) != 3 || (double)a3 != *((double*)v31 + 2))
				{
					v31 = (_QWORD*)v31[4];
					if (!v31)
					{
						v31 = &unk_140A12138;
						break;
					}
				}
			}
			else
			{
				v31 = (_QWORD*)(*(_QWORD*)(v29 + 24) + 16i64 * (a3 - 1));
			}
			*(_QWORD*)v30 = *v31;
			*(_DWORD*)(v30 + 8) = *((_DWORD*)v31 + 2);
			*(_QWORD*)(v4 + 16) += 16i64;
			v32 = *(_QWORD*)(v4 + 16);
			v33 = (_DWORD*)(v32 - 16);
			v34 = v32 - 32;
			if ((_UNKNOWN*)(v32 - 16) == &unk_140A12138
				|| (_UNKNOWN*)v34 == &unk_140A12138
				|| (v35 = v33[2], v35 != *(_DWORD*)(v34 + 8)))
			{
			LABEL_49:
				v37 = 0;
				goto LABEL_50;
			}
			if (!v35)
				goto LABEL_47;
			v36 = v35 - 1;
			if (!v36)
			{
				v37 = *v33 == *(_DWORD*)v34;
				goto LABEL_50;
			}
			if (v36 == 2)
				break;
			v37 = *(_QWORD*)v33 == *(_QWORD*)v34;
		LABEL_50:
			*(_QWORD*)(v4 + 16) = v34;
			if (v37)
				*(_BYTE*)v24 = 0;
			v38 = v8[3];
			if (v38)
			{
				v8 = (_QWORD*)v8[3];
				for (i = *(_QWORD**)(v38 + 16); i; i = (_QWORD*)i[2])
					v8 = i;
			}
			else
			{
				for (j = v8[1]; v8 == *(_QWORD**)(j + 24); j = *(_QWORD*)(j + 8))
					v8 = (_QWORD*)j;
				if (v8[3] != j)
					v8 = (_QWORD*)j;
			}
			if (v8 == v3)
				return;
		}
		if (*(double*)v34 != *(double*)v33)
			goto LABEL_49;
	LABEL_47:
		v37 = 1;
		goto LABEL_50;
	}
}
// 1400EC0E7: conditional instruction was optimized away because r11.8!=0

