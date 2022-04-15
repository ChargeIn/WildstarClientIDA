#include "../winhttp.h"

//----- (00000001404B7D40) ----------------------------------------------------
int* __fastcall sub_1404B7D40(__int64 a1, int* a2, unsigned int a3, __m128* a4)
{
	__int64 v4; // r15
	__int64 v8; // rax
	__int64 v9; // rax
	int v10; // edi
	__int64 v11; // r14
	int v12; // edi
	int v13; // edi
	int v14; // edi
	int* v15; // rax
	int v17; // [rsp+20h] [rbp-48h] BYREF
	int v18; // [rsp+24h] [rbp-44h] BYREF
	int v19; // [rsp+28h] [rbp-40h] BYREF

	v4 = qword_140C659F0;
	v8 = sub_1405B1510(&qword_140C7DFB0);
	if (v8)
		sub_1405AAEB0(v8);
	v9 = sub_140203DA0(a3);
	if (v9)
		v10 = *(_DWORD*)(v9 + 8);
	else
		v10 = 0;
	*a2 = 0;
	v11 = sub_1405B1510(&qword_140C7DFB0);
	if (v11)
	{
		v12 = v10 - 12;
		if (!v12)
			goto LABEL_30;
		v13 = v12 - 10;
		if (!v13)
		{
			if (!(unsigned int)sub_1407E6AF0((unsigned __int64*)a4, (__int64)&ymmword_140C78390, 0x40ui64))
				a4 = (__m128*)(v4 + 176);
			v17 = 0;
			if (a3)
				v15 = sub_1405AAB20(v11, &v17, a3, a4);
			else
				v15 = &v17;
			goto LABEL_26;
		}
		v14 = v13 - 31;
		if (!v14)
		{
			if (!(unsigned int)sub_1407E6AF0((unsigned __int64*)a4, (__int64)&ymmword_140C78390, 0x40ui64))
				a4 = (__m128*)(v4 + 176);
			v18 = 0;
			if (a3)
				v15 = sub_1405AB190(v11, &v18, a3, a4);
			else
				v15 = &v18;
			goto LABEL_26;
		}
		if (v14 == 1)
		{
		LABEL_30:
			if (!(unsigned int)sub_1407E6AF0((unsigned __int64*)a4, (__int64)&ymmword_140C78390, 0x40ui64))
				a4 = (__m128*)(v4 + 176);
			v19 = 0;
			if (a3)
				v15 = sub_1405AAFC0(v11, &v19, a3, a4);
			else
				v15 = &v19;
		LABEL_26:
			*a2 = *v15;
		}
	}
	return a2;
}
// 140C659F0: using guessed type __int64 qword_140C659F0;
// 140C78390: using guessed type __m256 ymmword_140C78390;
// 140C7DFB0: using guessed type __int64 qword_140C7DFB0;

