#include "../winhttp.h"

//----- (000000014002B110) ----------------------------------------------------
__int64 __fastcall sub_14002B110(_QWORD* a1)
{
	__int64 v2; // rbp
	__int64 v3; // rsi
	__int64 v4; // rdi
	__int64 v5; // rbx
	int* v6; // rsi
	int* v7; // rbx
	int* v8; // rcx
	int v9; // eax
	__int64 v10; // rcx
	int v11; // eax
	__int16* v12; // rax
	wchar_t* v13; // r8
	wchar_t* v14; // rdx
	__int64 v15; // rcx
	_WORD* v16; // rax
	__int64 v18; // [rsp+20h] [rbp-28h] BYREF
	char* v19; // [rsp+28h] [rbp-20h]
	int* v20; // [rsp+30h] [rbp-18h]

	v2 = *(_QWORD*)(qword_140C63608 + 112);
	(*(void(__fastcall**)(_QWORD, void*))(**(_QWORD**)(qword_140C63608 + 104) + 80i64))(
		*(_QWORD*)(qword_140C63608 + 104),
		&unk_1409D0CEC);
	v3 = *(_QWORD*)(qword_140C63608 + 88);
	v4 = sub_1400D66A0(a1, 1u);
	v5 = sub_1400D66A0(a1, 2u);
	sub_1400F2540(v3 + 384, &v18, 3);
	v6 = (int*)v19;
	if (v5 != v4)
		goto LABEL_15;
	sub_14018F2D0(&v18, v19);
	v7 = (int*)v19;
	sub_1401163B0(v2, (int*)L"White", (int*)L"Courier", (int*)v19);
	if (v7 != v20)
	{
		v9 = sub_140198800(v8, v7) - 1;
		if (v9)
		{
			v11 = v9 - 1;
			if (v11)
			{
				if (v11 != 1)
				{
				LABEL_10:
					sub_1401163B0(v2, (int*)L"White", (int*)L"Courier", dword_1409D0D0C);
					goto LABEL_11;
				}
				v12 = sub_14034BDD0(v10, 88);
				v13 = L"Courier";
				v14 = L"Red";
			}
			else
			{
				v12 = sub_14034BDD0(v10, 22);
				v13 = L"Courier";
				v14 = L"Yellow";
			}
		}
		else
		{
			v12 = sub_14034BDD0(v10, 87);
			v13 = L"Courier";
			v14 = L"Red";
		}
		sub_1401163B0(v2, (int*)v14, (int*)v13, (int*)v12);
		goto LABEL_10;
	}
LABEL_11:
	v15 = qword_140C63608;
	v16 = *(_WORD**)(qword_140C63608 + 128);
	if (v16 != *(_WORD**)(qword_140C63608 + 136))
	{
		*v16 = 0;
		*(_QWORD*)(v15 + 136) = *(_QWORD*)(v15 + 128);
	}
	if (v7)
		sub_14018B900((__int64)v7, 0);
LABEL_15:
	if (v6)
		sub_14018B900((__int64)v6, 0);
	return 0i64;
}
// 14002B1CC: variable 'v8' is possibly undefined
// 14002B1E0: variable 'v10' is possibly undefined
// 1409D0D0C: using guessed type int dword_1409D0D0C[6];
// 1409EE7F0: using guessed type wchar_t aWhite_1[6];
// 1409EE800: using guessed type wchar_t aCourier_2[8];
// 1409EE810: using guessed type wchar_t aYellow[7];
// 1409EE820: using guessed type wchar_t aCourier_4[8];
// 1409EE830: using guessed type wchar_t aRed_0[4];
// 1409EE838: using guessed type wchar_t aCourier_5[8];
// 1409EE848: using guessed type wchar_t aRed[4];
// 1409EE850: using guessed type wchar_t aCourier_3[8];
// 1409EE860: using guessed type wchar_t aCourier_6[8];
// 1409EE880: using guessed type wchar_t aWhite_2[6];
// 140C63608: using guessed type __int64 qword_140C63608;

