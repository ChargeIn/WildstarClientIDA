#include "../winhttp.h"

//----- (0000000140647C90) ----------------------------------------------------
__int64 __fastcall sub_140647C90(_QWORD* a1)
{
	__int64 result; // rax
	__int64 v3; // rax
	__int64 v4; // rbp
	__int64* v5; // rbx
	__int64 v6; // rcx
	__int64* v7; // rax
	__int64 v8; // rcx
	WCHAR** v9; // rbx
	unsigned int v10; // eax
	unsigned int v11; // esi
	WCHAR* v12; // rdx
	unsigned __int64 v13; // rbx
	unsigned __int64 v14; // rax
	WCHAR* v15; // rcx
	unsigned __int64 v16; // rax
	unsigned __int64 v17; // rbx
	int* v18; // r15
	int* v19; // rax
	WCHAR* v20; // r14
	unsigned __int64 v21; // rbx
	unsigned int v22; // eax
	int v23; // eax
	int v24; // ecx
	int v25; // eax
	int v26; // ecx
	int v27; // eax
	int v28; // edx
	int v29; // eax
	int v30; // edx
	int v31; // eax
	int v32; // ecx
	__int64 v33; // [rsp+20h] [rbp-48h] BYREF
	WCHAR* v34; // [rsp+28h] [rbp-40h]
	int v35; // [rsp+30h] [rbp-38h] BYREF
	int v36; // [rsp+34h] [rbp-34h] BYREF
	int v37; // [rsp+38h] [rbp-30h] BYREF
	int v38; // [rsp+3Ch] [rbp-2Ch] BYREF
	int v39[4]; // [rsp+40h] [rbp-28h] BYREF

	LODWORD(result) = sub_140647740(a1);
	if ((_DWORD)result)
	{
		if ((int)(result + 0x80000000) >= 0 && (_DWORD)result != -2147024809)
			return (unsigned int)result;
		v3 = a1[5];
		if (*(_QWORD*)v3 == v3)
			return 2147549183i64;
		v4 = a1[11];
		sub_140647FF0(a1 + 10, (int**)(*(_QWORD*)v3 + 16i64));
		v5 = *(__int64**)a1[5];
		v6 = *v5;
		v7 = (__int64*)v5[1];
		*v7 = *v5;
		*(_QWORD*)(v6 + 8) = v7;
		v8 = v5[2];
		if (v8)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(v8 - 16) + 8i64))(v8 - 16);
		sub_14018B900((__int64)v5, 0);
		v9 = (WCHAR**)(a1[10] + 8 * v4);
		v10 = sub_14018E820(*v9);
		v11 = v10;
		if (v10)
		{
			v12 = *v9;
			LODWORD(v34) = v10;
			v13 = *((_QWORD*)v12 - 1);
			LODWORD(v33) = 0;
			v14 = 0i64;
			if (v13)
			{
				v15 = v12;
				while (*v15 != 45)
				{
					++v14;
					++v15;
					if (v14 >= v13)
						goto LABEL_14;
				}
				v16 = v14 + 1;
				v17 = v13 - v16;
				v18 = (int*)&v12[v16];
				v19 = sub_14018B280(2 * v17 + 18, 0);
				if (v19)
				{
					*((_QWORD*)v19 + 1) = v17;
					*(_QWORD*)v19 = off_140B55060;
				}
				else
				{
					v19 = 0i64;
				}
				v20 = (WCHAR*)(v19 + 4);
				v21 = v17;
				sub_1407DB590(v19 + 4, v18, v21 * 2);
				v20[v21] = 0;
				v22 = sub_14018E820(v20);
				if (v11 < v22)
					v11 = v22;
				HIDWORD(v34) = v11 + 1;
				if (v20)
					(*(void(__fastcall**)(WCHAR*))(*((_QWORD*)v20 - 2) + 8i64))(v20 - 8);
			}
			else
			{
			LABEL_14:
				HIDWORD(v34) = v11 + 1;
			}
		}
		else
		{
			v34 = *v9;
			LODWORD(v33) = 7;
			v23 = sub_140647580((__int64)v9, &v35);
			v24 = v35;
			if (v23 < 0)
				v24 = 0;
			v35 = v24;
			v25 = sub_1406474C0((__int64)v9, &v36);
			v26 = v36;
			if (v25 < 0)
				v26 = 4;
			v36 = v26;
			v27 = sub_140647190((__int64)v9, &v37);
			v28 = v37;
			if (v27 < 0)
				v28 = 0;
			v37 = v28;
			v29 = sub_140647340((__int64)v9, &v38);
			v30 = v38;
			if (v29 < 0)
				v30 = 0;
			v38 = v30;
			v31 = sub_140647340((__int64)v9, v39);
			v32 = v39[0];
			if (v31 < 0)
				v32 = 0;
			v39[0] = v32;
		}
		if (a1[7] >= 0xFFFFFFFFui64)
			return 2147942414i64;
		sub_140647F30(a1 + 6, &v33);
	}
	return 0i64;
}
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();
// 140647C90: using guessed type int var_28[4];

