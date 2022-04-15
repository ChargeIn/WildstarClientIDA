//----- (0000000140281C30) ----------------------------------------------------
int __fastcall sub_140281C30(__int64 a1)
{
	int result; // eax
	_QWORD* i; // rbx
	_QWORD* j; // rbx
	_QWORD* k; // rbx
	_QWORD* m; // rbx
	_QWORD* v7; // rbx
	_QWORD* n; // rbx
	_QWORD* ii; // rbx
	_QWORD* v10; // rbx
	_QWORD* jj; // rbx
	_QWORD* kk; // rbx
	__int64 v13; // r9
	__int64 v14; // r9
	__int64 v15; // r9

	result = sub_1401981B0((__int64**)(a1 + 16));
	for (i = *(_QWORD**)(a1 + 6152); i; i = (_QWORD*)i[19])
	{
		(*(__int64(__fastcall**)(_QWORD*))(*i + 40i64))(i);
		result = sub_1400035B0();
	}
	for (j = *(_QWORD**)(a1 + 6832); j; j = (_QWORD*)j[21])
	{
		(*(void(__fastcall**)(_QWORD*))(*j + 24i64))(j);
		result = sub_1400035B0();
	}
	for (k = *(_QWORD**)(a1 + 6840); k; k = (_QWORD*)k[10])
	{
		(*(void(__fastcall**)(_QWORD*))(*k + 24i64))(k);
		result = sub_1400035B0();
	}
	for (m = *(_QWORD**)(a1 + 6848); m; m = (_QWORD*)m[11])
	{
		(*(void(__fastcall**)(_QWORD*))(*m + 24i64))(m);
		result = sub_1400035B0();
	}
	v7 = *(_QWORD**)(a1 + 6856);
	if (v7)
	{
		do
		{
			(*(__int64(__fastcall**)(_QWORD*))(*v7 + 24i64))(v7);
			result = sub_1400035B0();
			v7 = (_QWORD*)v7[37];
		} while (v7);
	}
	else if (!*(_QWORD*)(a1 + 6864) && !*(_QWORD*)(a1 + 6872))
	{
		goto LABEL_18;
	}
	for (n = *(_QWORD**)(a1 + 6864); n; n = (_QWORD*)n[36])
	{
		(*(__int64(__fastcall**)(_QWORD*))(*n + 24i64))(n);
		result = sub_1400035B0();
	}
	for (ii = *(_QWORD**)(a1 + 6872); ii; ii = (_QWORD*)ii[72])
	{
		(*(__int64(__fastcall**)(_QWORD*))(*ii + 24i64))(ii);
		result = sub_1400035B0();
	}
LABEL_18:
	v10 = *(_QWORD**)(a1 + 6880);
	if (v10)
	{
		do
		{
			(*(void(__fastcall**)(_QWORD*))(*v10 + 24i64))(v10);
			result = sub_1400035B0();
			v10 = (_QWORD*)v10[20];
		} while (v10);
	}
	else if (!*(_QWORD*)(a1 + 6888))
	{
		goto LABEL_24;
	}
	for (jj = *(_QWORD**)(a1 + 6888); jj; jj = (_QWORD*)jj[19])
	{
		(*(void(__fastcall**)(_QWORD*))(*jj + 24i64))(jj);
		result = sub_1400035B0();
	}
LABEL_24:
	for (kk = *(_QWORD**)(a1 + 6896); kk; kk = (_QWORD*)kk[18])
	{
		(*(__int64(__fastcall**)(_QWORD*))(*kk + 24i64))(kk);
		result = sub_1400035B0();
	}
	if (*(_QWORD*)(a1 + 6904))
	{
		do
			result = sub_1400035B0();
		while (*(_QWORD*)(v13 + 56));
	}
	if (*(_QWORD*)(a1 + 6912))
	{
		do
			result = sub_1400035B0();
		while (*(_QWORD*)(v14 + 48));
	}
	if (*(_QWORD*)(a1 + 6920))
	{
		do
			result = sub_1400035B0();
		while (*(_QWORD*)(v15 + 248));
	}
	return result;
}
// 140281DA1: conditional instruction was optimized away because rbx.8==0
// 140282035: conditional instruction was optimized away because rbx.8==0
// 14028211F: variable 'v13' is possibly undefined
// 14028214F: variable 'v14' is possibly undefined
// 14028217F: variable 'v15' is possibly undefined

