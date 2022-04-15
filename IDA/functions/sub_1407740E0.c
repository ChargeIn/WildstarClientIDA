#include "../winhttp.h"

//----- (00000001407740E0) ----------------------------------------------------
int* __fastcall sub_1407740E0(__int64 a1, __int64 a2, int a3, _WORD* a4, __int64 a5, __int64 a6, int a7, int a8)
{
	unsigned __int64 v10; // rdi
	char v11; // bl
	int* v14; // rax
	__int64 v15; // rdx
	int* v16; // rsi
	void(__fastcall * **v17)(_QWORD); // rcx
	_QWORD* v18; // rax
	_QWORD* v19; // rbx
	int v20; // ebp
	int* v21; // rax
	__int64 v22; // rbx
	int* v23; // r14
	int* v24; // rax
	int* v25; // rdi
	unsigned __int64 v27; // rdx
	__int64 v28; // rcx
	unsigned __int64 v29; // rbp
	__int64 v30; // rdi
	int* v31; // rax
	int* v32; // r14
	int* v33; // rdx
	__int64 v34; // rcx
	void(__fastcall * **v35)(_QWORD, __int64); // rcx
	__int128 v36; // [rsp+50h] [rbp-58h] BYREF
	__int64(__fastcall * *v37)(); // [rsp+60h] [rbp-48h] BYREF
	int* v38; // [rsp+68h] [rbp-40h] BYREF
	__int64 v39; // [rsp+70h] [rbp-38h]

	v10 = 0i64;
	v11 = 0;
	v14 = sub_14018B280(400i64, 0);
	v16 = v14;
	if (v14)
	{
		v36 = 0i64;
		v11 = 1;
		v37 = off_140B56A08;
		v39 = 0i64;
		LODWORD(v38) = -2;
		sub_140770B60((__int64)v14, a3, &v36, a4, a5, dword_1409F9944, a6, a7, (__int64)&v37);
		*((_QWORD*)v16 + 48) = 0i64;
		*(_QWORD*)v16 = off_140B765F0;
		if (a2)
		{
			if (v16 != (int*)-384i64)
			{
				*((_QWORD*)v16 + 48) = *(_QWORD*)(a2 + 120);
				v17 = *(void(__fastcall****)(_QWORD))(a2 + 120);
				if (v17)
					(**v17)(v17);
			}
		}
	}
	else
	{
		v16 = 0i64;
	}
	if ((v11 & 1) != 0)
	{
		v37 = off_140B56A08;
		if (v39)
			sub_1400579E0(v39, v15, (int)v38);
	}
	v16[94] = a8;
	v18 = *(_QWORD**)(a1 + 56);
	v19 = (_QWORD*)*v18;
	if ((_QWORD*)*v18 == v18)
	{
	LABEL_13:
		v20 = *(_DWORD*)(a2 + 8);
		LODWORD(v37) = v20;
		v21 = sub_14018DB00(0i64, 1ui64, 8i64);
		v39 = 1i64;
		*(_QWORD*)v21 = v16;
		v22 = *(_QWORD*)(a1 + 56);
		v23 = v21;
		v38 = v21;
		v24 = sub_14018B280(40i64, 0);
		v25 = v24;
		if (v24 != (int*)-16i64)
		{
			v24[4] = v20;
			sub_1403FE910((__int64*)v24 + 3, (__int64)&v38);
		}
		*(_QWORD*)v25 = v22;
		*((_QWORD*)v25 + 1) = *(_QWORD*)(v22 + 8);
		**(_QWORD**)(v22 + 8) = v25;
		*(_QWORD*)(v22 + 8) = v25;
		(*(void(__fastcall**)(int*))(*((_QWORD*)v23 - 2) + 8i64))(v23 - 4);
	}
	else
	{
		while (*((_DWORD*)v19 + 4) != *(_DWORD*)(a2 + 8))
		{
			v19 = (_QWORD*)*v19;
			if (v19 == v18)
				goto LABEL_13;
		}
		v27 = v19[4];
		if (v27)
		{
			v28 = v19[3];
			while (*(_DWORD*)(*(_QWORD*)v28 + 12i64) != a3)
			{
				++v10;
				v28 += 8i64;
				if (v10 >= v27)
					goto LABEL_21;
			}
			v35 = *(void(__fastcall****)(_QWORD, __int64))(v19[3] + 8 * v10);
			if (v35)
				(**v35)(v35, 1i64);
			*(_QWORD*)(v19[3] + 8 * v10) = v16;
		}
		else
		{
		LABEL_21:
			v29 = v27 + 1;
			v30 = v19[4];
			v31 = sub_14018DB00(v19[3], v27 + 1, 8i64);
			v32 = v31;
			*(_QWORD*)&v31[2 * v30] = v16;
			v33 = (int*)v19[3];
			if (v33 != v31)
			{
				sub_1407DB590(v31, v33, 8i64 * v19[4]);
				v34 = v19[3];
				if (v34)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)(v34 - 16) + 8i64))(v34 - 16);
				v19[3] = v32;
			}
			v19[4] = v29;
		}
	}
	return v16;
}
// 1407741F0: variable 'v15' is possibly undefined
// 1409F9944: using guessed type int dword_1409F9944[8];
// 140B56A08: using guessed type __int64 (__fastcall *off_140B56A08[3])();
// 140B765F0: using guessed type __int64 (__fastcall *off_140B765F0[4])();

