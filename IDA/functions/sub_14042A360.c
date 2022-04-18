#include "../winhttp.h"

//----- (000000014042A360) ----------------------------------------------------
void __fastcall sub_14042A360(__int64 a1, unsigned int a2, __int16* a3, int a4, int a5)
{
	__int16* v5; // rsi
	int* v6; // rax
	int* v7; // r14
	int* v8; // rax
	int* v9; // r12
	int* v10; // r15
	int* v11; // rdi
	int v12; // r13d
	__int16 v13; // bp
	int* v14; // rax
	int* v15; // rbx
	__int64* v16; // rax
	unsigned __int64 v17; // rdx
	__int64 v18; // rcx
	__int64* v19; // rax
	__int64 v20; // r13
	int* v21; // rax
	int* v22; // r12
	int* v23; // rbx
	signed __int64 v24; // rdx
	int* v25; // rax
	int* v26; // rbx
	__int64 v27; // rsi
	__int64 v28; // rbx
	__int64 v29; // rax
	int* i; // rbx
	__int64 v31; // rax
	unsigned __int64* v32; // r12
	unsigned __int64 v33; // rbp
	__int64 v34; // rdi
	__int64 v35; // rax
	int v36; // ebx
	__int64 v37; // rdx
	int* v38; // rbx
	__int64 v39; // rdi
	__int64 v40; // rcx
	unsigned __int64 v41; // [rsp+40h] [rbp-78h] BYREF
	__int64 v42; // [rsp+48h] [rbp-70h] BYREF
	__int64 v43; // [rsp+50h] [rbp-68h]
	__int64 v46; // [rsp+D0h] [rbp+18h] BYREF
	int v47; // [rsp+D8h] [rbp+20h]

	if (a3)
	{
		v47 = a4;
		v5 = a3;
		v6 = sub_14018B280(48i64, 0);
		*(_QWORD*)v6 = v6;
		v7 = v6;
		*((_QWORD*)v6 + 1) = v6;
		v8 = sub_14018B280(16i64, 0);
		v9 = v8 + 4;
		v10 = v8;
		v11 = v8;
		if (v8)
			*(_WORD*)v8 = 0;
		v12 = 1;
		if (*v5)
		{
			while (1)
			{
				v13 = *v5;
				if (*v5 != 13)
					break;
				if (*++v5 == 10)
					goto LABEL_9;
			LABEL_10:
				v14 = sub_14018B280(48i64, 0);
				v15 = v14;
				if (v14 != (int*)-16i64)
				{
					*((_QWORD*)v14 + 3) = 0i64;
					*((_QWORD*)v14 + 4) = 0i64;
					*((_QWORD*)v14 + 5) = 0i64;
					sub_14001C1B0((_QWORD*)v14 + 2, v10, (__int64)v11);
				}
				*(_QWORD*)v15 = v7;
				*((_QWORD*)v15 + 1) = *((_QWORD*)v7 + 1);
				**((_QWORD**)v7 + 1) = v15;
				*((_QWORD*)v7 + 1) = v15;
				if (v10 != v11)
				{
					*(_WORD*)v10 = 0;
					v11 = v10;
				}
			LABEL_32:
				if (!*v5)
				{
					if (v10 != v11)
					{
						v25 = sub_14018B280(48i64, 0);
						v26 = v25;
						if (v25 != (int*)-16i64)
						{
							*((_QWORD*)v25 + 3) = 0i64;
							*((_QWORD*)v25 + 4) = 0i64;
							*((_QWORD*)v25 + 5) = 0i64;
							sub_14001C1B0((_QWORD*)v25 + 2, v10, (__int64)v11);
						}
						*(_QWORD*)v26 = v7;
						*((_QWORD*)v26 + 1) = *((_QWORD*)v7 + 1);
						**((_QWORD**)v7 + 1) = v26;
						*((_QWORD*)v7 + 1) = v26;
					}
					goto LABEL_37;
				}
			}
			if (v13 != 10)
			{
				if ((int*)((char*)v11 + 2) == v9)
				{
					v46 = 1i64;
					v16 = &v46;
					v17 = ((char*)v11 - (char*)v10) >> 1;
					v41 = v17;
					if (v17)
						v16 = (__int64*)&v41;
					v18 = *v16;
					v46 = ((char*)v11 - (char*)v10) >> 1;
					v19 = &v46;
					v41 = v17 + v18;
					if (v17 + v18 >= v17)
						v19 = (__int64*)&v41;
					v20 = 2 * (*v19 + 1);
					v21 = sub_14018B280(v20, 0);
					v22 = v21;
					v23 = v21;
					if (v10 != v11)
					{
						v24 = (char*)v10 - (char*)v21;
						do
						{
							if (v23)
								*(_WORD*)v23 = *(_WORD*)((char*)v23 + v24);
							v23 = (int*)((char*)v23 + 2);
						} while ((int*)((char*)v23 + v24) != v11);
					}
					if (v23)
						*(_WORD*)v23 = 0;
					if (v10)
						sub_14018B900((__int64)v10, 0);
					v10 = v22;
					v9 = (int*)((char*)v22 + v20);
					v11 = v23;
					v12 = 1;
				}
				if (v11 != (int*)-2i64)
					*((_WORD*)v11 + 1) = 0;
				*(_WORD*)v11 = v13;
				++v5;
				v11 = (int*)((char*)v11 + 2);
				goto LABEL_32;
			}
		LABEL_9:
			++v5;
			goto LABEL_10;
		}
	LABEL_37:
		v27 = *(_QWORD*)(a1 + 400);
		if (*(_QWORD*)(*(_QWORD*)(v27 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(v27 + 32) + 112i64))
			sub_14005E2C0(*(_QWORD*)(a1 + 400));
		v28 = *(_QWORD*)(v27 + 16);
		v29 = sub_14005C1B0(v27, 0, 0);
		*(_DWORD*)(v28 + 8) = 5;
		*(_QWORD*)v28 = v29;
		*(_QWORD*)(v27 + 16) += 16i64;
		for (i = *(int**)v7; i != v7; ++v12)
		{
			v31 = *(_QWORD*)(v27 + 16);
			*(_DWORD*)(v31 + 8) = 3;
			*(double*)v31 = (double)v12;
			*(_QWORD*)(v27 + 16) += 16i64;
			v32 = (unsigned __int64*)sub_14018F0E0(&v42, *((unsigned __int16**)i + 3))[1];
			if (v32)
			{
				v33 = -1i64;
				do
					++v33;
				while (*((_BYTE*)v32 + v33));
				if (*(_QWORD*)(*(_QWORD*)(v27 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(v27 + 32) + 112i64))
					sub_14005E2C0(v27);
				v34 = *(_QWORD*)(v27 + 16);
				v35 = sub_140062650(v27, v32, v33);
				*(_DWORD*)(v34 + 8) = 4;
				*(_QWORD*)v34 = v35;
				*(_QWORD*)(v27 + 16) += 16i64;
			}
			else
			{
				*(_DWORD*)(*(_QWORD*)(v27 + 16) + 8i64) = 0;
				*(_QWORD*)(v27 + 16) += 16i64;
			}
			if (v43)
				sub_14018B900(v43, 0);
			sub_14005EA50(
				v27,
				(__int64*)(*(_QWORD*)(v27 + 16) - 48i64),
				(int*)(*(_QWORD*)(v27 + 16) - 32i64),
				(unsigned int*)(*(_QWORD*)(v27 + 16) - 16i64));
			*(_QWORD*)(v27 + 16) -= 32i64;
			i = *(int**)i;
		}
		v36 = sub_1400578C0(v27);
		Apollo_LUAEvent(a1, "StoryPanelDialog_Show", "iTfi", a2, v36, (float)((float)v47 * 0.001), a5);
		sub_1400579E0(v27, v37, v36);
		if (v10)
			sub_14018B900((__int64)v10, 0);
		v38 = *(int**)v7;
		while (v38 != v7)
		{
			v39 = (__int64)v38;
			v38 = *(int**)v38;
			v40 = *(_QWORD*)(v39 + 24);
			if (v40)
				sub_14018B900(v40, 0);
			sub_14018B900(v39, 0);
		}
		*(_QWORD*)v7 = v7;
		*((_QWORD*)v7 + 1) = v7;
		sub_14018B900((__int64)v7, 0);
	}
}
// 14042A712: variable 'v37' is possibly undefined

