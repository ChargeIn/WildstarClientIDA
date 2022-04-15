#include "../winhttp.h"

//----- (0000000140274D70) ----------------------------------------------------
int __fastcall sub_140274D70(__int64 a1)
{
	int result; // eax
	_QWORD* i; // rbx
	_QWORD* j; // rbx
	_QWORD* v5; // rbx
	_QWORD* k; // rbx
	_QWORD* v7; // rbx
	_QWORD* m; // rbx
	_QWORD* v9; // rbx
	_QWORD* n; // rbx
	_QWORD* ii; // rbx
	_QWORD* v12; // rbx
	_QWORD* jj; // rbx
	_QWORD* kk; // rbx
	__int64 v15; // r9
	__int64 v16; // r9
	__int64 v17; // r9

	result = sub_1401981B0((__int64**)(a1 + 16));
	for (i = *(_QWORD**)(a1 + 6152); i; i = (_QWORD*)i[19])
	{
		(*(__int64(__fastcall**)(_QWORD*))(*i + 40i64))(i);
		result = sub_1400035B0();
	}
	for (j = *(_QWORD**)(a1 + 7176); j; j = (_QWORD*)j[15])
	{
		(*(void(__fastcall**)(_QWORD*))(*j + 24i64))(j);
		result = sub_1400035B0();
	}
	v5 = *(_QWORD**)(a1 + 7184);
	if (v5)
	{
		do
		{
			(*(void(__fastcall**)(_QWORD*))(*v5 + 24i64))(v5);
			result = sub_1400035B0();
			v5 = (_QWORD*)v5[8];
		} while (v5);
	}
	else if (!*(_QWORD*)(a1 + 7192))
	{
		goto LABEL_11;
	}
	for (k = *(_QWORD**)(a1 + 7192); k; k = (_QWORD*)k[7])
	{
		(*(void(__fastcall**)(_QWORD*))(*k + 24i64))(k);
		result = sub_1400035B0();
	}
LABEL_11:
	v7 = *(_QWORD**)(a1 + 7200);
	if (v7)
	{
		do
		{
			(*(void(__fastcall**)(_QWORD*))(*v7 + 24i64))(v7);
			result = sub_1400035B0();
			v7 = (_QWORD*)v7[8];
		} while (v7);
	}
	else if (!*(_QWORD*)(a1 + 7208))
	{
		goto LABEL_17;
	}
	for (m = *(_QWORD**)(a1 + 7208); m; m = (_QWORD*)m[8])
	{
		(*(void(__fastcall**)(_QWORD*))(*m + 24i64))(m);
		result = sub_1400035B0();
	}
LABEL_17:
	v9 = *(_QWORD**)(a1 + 7216);
	if (v9)
	{
		do
		{
			(*(__int64(__fastcall**)(_QWORD*))(*v9 + 24i64))(v9);
			result = sub_1400035B0();
			v9 = (_QWORD*)v9[31];
		} while (v9);
	}
	else if (!*(_QWORD*)(a1 + 7224) && !*(_QWORD*)(a1 + 7232))
	{
		goto LABEL_26;
	}
	for (n = *(_QWORD**)(a1 + 7224); n; n = (_QWORD*)n[29])
	{
		(*(__int64(__fastcall**)(_QWORD*))(*n + 24i64))(n);
		result = sub_1400035B0();
	}
	for (ii = *(_QWORD**)(a1 + 7232); ii; ii = (_QWORD*)ii[46])
	{
		(*(__int64(__fastcall**)(_QWORD*))(*ii + 24i64))(ii);
		result = sub_1400035B0();
	}
LABEL_26:
	v12 = *(_QWORD**)(a1 + 7240);
	if (v12)
	{
		do
		{
			(*(void(__fastcall**)(_QWORD*))(*v12 + 24i64))(v12);
			result = sub_1400035B0();
			v12 = (_QWORD*)v12[19];
		} while (v12);
	}
	else if (!*(_QWORD*)(a1 + 7248))
	{
		goto LABEL_32;
	}
	for (jj = *(_QWORD**)(a1 + 7248); jj; jj = (_QWORD*)jj[19])
	{
		(*(void(__fastcall**)(_QWORD*))(*jj + 24i64))(jj);
		result = sub_1400035B0();
	}
LABEL_32:
	for (kk = *(_QWORD**)(a1 + 7256); kk; kk = (_QWORD*)kk[16])
	{
		(*(__int64(__fastcall**)(_QWORD*))(*kk + 24i64))(kk);
		result = sub_1400035B0();
	}
	if (*(_QWORD*)(a1 + 7264))
	{
		do
			result = sub_1400035B0();
		while (*(_QWORD*)(v15 + 56));
	}
	if (*(_QWORD*)(a1 + 7272))
	{
		do
			result = sub_1400035B0();
		while (*(_QWORD*)(v16 + 32));
	}
	if (*(_QWORD*)(a1 + 7280))
	{
		do
			result = sub_1400035B0();
		while (*(_QWORD*)(v17 + 248));
	}
	return result;
}
// 140274E34: conditional instruction was optimized away because rbx.8==0
// 140274ED7: conditional instruction was optimized away because rbx.8==0
// 140274FB1: conditional instruction was optimized away because rbx.8==0
// 140275245: conditional instruction was optimized away because rbx.8==0
// 14027532F: variable 'v15' is possibly undefined
// 14027535F: variable 'v16' is possibly undefined
// 14027538F: variable 'v17' is possibly undefined

