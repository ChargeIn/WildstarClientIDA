#include "../winhttp.h"

//----- (000000014010E7F0) ----------------------------------------------------
void __fastcall sub_14010E7F0(__int64 a1, __int64 a2)
{
	_QWORD* v2; // rax
	_QWORD* v3; // rbx
	__int64 v5; // rsi
	__int64 v6; // rcx
	_QWORD* v7; // rbx
	__int64 v8; // rcx
	_QWORD* v9; // rbx
	__int64 v10; // rcx
	__int64 v11; // rcx
	unsigned __int64 v12; // rbx
	__int64 v13; // rsi
	__int64 v14; // rcx
	__int64 v15; // rcx
	__int64 v16; // rcx
	_QWORD** v17; // rax
	_QWORD* v18; // rbx
	__int64 v19; // rcx
	__int64 v20; // rdx
	__int64 v21; // rcx
	__int64 v22; // rcx
	__int64 v23; // rcx
	__int64 v24; // rcx

	*(_QWORD*)a1 = off_140B56CA0;
	v2 = *(_QWORD**)(a1 + 1224);
	v3 = (_QWORD*)*v2;
	if ((_QWORD*)*v2 != v2)
	{
		do
		{
			v5 = v3[2];
			if (v5)
			{
				v6 = *(_QWORD*)(v5 + 32);
				*(_QWORD*)(v5 + 16) = off_140B56A08;
				if (v6)
					sub_1400579E0(v6, a2, *(_DWORD*)(v5 + 24));
				sub_14018B900(v5, 0);
			}
			v3 = (_QWORD*)*v3;
		} while (v3 != *(_QWORD**)(a1 + 1224));
	}
	v7 = *(_QWORD**)(a1 + 1152);
	if (v7)
	{
		if (*v7)
		{
			(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v7 + 8i64))(*v7);
			*v7 = 0i64;
		}
		v8 = v7[3];
		if (v8)
			sub_14018B900(v8, 0);
		sub_14018B900((__int64)v7, 0);
	}
	v9 = *(_QWORD**)(a1 + 1144);
	if (v9)
	{
		if (*v9)
		{
			(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v9 + 8i64))(*v9);
			*v9 = 0i64;
		}
		v10 = v9[3];
		if (v10)
			sub_14018B900(v10, 0);
		sub_14018B900((__int64)v9, 0);
	}
	v11 = *(_QWORD*)(a1 + 1272);
	if (v11)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v11 + 8i64))(v11);
		*(_QWORD*)(a1 + 1272) = 0i64;
	}
	v12 = 0i64;
	if (*(_QWORD*)(a1 + 1296))
	{
		v13 = 0i64;
		do
		{
			v14 = *(_QWORD*)(v13 + *(_QWORD*)(a1 + 1288) + 8);
			if (v14)
				sub_14018B900(v14, 0);
			++v12;
			v13 += 32i64;
		} while (v12 < *(_QWORD*)(a1 + 1296));
	}
	v15 = *(_QWORD*)(a1 + 1288);
	if (v15)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v15 - 16) + 8i64))(v15 - 16);
	sub_1401429A0(qword_140C63678, *(_DWORD*)(a1 + 1260));
	v16 = *(_QWORD*)(a1 + 1240);
	if (v16)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v16 - 16) + 8i64))(v16 - 16);
	v17 = *(_QWORD***)(a1 + 1224);
	v18 = *v17;
	if (*v17 != v17)
	{
		do
		{
			v19 = (__int64)v18;
			v18 = (_QWORD*)*v18;
			sub_14018B900(v19, 0);
		} while (v18 != *(_QWORD**)(a1 + 1224));
	}
	**(_QWORD**)(a1 + 1224) = *(_QWORD*)(a1 + 1224);
	*(_QWORD*)(*(_QWORD*)(a1 + 1224) + 8i64) = *(_QWORD*)(a1 + 1224);
	sub_14018B900(*(_QWORD*)(a1 + 1224), 0);
	sub_1401429A0(qword_140C63678, *(_DWORD*)(a1 + 1172));
	sub_1401429A0(qword_140C63678, *(_DWORD*)(a1 + 1168));
	sub_1401429A0(qword_140C63678, *(_DWORD*)(a1 + 1164));
	sub_1401429A0(qword_140C63678, *(_DWORD*)(a1 + 1160));
	v21 = *(_QWORD*)(a1 + 1096);
	if (v21)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v21 + 8i64))(v21);
		*(_QWORD*)(a1 + 1096) = 0i64;
	}
	v22 = *(_QWORD*)(a1 + 1120);
	if (v22)
		sub_14018B900(v22, 0);
	v23 = *(_QWORD*)(a1 + 1088);
	if (v23)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v23 + 8i64))(v23);
	v24 = *(_QWORD*)(a1 + 1080);
	if (v24)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v24 + 8i64))(v24);
	sub_1400C6030(a1, v20);
}
// 14010E84A: variable 'a2' is possibly undefined
// 14010EA63: variable 'v20' is possibly undefined
// 140B56A08: using guessed type __int64 (__fastcall *off_140B56A08[3])();
// 140B56CA0: using guessed type __int64 (__fastcall *off_140B56CA0[25])();
// 140C63678: using guessed type __int64 qword_140C63678;

