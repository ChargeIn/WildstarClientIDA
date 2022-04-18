#include "../winhttp.h"

//----- (000000014062A5F0) ----------------------------------------------------
__int64 __fastcall sub_14062A5F0(
	__int64 a1,
	unsigned __int16* a2,
	__int64 a3,
	__int64 a4,
	__int64 a5,
	int a6,
	__int64 a7,
	__int64 a8,
	_QWORD* a9)
{
	int v9; // r10d
	unsigned int v12; // edx
	int v14; // eax
	__int64 v15; // r9
	__int64 v16; // rcx
	__int64 v18; // r11
	__int64 v19; // rax
	float v20; // xmm0_4
	unsigned __int64 v21; // rbx
	unsigned __int64 v22; // rbp
	unsigned int v23; // r15d
	__int64* v24; // rdi
	int v25; // eax
	unsigned int v26; // esi
	unsigned __int64 v27; // rdi
	_QWORD* v28; // rax
	_QWORD* v29; // rbx
	__int64 v30; // r9
	__int64 v31; // rax
	__int64 v32; // rcx
	__int64 v33[2]; // [rsp+20h] [rbp-108h] BYREF
	__int64 v34; // [rsp+30h] [rbp-F8h]
	__int64 v35[6]; // [rsp+40h] [rbp-E8h] BYREF
	int i; // [rsp+70h] [rbp-B8h]
	int v37; // [rsp+74h] [rbp-B4h]
	__int64 v38[11]; // [rsp+78h] [rbp-B0h]

	v9 = *(_DWORD*)(a1 + 8);
	v33[0] = a5;
	v12 = *(_DWORD*)(a1 + 24);
	v34 = a4;
	if (dword_140C636A8 - v9 >= v12)
	{
		if ((unsigned int)(dword_140C636A8 - v9) < *(_DWORD*)(a1 + 16))
		{
			*(_DWORD*)(a1 + 8) = v12 + v9;
		}
		else
		{
			*(_DWORD*)(a1 + 8) = dword_140C636A8;
			*(_DWORD*)(a1 + 12) = 1;
		}
	}
	else
	{
		v14 = *(_DWORD*)(a1 + 12);
		if (v14 == *(_DWORD*)(a1 + 20))
		{
			v15 = 64i64;
		LABEL_5:
			v16 = *(_QWORD*)(qword_140C65898 + 29504);
		LABEL_6:
			Apollo_LUAEvent(v16, "MailResult", L"i", v15, v33[0]);
			return 2147500037i64;
		}
		*(_DWORD*)(a1 + 12) = v14 + 1;
	}
	if (!a9[1])
	{
		v15 = 66i64;
		goto LABEL_5;
	}
	if (!(unsigned int)sub_1403A6930(qword_140C65898))
	{
		v16 = *(_QWORD*)(v18 + 29504);
		v15 = 158i64;
		goto LABEL_6;
	}
	v19 = sub_140200220(0xEDu);
	if (v19)
		v20 = *(float*)(v19 + 24);
	else
		v20 = 5.0;
	if (v20 < *(float*)(a1 + 4))
	{
		v15 = 65i64;
		goto LABEL_5;
	}
	v21 = 0i64;
	v22 = *(_QWORD*)(qword_140C635F0 + 5968);
	v23 = 0;
	if (v22)
	{
		v24 = *(__int64**)(qword_140C635F0 + 5960);
		while ((unsigned int)sub_14018E2C0(*v24, a2))
		{
			++v21;
			++v24;
			if (v21 >= v22)
				goto LABEL_25;
		}
		v23 = 1;
	}
LABEL_25:
	sub_1407E4830((int*)v35, 0i64, 0x88ui64);
	v35[2] = v34;
	v35[0] = (__int64)a2;
	v35[3] = v33[0];
	v35[1] = a3;
	v35[4] = a8;
	v25 = *(_DWORD*)a1;
	v26 = 0;
	v37 = v25;
	v27 = 0i64;
	v35[5] = a7;
	for (i = a6; v27 < a9[1]; ++v27)
	{
		v28 = (_QWORD*)sub_1403AC780(qword_140C65898 + 160, (int*)(*a9 + 8 * v27));
		v29 = v28;
		if (v28)
		{
			v30 = *v28;
			LODWORD(v33[0]) = 0;
			v33[1] = 0i64;
			if (!(*(unsigned int(__fastcall**)(_QWORD*, __int64*, _QWORD))(v30 + 104))(v28, v33, v23))
			{
				Apollo_LUAEvent(*(_QWORD*)(qword_140C65898 + 29504), "MailResult", L"i", 158i64);
				return 2147500037i64;
			}
			v31 = (*(__int64(__fastcall**)(_QWORD*))(*v29 + 48i64))(v29);
			v32 = v26++;
			v38[v32] = v31;
			if (v26 >= 0xA)
				break;
		}
	}
	sub_1403F4900(qword_140C65898, 0x168u, (__int64)v35);
	return 0i64;
}
// 14062A6C4: variable 'v18' is possibly undefined
// 1409EEF7C: using guessed type wchar_t aI_34[2];
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C636A8: using guessed type int dword_140C636A8;
// 140C65898: using guessed type __int64 qword_140C65898;
// 14062A5F0: using guessed type __int64 var_B0[11];

