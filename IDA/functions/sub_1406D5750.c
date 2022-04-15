#include "../winhttp.h"

//----- (00000001406D5750) ----------------------------------------------------
void __fastcall sub_1406D5750(__int64 a1, int a2, __int64 a3, __int64 a4, int** a5)
{
	int** v5; // rsi
	int* v6; // rdi
	int* v7; // rbp
	__int64 v8; // rax
	char* v10; // rbx
	unsigned __int64 v11; // r14
	_BYTE* v12; // rbx
	int v13; // ecx
	int v14; // r12d
	__int64 v15; // rax
	__int64 v16; // rax
	__int64 v17; // r15
	__int64 v18; // rdi
	__int64 v19; // rbx
	int v20; // ebx
	__int64 v21; // rax
	__int64 v22; // r14
	__int64 v23; // rax
	unsigned int v24; // edx
	__int64 v25; // r8
	__int64 v26; // rcx
	int v27; // eax
	BOOL v28; // ecx
	__int64 v29; // rsi
	int v30; // ebx
	int* v31; // rdi
	__int64 v32; // rax
	__int64 v33; // rcx
	int v34[2]; // [rsp+40h] [rbp-58h] BYREF
	__int64 v35[2]; // [rsp+48h] [rbp-50h] BYREF
	int v36; // [rsp+58h] [rbp-40h]
	__int64 v37; // [rsp+5Ch] [rbp-3Ch]
	int v38; // [rsp+64h] [rbp-34h]
	int v39; // [rsp+A8h] [rbp+10h] BYREF

	if (a2 == 25)
	{
		v5 = a5;
		v6 = *a5;
		v7 = 0i64;
		v8 = -1i64;
		while (*((_BYTE*)v6 + ++v8) != 0)
			;
		v10 = (char*)v6 + v8;
		v11 = v8;
		if (v8 != -2)
			v7 = sub_14018B280(v8 + 1, 0);
		sub_1407DB590(v7, v6, v11);
		v12 = (char*)v7 + v10 - (char*)v6;
		if (v12)
			*v12 = 0;
		if (v12 - (_BYTE*)v7 != 19)
			goto LABEL_16;
		if ((unsigned int)sub_1407E6AF0((unsigned __int64*)v7, (__int64)"DDUseItemWithTarget", 0x13ui64))
			goto LABEL_16;
		v13 = *((_DWORD*)v5 + 2);
		v34[0] = BYTE1(v13);
		v14 = *(_DWORD*)(qword_140C65898 + 25796);
		v34[1] = (unsigned __int8)v13;
		v39 = v14;
		v15 = sub_1403AC780(qword_140C65898 + 160, v34);
		if (!v15)
			goto LABEL_16;
		v16 = sub_14056A030(v15);
		v17 = v16;
		if (!v16 || *(_DWORD*)(*(_QWORD*)(v16 + 112) + 124i64) != 1)
			goto LABEL_16;
		v18 = qword_140C65898;
		v19 = *(_QWORD*)(qword_140C65898 + 120);
		if (!v19)
		{
			v20 = 30;
			goto LABEL_15;
		}
		v21 = sub_1403AC780(qword_140C65898 + 160, v34);
		v22 = v21;
		if (!v21)
		{
			v20 = 22;
			goto LABEL_15;
		}
		v23 = *(_QWORD*)(v21 + 80);
		if (!v23)
			v23 = *(_QWORD*)(v22 + 64) + 156i64;
		v24 = *(_DWORD*)(v23 + 128);
		if (v24)
		{
			v25 = sub_1403ACD90(qword_140C65B70, v24, v19);
			if (v25)
			{
				v26 = *(_QWORD*)(v22 + 64);
				v27 = *(_DWORD*)(v26 + 340) & 0x200;
				v28 = (*(_DWORD*)(v26 + 340) & 0x400) == 0 || !*(_DWORD*)(v26 + 384) || *(_DWORD*)(v22 + 32) == 0;
				if (v27 || v28)
				{
					v29 = *(_QWORD*)(qword_140C65898 + 120);
					v30 = **(_DWORD**)(v25 + 112);
					v35[0] = 0i64;
					v37 = 0i64;
					v36 = 0;
					v38 = 96;
					v35[1] = 0i64;
					v31 = (int*)(qword_140C65898 + 27920);
					v32 = sub_14055BDC0(qword_140C65898, v29, v25, 1, v14);
					v20 = sub_1403986F0(v33, v30, v29, v32, v31, v22, (__int64)v35, 0);
					if (v35[0])
						(*(void(__fastcall**)(__int64))(*(_QWORD*)(v35[0] - 16) + 8i64))(v35[0] - 16);
					v18 = qword_140C65898;
				LABEL_36:
					if (!v20)
					{
						sub_1403998E0(v18, v34, 2, &v39);
					LABEL_16:
						if (v7)
							sub_14018B900((__int64)v7, 0);
						return;
					}
				LABEL_15:
					sub_1403A12A0(v18, v20, v17, 0);
					goto LABEL_16;
				}
			}
			v18 = qword_140C65898;
		}
		v20 = 4;
		goto LABEL_36;
	}
}
// 1406D59DE: variable 'v33' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B70: using guessed type __int64 qword_140C65B70;

