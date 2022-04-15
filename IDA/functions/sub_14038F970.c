#include "../winhttp.h"

//----- (000000014038F970) ----------------------------------------------------
void __fastcall sub_14038F970(_QWORD* a1)
{
	__int64 i; // r8
	__int64 v3; // rdx
	_QWORD* v4; // rcx
	__int64 v5; // rax
	__int64 j; // rdx
	_QWORD* v7; // r8
	_QWORD* v8; // rcx
	__int64 v9; // rax
	__int64 k; // rdx
	_QWORD* v11; // r8
	_QWORD* v12; // rcx
	__int64 v13; // rax
	__int64 m; // rdx
	_QWORD* v15; // r8
	_QWORD* v16; // rcx
	__int64 v17; // rax

	for (i = a1[6]; i; i = *(_QWORD*)(i + 24))
	{
		v3 = *(_QWORD*)(i + 8);
		if (v3 == *(_QWORD*)(v3 + 32))
		{
			if (*(_DWORD*)(v3 + 76))
			{
				if (!*(_QWORD*)(v3 + 1184))
				{
					v4 = (_QWORD*)(*(_QWORD*)(v3 + 16) + 5040i64);
					*(_QWORD*)(v3 + 1184) = v4;
					*(_QWORD*)(v3 + 1192) = *v4;
					*v4 = v3;
					v5 = *(_QWORD*)(v3 + 1192);
					if (v5)
						*(_QWORD*)(v5 + 1184) = v3 + 1192;
				}
			}
		}
	}
	for (j = a1[8]; j; j = *(_QWORD*)(j + 24))
	{
		v7 = *(_QWORD**)(j + 8);
		if (!v7[146] && !v7[130])
		{
			v8 = (_QWORD*)(v7[2] + 5264i64);
			v7[130] = v8;
			v7[131] = *v8;
			*v8 = v7;
			v9 = v7[131];
			if (v9)
				*(_QWORD*)(v9 + 1040) = v7 + 131;
		}
	}
	for (k = a1[9]; k; k = *(_QWORD*)(k + 24))
	{
		v11 = *(_QWORD**)(k + 8);
		if (!v11[111])
		{
			v12 = (_QWORD*)(v11[2] + 5352i64);
			v11[111] = v12;
			v11[112] = *v12;
			*v12 = v11;
			v13 = v11[112];
			if (v13)
				*(_QWORD*)(v13 + 888) = v11 + 112;
		}
	}
	for (m = a1[10]; m; m = *(_QWORD*)(m + 24))
	{
		v15 = *(_QWORD**)(m + 8);
		if (!v15[59])
		{
			v16 = (_QWORD*)(v15[2] + 5376i64);
			v15[59] = v16;
			v15[60] = *v16;
			*v16 = v15;
			v17 = v15[60];
			if (v17)
				*(_QWORD*)(v17 + 472) = v15 + 60;
		}
	}
}

