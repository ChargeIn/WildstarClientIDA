//----- (00000001403EB430) ----------------------------------------------------
void __fastcall sub_1403EB430(__int64 a1, unsigned int a2, int a3, int a4, int a5)
{
	int** v5; // rdi
	__int64 v8; // rcx
	__int64 v11; // rbp
	int* v12; // rax
	int* v13; // r14
	int v14; // eax
	int v15; // eax
	unsigned __int64 v16; // rcx
	_WORD* v17; // rax
	unsigned __int64 v18; // rdx
	unsigned __int64 v19; // rcx
	_WORD* v20; // rax
	unsigned __int64 v21; // rdx
	bool v22; // zf
	int* v23; // rax
	__int64 v24; // rax

	v5 = (int**)(a1 + 29632);
	v8 = *(_QWORD*)(a1 + 29632);
	if (!v8)
	{
	LABEL_7:
		v11 = sub_1401FFDE0(a2);
		if (v11)
		{
			v12 = sub_14018B280(120i64, 0);
			v13 = v12;
			if (v12)
			{
				*((_QWORD*)v12 + 7) = 0i64;
				*((_QWORD*)v12 + 8) = 0i64;
				*((_QWORD*)v12 + 13) = 0i64;
				*((_QWORD*)v12 + 14) = 0i64;
			}
			else
			{
				v13 = 0i64;
			}
			*v13 = a2;
			v14 = *(_DWORD*)(v11 + 36);
			v13[4] = a4;
			v13[1] = v14;
			v13[5] = a5;
			v15 = *(_DWORD*)(v11 + 32);
			v13[3] = a3;
			v13[2] = v15;
			v13[6] = *(_DWORD*)(v11 + 40);
			v13[7] = *(_DWORD*)(v11 + 44);
			v13[8] = *(_DWORD*)(v11 + 48);
			v13[9] = *(_DWORD*)(v11 + 52);
			v13[10] = *(_DWORD*)(v11 + 56);
			v13[11] = *(_DWORD*)(v11 + 60);
			v13[12] = *(_DWORD*)(v11 + 64);
			v13[13] = *(_DWORD*)(v11 + 68);
			v16 = *(_QWORD*)(v11 + 24);
			if (!v16 || v16 > qword_140C3FE70 || !(qword_140C3FE68 + v16))
				goto LABEL_20;
			v17 = 0i64;
			if (v16 <= qword_140C3FE70)
				v17 = (_WORD*)(qword_140C3FE68 + v16);
			if (*v17)
			{
				v18 = 0i64;
				if (v16 <= qword_140C3FE70)
					v18 = qword_140C3FE68 + v16;
				(*(void(__fastcall**)(_QWORD, unsigned __int64, int*, _QWORD))(**(_QWORD**)(a1 + 29624) + 40i64))(
					*(_QWORD*)(a1 + 29624),
					v18,
					v13 + 14,
					0i64);
				(*(void(__fastcall**)(_QWORD, _QWORD * (__fastcall*)(__int64*, __int64, __int64, int, int, __int64), int*))(**((_QWORD**)v13 + 7) + 648i64))(
					*((_QWORD*)v13 + 7),
					sub_1403EB3C0,
					v13);
			}
			else
			{
			LABEL_20:
				v19 = *(_QWORD*)(v11 + 16);
				if (v19 && v19 <= qword_140C3FE70 && qword_140C3FE68 + v19)
				{
					v20 = 0i64;
					if (v19 <= qword_140C3FE70)
						v20 = (_WORD*)(qword_140C3FE68 + v19);
					if (*v20)
					{
						v21 = 0i64;
						if (v19 <= qword_140C3FE70)
							v21 = qword_140C3FE68 + v19;
						(*(void(__fastcall**)(__int64, unsigned __int64, _QWORD, __int64, int, int, _DWORD, _DWORD, int*))(*(_QWORD*)qword_140C65670 + 80i64))(
							qword_140C65670,
							v21,
							0i64,
							1i64,
							1,
							256,
							0,
							0,
							v13 + 16);
					}
				}
			}
			v22 = *((_QWORD*)v13 + 13) == 0i64;
			v13[18] = 0;
			if (v22)
			{
				if (*v5)
				{
					do
					{
						v23 = *v5;
						if ((*v5)[2] >= (unsigned int)v13[2])
							break;
						v5 = (int**)(v23 + 28);
					} while (*((_QWORD*)v23 + 14));
				}
				*((_QWORD*)v13 + 13) = v5;
				*((_QWORD*)v13 + 14) = *v5;
				*v5 = v13;
				v24 = *((_QWORD*)v13 + 14);
				if (v24)
					*(_QWORD*)(v24 + 104) = v13 + 28;
			}
		}
		return;
	}
	while (*(_DWORD*)v8 != a2)
	{
		v8 = *(_QWORD*)(v8 + 112);
		if (!v8)
			goto LABEL_7;
	}
	if (*(_DWORD*)(v8 + 72) == 3)
	{
		sub_1403E59A0((_QWORD*)v8);
		goto LABEL_7;
	}
}
// 1403EB550: conditional instruction was optimized away because rcx.8!=0
// 1403EB564: conditional instruction was optimized away because rcx.8!=0
// 1403EB5C1: conditional instruction was optimized away because rcx.8!=0
// 1403EB5D5: conditional instruction was optimized away because rcx.8!=0
// 140C3FE68: using guessed type __int64 qword_140C3FE68;
// 140C3FE70: using guessed type __int64 qword_140C3FE70;
// 140C65670: using guessed type __int64 qword_140C65670;

