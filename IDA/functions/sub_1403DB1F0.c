#include "../winhttp.h"

//----- (00000001403DB1F0) ----------------------------------------------------
__int64 __fastcall sub_1403DB1F0(__int64 a1, unsigned int* a2)
{
	unsigned int v3; // edx
	__int64 v4; // r8
	__int64 v5; // rcx
	__int64 v6; // rax
	_DWORD* v7; // rdx
	bool v8; // zf
	__int64 v9; // rax
	int v10; // edi
	int v11; // ebx
	__int64 v13; // [rsp+20h] [rbp-E0h]
	__int64 v14[96]; // [rsp+30h] [rbp-D0h] BYREF
	__int64 v15; // [rsp+330h] [rbp+230h]
	__int64 v16; // [rsp+448h] [rbp+348h]
	__int64 v17; // [rsp+450h] [rbp+350h]
	__int64 v18; // [rsp+458h] [rbp+358h]
	__int64 v19; // [rsp+460h] [rbp+360h]
	__int64 v20; // [rsp+468h] [rbp+368h]
	__int64 v21; // [rsp+470h] [rbp+370h]
	__int64 v22; // [rsp+478h] [rbp+378h]
	__int64 v23; // [rsp+480h] [rbp+380h]
	__int64 v24; // [rsp+488h] [rbp+388h]
	__int64 v25; // [rsp+490h] [rbp+390h]
	__int64 v26; // [rsp+498h] [rbp+398h]
	int v27; // [rsp+4E0h] [rbp+3E0h]
	unsigned int v28; // [rsp+4F0h] [rbp+3F0h] BYREF
	__int64 v29[96]; // [rsp+4F8h] [rbp+3F8h] BYREF
	__int64 v30; // [rsp+7F8h] [rbp+6F8h]
	int v31; // [rsp+9B8h] [rbp+8B8h]
	int v32; // [rsp+9BCh] [rbp+8BCh]
	__int64 v33; // [rsp+9C0h] [rbp+8C0h]
	__int64 v34; // [rsp+9C8h] [rbp+8C8h]
	__int64 v35; // [rsp+9D0h] [rbp+8D0h]
	__int64 v36; // [rsp+9D8h] [rbp+8D8h]
	__int64 v37; // [rsp+9E0h] [rbp+8E0h]
	__int64 v38; // [rsp+9E8h] [rbp+8E8h]
	__int64 v39; // [rsp+9F0h] [rbp+8F0h]
	__int64 v40; // [rsp+9F8h] [rbp+8F8h]
	__int64 v41; // [rsp+A00h] [rbp+900h]

	if (a2[3] == *(_DWORD*)(*(_QWORD*)(a1 + 120) + 8i64))
		return 0i64;
	sub_1405FF500(*(_QWORD*)(a1 + 32144), (__int64)a2);
	sub_14040FAE0((__int64)v14);
	v3 = *a2;
	v4 = *(_QWORD*)(*(_QWORD*)(qword_140C65898 + 32144) + 40i64);
	v5 = v4;
	v6 = *(_QWORD*)(v4 + 8);
	while (v6)
	{
		if (*(_DWORD*)(v6 + 32) < v3)
		{
			v6 = *(_QWORD*)(v6 + 24);
		}
		else
		{
			v5 = v6;
			v6 = *(_QWORD*)(v6 + 16);
		}
	}
	if (v5 == v4 || (v13 = v5, v3 < *(_DWORD*)(v5 + 32)))
		v13 = *(_QWORD*)(*(_QWORD*)(qword_140C65898 + 32144) + 40i64);
	if (v13 != v4)
	{
		v7 = (_DWORD*)(v13 + 40);
		if (v13 != -40)
		{
			if (*v7 && !*(_DWORD*)(v13 + 52) && *(_QWORD*)(v13 + 56))
			{
				v8 = (_DWORD)v16 == *v7;
				v16 = *(_QWORD*)v7;
				v17 = *(_QWORD*)(v13 + 48);
				v18 = *(_QWORD*)(v13 + 56);
				v19 = *(_QWORD*)(v13 + 64);
				v20 = *(_QWORD*)(v13 + 72);
				v21 = *(_QWORD*)(v13 + 80);
				v22 = *(_QWORD*)(v13 + 88);
				v23 = *(_QWORD*)(v13 + 96);
				v24 = *(_QWORD*)(v13 + 104);
				v25 = *(_QWORD*)(v13 + 112);
				v9 = *(_QWORD*)(v13 + 120);
				v27 = 6;
				v26 = v9;
				if (!v8)
					goto LABEL_19;
			}
			else if (v27)
			{
				LODWORD(v16) = 0;
				v27 = 0;
			LABEL_19:
				v10 = a2[3];
				v11 = a2[2];
				v28 = 1;
				sub_14040FC60((__int64)v29, (__int64)v14);
				v31 = v11;
				v32 = v10;
				v33 = 0i64;
				v34 = 1i64;
				v35 = 0i64;
				v36 = 0i64;
				v37 = 1i64;
				v38 = 0i64;
				v39 = 0i64;
				v40 = 1i64;
				v41 = 0i64;
				sub_140427FA0(*(_QWORD*)(qword_140C65898 + 29504), &v28);
				if (v29[0])
				{
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v29[0] + 8i64))(v29[0]);
					v29[0] = 0i64;
				}
				if (v30)
					sub_14018B900(v30, 0);
			}
		}
	}
	if (v14[0])
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v14[0] + 8i64))(v14[0]);
		v14[0] = 0i64;
	}
	if (v15)
		sub_14018B900(v15, 0);
	return 0i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 1403DB1F0: using guessed type __int64 var_538[96];

