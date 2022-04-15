#include "../winhttp.h"

//----- (0000000140036600) ----------------------------------------------------
void __fastcall sub_140036600(__int64 a1)
{
	__int64 v1; // r15
	unsigned int v3; // eax
	unsigned int v4; // ebx
	double v5; // xmm1_8
	int v6; // eax
	int v7; // edi
	__int64 v8; // rax
	__int64 v9; // rcx
	__int16* v10; // rax
	__int64 v11; // r14
	int* v12; // rsi
	__int64 v13; // rbx
	int* v14; // rax
	int* v15; // rdi
	unsigned __int64 v16; // rbx
	__int64 v17; // rax
	int v18; // edx
	int v19; // [rsp+20h] [rbp-38h] BYREF
	__int64 v20; // [rsp+28h] [rbp-30h]
	__int64(__fastcall * v21)(); // [rsp+30h] [rbp-28h]
	__int64 v22; // [rsp+38h] [rbp-20h]

	v1 = a1 + 144;
	sub_140195D70(a1 + 144);
	if (qword_140C63838)
	{
		v3 = qword_140C63838(off_140A6B160, qword_140C63858);
	}
	else
	{
		if (dword_140C655A8)
		{
			v4 = 0;
			goto LABEL_9;
		}
		if ((int)sub_140210360() < 0)
		{
			v4 = 0;
			goto LABEL_9;
		}
		v3 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C64408 + 40i64))(qword_140C64408);
	}
	v4 = v3;
LABEL_9:
	v5 = (double)(*(int(__fastcall**)(__int64*))(qword_140C77890 + 24))(&qword_140C77890);
	v6 = *(_DWORD*)(a1 + 136);
	v7 = (int)(v5 * 2.328306436538696e-10 * ((double)(int)(v4 - 1) + 1.0));
	if (v7 == v6)
		v7 = (v6 + 1) % v4;
	v8 = sub_140210620(v7);
	if (v8)
	{
		*(_DWORD*)(a1 + 136) = v7;
		v10 = sub_14034BDD0(v9, *(_DWORD*)(v8 + 4));
		v11 = *(_QWORD*)(a1 + 128);
		v12 = (int*)v10;
		if (v10)
		{
			v13 = 0i64;
			if (*v10)
			{
				do
					++v13;
				while (v10[v13]);
			}
			v14 = sub_14018B280(2 * v13 + 18, 0);
			if (v14)
			{
				*((_QWORD*)v14 + 1) = v13;
				*(_QWORD*)v14 = off_140B55060;
			}
			else
			{
				v14 = 0i64;
			}
			v15 = v14 + 4;
			v16 = 2 * v13;
			sub_1407DB590(v14 + 4, v12, v16);
			*(_WORD*)((char*)v15 + v16) = 0;
			*(_QWORD*)(a1 + 128) = v15;
		}
		else
		{
			*(_QWORD*)(a1 + 128) = 0i64;
		}
		if (v11)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(v11 - 16) + 8i64))(v11 - 16);
	}
	v19 = 0;
	v20 = a1;
	v22 = 0i64;
	v21 = sub_140036600;
	v17 = sub_140200220(0x43Fu);
	if (v17)
		v18 = *(_DWORD*)(v17 + 4);
	else
		v18 = 5000;
	sub_140195960(v1, v18, (__int64)&v19, 4);
}
// 1400366EC: variable 'v9' is possibly undefined
// 140A6B160: using guessed type wchar_t *off_140A6B160[2];
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64408: using guessed type __int64 qword_140C64408;
// 140C655A8: using guessed type int dword_140C655A8;
// 140C77890: using guessed type __int64 qword_140C77890;

