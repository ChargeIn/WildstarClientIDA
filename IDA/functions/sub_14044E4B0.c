#include "../winhttp.h"

//----- (000000014044E4B0) ----------------------------------------------------
__int64 __fastcall sub_14044E4B0(__int64 a1)
{
	__int64 v2; // rcx
	int v4; // edx
	unsigned int v5; // r8d
	int v6; // eax
	unsigned int v7; // edi
	unsigned __int64 v8; // rdx
	int* v9; // r14
	__int64 v10; // rax
	int* v11; // r15
	__int64 v12; // rbx
	unsigned __int64 v13; // rbx
	int* v14; // rax
	int* v15; // rbx
	int v16; // r14d
	__int64 v17; // rax
	void(__fastcall * **v18)(_QWORD); // r8
	int v19; // [rsp+30h] [rbp-40h] BYREF
	int v20; // [rsp+34h] [rbp-3Ch]
	__int64 v21; // [rsp+38h] [rbp-38h]
	void* v22; // [rsp+40h] [rbp-30h]
	__int64 v23; // [rsp+48h] [rbp-28h]
	int v24; // [rsp+50h] [rbp-20h]
	void(__fastcall * **v25)(_QWORD); // [rsp+90h] [rbp+20h] BYREF
	int* v26; // [rsp+98h] [rbp+28h] BYREF

	v2 = *(_QWORD*)(a1 + 408);
	if (v2 && (*(int(__fastcall**)(__int64))(*(_QWORD*)v2 + 24i64))(v2) < 4)
		return 0i64;
	v4 = *(_DWORD*)(a1 + 432);
	v5 = *(_DWORD*)(a1 + 448);
	if (dword_140C636A8 - v4 >= v5)
	{
		if ((unsigned int)(dword_140C636A8 - v4) < *(_DWORD*)(a1 + 440))
		{
			*(_DWORD*)(a1 + 432) = v5 + v4;
		}
		else
		{
			*(_DWORD*)(a1 + 432) = dword_140C636A8;
			*(_DWORD*)(a1 + 436) = 1;
		}
	}
	else
	{
		v6 = *(_DWORD*)(a1 + 436);
		if (v6 == *(_DWORD*)(a1 + 444))
			return 2147500037i64;
		*(_DWORD*)(a1 + 436) = v6 + 1;
	}
	v7 = 0;
	v25 = 0i64;
	v8 = *(_QWORD*)(*(_QWORD*)(qword_140C635F0 + 5864) + 88i64);
	if (v8)
	{
		if (v8 <= qword_140C3FE70)
			v9 = (int*)(v8 + qword_140C3FE68);
		else
			v9 = 0i64;
	}
	else
	{
		v9 = 0i64;
	}
	v10 = 0i64;
	v11 = 0i64;
	if (*(_WORD*)v9)
	{
		do
			++v10;
		while (*((_WORD*)v9 + v10));
	}
	v12 = (2 * v10) >> 1;
	if ((unsigned __int64)(v12 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
		v11 = sub_14018B280(2 * (v12 + 1), 0);
	v13 = 2 * v12;
	sub_1407DB590(v11, v9, v13);
	v14 = (int*)((char*)v11 + v13);
	if ((int*)((char*)v11 + v13))
		*(_WORD*)v14 = 0;
	if (v11 != v14)
	{
		sub_14018D540(&v26, (__int64)L"%s%s", v11, L"data.json");
		v15 = v26;
		v16 = sub_1407B01F0(v26, 0, (int**)(a1 + 424), (__int64)&v25);
		if (v16 >= 0)
		{
			v22 = sub_14044E760;
			v19 = 12;
			v20 = 2;
			v21 = a1;
			v23 = 0i64;
			v24 = 1;
			v16 = sub_14019DCA0((__int64)&v19, 0, v25, (int**)(a1 + 408));
			if (v16 >= 0)
			{
				v18 = *(void(__fastcall****)(_QWORD))(a1 + 408);
				v22 = sub_14044F710;
				v19 = 2;
				v20 = 2;
				v21 = a1;
				v23 = 0i64;
				v24 = 1;
				v16 = sub_14019DCA0((__int64)&v19, 0, v18, (int**)(a1 + 416));
				if (v16 >= 0)
					goto LABEL_30;
				goto LABEL_29;
			}
			v17 = 0x141DFD4A0i64;
		}
		else
		{
			v17 = 0x141DFD500i64;
		}
		v26 = (int*)v17;
		sub_1401A3130(109, 2, &v26, (unsigned int)v16, v15);
	LABEL_29:
		v7 = v16;
	LABEL_30:
		if (v15)
			(*(void(__fastcall**)(int*))(*((_QWORD*)v15 - 2) + 8i64))(v15 - 4);
	}
	if (v11)
		sub_14018B900((__int64)v11, 0);
	if (v25)
		(*v25)[1](v25);
	return v7;
}
// 140B02DB0: using guessed type wchar_t aSS_17[5];
// 140B02DC0: using guessed type wchar_t aDataJson[10];
// 140C3FE68: using guessed type __int64 qword_140C3FE68;
// 140C3FE70: using guessed type __int64 qword_140C3FE70;
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C636A8: using guessed type int dword_140C636A8;

