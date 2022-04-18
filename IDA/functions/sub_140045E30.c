#include "../winhttp.h"

//----- (0000000140045E30) ----------------------------------------------------
__int64 __fastcall sub_140045E30(__int64 a1, __int64 a2)
{
	__int64* v2; // r15
	__int64 v3; // rbp
	int* v5; // rdi
	unsigned int i; // ebx
	__int64 v7; // rdx
	__int64 v8; // rdi
	__int64 v9; // rcx
	__int64* v10; // r13
	unsigned int v11; // ebx
	__int64 v12; // rax
	__int64 v13; // r15
	unsigned __int8 v14; // bp
	__int64 v15; // rdx
	__int64 v16; // r12
	int* v17; // rsi
	__int64 v18; // rbx
	int* v19; // rax
	__int64 v20; // rdi
	unsigned __int64 v21; // rbx
	int v22; // eax
	__int64 v23; // rcx
	int* v24; // rsi
	__int64 v25; // rbx
	unsigned __int64 v26; // rbx
	unsigned __int64 v27; // rdx
	unsigned int v28; // ecx
	__int64 v29; // rax
	__int64 v30; // rcx
	int v32[14]; // [rsp+20h] [rbp-B8h] BYREF
	__int64 v33; // [rsp+58h] [rbp-80h]
	__int64 v34; // [rsp+60h] [rbp-78h]
	__int64 v35; // [rsp+68h] [rbp-70h]
	__int64 v36; // [rsp+78h] [rbp-60h]
	__int64 v37; // [rsp+80h] [rbp-58h]
	int v39; // [rsp+E8h] [rbp+10h]
	__int64 v40; // [rsp+F0h] [rbp+18h] BYREF
	__int64* v41; // [rsp+F8h] [rbp+20h]

	v2 = (__int64*)(a1 + 200);
	v3 = a1;
	v41 = (__int64*)(a1 + 200);
	sub_140047C00((__int64*)(a1 + 200));
	sub_140047940(v2, *(unsigned int*)(a2 + 8));
	v5 = 0i64;
	for (i = 0; i < *(_DWORD*)(a2 + 8); v5 = 0i64)
	{
		v33 = 0i64;
		v34 = 0i64;
		v35 = 0i64;
		sub_1407E4830(v32, 0i64, 0x58ui64);
		v7 = *(_QWORD*)(a2 + 16);
		v36 = 0i64;
		v37 = 0i64;
		v8 = 88i64 * i;
		sub_1400A7CF0((__int64)v32, v8 + v7);
		sub_140047AB0(v2, (__int64)v32);
		if (v37)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(v37 - 16) + 8i64))(v37 - 16);
		v9 = v36;
		if (v36)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(v36 - 16) + 8i64))(v36 - 16);
		sub_1400167A0(v9, *(_DWORD*)(v8 + *(_QWORD*)(a2 + 16)), *(int**)(v8 + *(_QWORD*)(a2 + 16) + 8));
		++i;
	}
	v10 = (__int64*)(v3 + 216);
	sub_14001A1B0((_QWORD*)(v3 + 216));
	sub_140047C90((__int64*)(v3 + 216), *(unsigned int*)(a2 + 24));
	v11 = 0;
	v39 = 0;
	if (*(_DWORD*)(a2 + 24))
	{
		do
		{
			v12 = sub_14001A070(v10);
			v13 = 16i64 * v11;
			v14 = 0;
			v15 = v13 + *(_QWORD*)(a2 + 32);
			if (*(_BYTE*)(v15 + 4))
			{
				v16 = 16 * v12;
				do
				{
					v17 = *(int**)(*(_QWORD*)(v15 + 8) + 8i64 * v14);
					if (v17)
					{
						v18 = 0i64;
						if (*(_WORD*)v17)
						{
							do
								++v18;
							while (*((_WORD*)v17 + v18));
						}
						v19 = sub_14018B280(2 * v18 + 18, 0);
						if (v19)
						{
							*((_QWORD*)v19 + 1) = v18;
							*(_QWORD*)v19 = off_140B55060;
						}
						else
						{
							v19 = 0i64;
						}
						v20 = (__int64)(v19 + 4);
						v21 = 2 * v18;
						sub_1407DB590(v19 + 4, v17, v21);
						v40 = v20;
						*(_WORD*)(v21 + v20) = 0;
						v5 = 0i64;
					}
					else
					{
						v40 = 0i64;
					}
					sub_140019B70((__int64*)(v16 + *v10), &v40);
					if (v40)
						(*(void(__fastcall**)(__int64))(*(_QWORD*)(v40 - 16) + 8i64))(v40 - 16);
					++v14;
					v15 = v13 + *(_QWORD*)(a2 + 32);
				} while (v14 < *(_BYTE*)(v15 + 4));
				v11 = v39;
			}
			v39 = ++v11;
		} while (v11 < *(_DWORD*)(a2 + 24));
		v3 = a1;
		v2 = v41;
	}
	Apollo_LUAEvent(*(_QWORD*)(v3 + 72), "RealmListChanged", &unk_1409D0217);
	v22 = dword_140C66910;
	if (*(_DWORD*)qword_140C63750 < dword_140C66910)
		v22 = *(_DWORD*)qword_140C63750;
	v23 = 32i64 * v22;
	v24 = *(int**)((char*)&unk_140C66920 + v23 + 8);
	v25 = (__int64)(*(_QWORD*)((char*)&unk_140C66920 + v23 + 16) - (_QWORD)v24) >> 1;
	if ((unsigned __int64)(v25 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
		v5 = sub_14018B280(2 * (v25 + 1), 0);
	v26 = 2 * v25;
	sub_1407DB590(v5, v24, v26);
	if ((int*)((char*)v5 + v26))
		*(_WORD*)((char*)v5 + v26) = 0;
	if (!*(_DWORD*)(qword_140C635F0 + 5704))
		goto LABEL_36;
	v27 = *(_QWORD*)(v3 + 208);
	*(_DWORD*)(v3 + 232) = 1;
	v28 = 0;
	if (!v27)
	{
	LABEL_35:
		*(_QWORD*)(v3 + 192) = 0i64;
	LABEL_36:
		v30 = *(_QWORD*)(v3 + 72);
		if (v30)
			Apollo_LUAEvent(v30, "NetworkStatus", &unk_1409D01F2, 0i64);
		goto LABEL_38;
	}
	v29 = 0i64;
	while ((*(_BYTE*)(104 * v29 + *v2 + 20) & 1) == 0)
	{
		v29 = ++v28;
		if (v28 >= v27)
			goto LABEL_35;
	}
	*(_QWORD*)(v3 + 192) = v28;
LABEL_38:
	if (v5)
		sub_14018B900((__int64)v5, 0);
	return 0i64;
}
// 140045F1B: variable 'v9' is possibly undefined
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C66910: using guessed type int dword_140C66910;
// 140045E30: using guessed type int var_B8[14];

