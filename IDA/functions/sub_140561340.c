#include "../winhttp.h"

//----- (0000000140561340) ----------------------------------------------------
__int64 __fastcall sub_140561340(__int64 a1)
{
	unsigned int v2; // eax
	unsigned int v3; // r12d
	unsigned int i; // ebp
	__int64 v5; // rax
	__int64 v6; // rbx
	int* v7; // r15
	unsigned __int64 v8; // rcx
	unsigned __int64 v9; // rax
	__int64 v10; // r8
	__int64 v11; // rax
	__int64 v12; // rcx
	__int64* v13; // rax
	__int64 v14; // rax
	int* v15; // rax
	__int64* v16; // r14
	__int64 v17; // r9
	unsigned int v18; // r8d
	__int64 v19; // rcx
	__int64 v20; // rbx
	bool v21; // al
	__int64 v22; // rdx
	__int64 j; // rax
	__int64 v24; // rax
	int* v25; // rcx
	__int64 v26; // rax
	__int64 v27; // rax
	__int64 v28; // rbx
	int* v29; // rax
	__int64 v30; // rcx
	int* v31; // rdi
	_QWORD* v32; // rdx
	__int64 v34[2]; // [rsp+30h] [rbp-48h] BYREF
	__int64 v35; // [rsp+88h] [rbp+10h] BYREF
	__int64 v36; // [rsp+90h] [rbp+18h] BYREF
	int* v37; // [rsp+98h] [rbp+20h] BYREF

	if (qword_140C63838)
	{
		v2 = qword_140C63838(off_140A6D5B0, qword_140C63858);
	}
	else
	{
		if (dword_140C65130)
		{
			v3 = 0;
			goto LABEL_9;
		}
		if ((int)sub_14023C4E0() < 0)
		{
			v3 = 0;
			goto LABEL_9;
		}
		v2 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C63BD8 + 40i64))(qword_140C63BD8);
	}
	v3 = v2;
LABEL_9:
	for (i = 0; i < v3; ++i)
	{
		if (qword_140C63848)
		{
			v5 = qword_140C63848(off_140A6D5B0, i, qword_140C63858);
		}
		else
		{
			if (dword_140C65130 || (int)sub_14023C4E0() < 0)
				continue;
			v5 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63BD8 + 32i64))(qword_140C63BD8, i);
		}
		v6 = v5;
		if (v5)
		{
			v7 = sub_14018B280(56i64, 0);
			if (v7)
			{
				*(_QWORD*)v7 = 0i64;
				*((_QWORD*)v7 + 1) = 0i64;
				*((_QWORD*)v7 + 2) = 0i64;
				*((_QWORD*)v7 + 3) = 0i64;
				v7[8] = 0;
			}
			else
			{
				v7 = 0i64;
			}
			*v7 = *(_DWORD*)(v6 + 4);
			v7[1] = *(_DWORD*)(v6 + 8);
			v7[3] = *(_DWORD*)(v6 + 12);
			v7[4] = *(_DWORD*)(v6 + 16);
			v7[5] = *(_DWORD*)(v6 + 20);
			v7[7] = *(_DWORD*)(v6 + 28);
			v7[6] = *(_DWORD*)(v6 + 24);
			v7[8] = *(_DWORD*)(v6 + 32);
			v7[9] = *(_DWORD*)(v6 + 36);
			v8 = *(_QWORD*)(v6 + 40);
			if (v8)
			{
				if (v8 <= qword_140C3FE70)
					v9 = v8 + qword_140C3FE68;
				else
					v9 = 0i64;
			}
			else
			{
				v9 = 0i64;
			}
			*((_QWORD*)v7 + 5) = v9;
			v7[12] = *(_DWORD*)(v6 + 48);
			v10 = *(_QWORD*)(a1 + 1928);
			v11 = *(_QWORD*)(v10 + 8);
			v12 = v10;
			while (v11)
			{
				if (*(_DWORD*)(v11 + 32) < *(_DWORD*)(v6 + 4))
				{
					v11 = *(_QWORD*)(v11 + 24);
				}
				else
				{
					v12 = v11;
					v11 = *(_QWORD*)(v11 + 16);
				}
			}
			if (v12 == v10 || *(_DWORD*)(v6 + 4) < *(_DWORD*)(v12 + 32))
			{
				v36 = *(_QWORD*)(a1 + 1928);
				v13 = &v36;
			}
			else
			{
				v35 = v12;
				v13 = &v35;
			}
			v14 = *v13;
			if (v14 == *(_QWORD*)(a1 + 1928))
			{
				v15 = sub_14018B280(16i64, 0);
				v16 = (__int64*)v15;
				if (v15)
				{
					*((_QWORD*)v15 + 1) = 0i64;
					*(_QWORD*)v15 = 0i64;
				}
				else
				{
					v16 = 0i64;
				}
				v17 = *(_QWORD*)(a1 + 1928);
				v18 = *(_DWORD*)(v6 + 4);
				v34[1] = (__int64)v16;
				v19 = *(_QWORD*)(v17 + 8);
				LODWORD(v34[0]) = v18;
				v20 = v17;
				v21 = 1;
				while (v19)
				{
					v20 = v19;
					v21 = v18 < *(_DWORD*)(v19 + 32);
					if (v18 >= *(_DWORD*)(v19 + 32))
						v19 = *(_QWORD*)(v19 + 24);
					else
						v19 = *(_QWORD*)(v19 + 16);
				}
				v22 = v20;
				if (v21)
				{
					if (v20 == *(_QWORD*)(v17 + 16))
					{
						sub_140055E80(a1 + 1920, &v37, v19, v20, v34);
					LABEL_69:
						v28 = v16[1];
						v29 = sub_14018DB00(*v16, v28 + 1, 8i64);
						v31 = v29;
						*(_QWORD*)&v29[2 * v28] = v7;
						if ((int*)*v16 != v29)
						{
							sub_1407DB590(v29, (int*)*v16, 8 * v16[1]);
							v30 = *v16;
							if (*v16)
								(*(void(__fastcall**)(__int64))(*(_QWORD*)(v30 - 16) + 8i64))(v30 - 16);
							*v16 = (__int64)v31;
						}
						v32 = (_QWORD*)*v16;
						v16[1] = v28 + 1;
						sub_140566940(v30, v32, v28 + 1);
						continue;
					}
					if (*(_BYTE*)v20 || *(_QWORD*)(*(_QWORD*)(v20 + 8) + 8i64) != v20)
					{
						v22 = *(_QWORD*)(v20 + 16);
						if (v22)
						{
							for (j = *(_QWORD*)(v22 + 24); j; j = *(_QWORD*)(j + 24))
								v22 = j;
						}
						else
						{
							v22 = *(_QWORD*)(v20 + 8);
							if (v20 == *(_QWORD*)(v22 + 16))
							{
								do
								{
									v24 = v22;
									v22 = *(_QWORD*)(v22 + 8);
								} while (v24 == *(_QWORD*)(v22 + 16));
							}
						}
					}
					else
					{
						v22 = *(_QWORD*)(v20 + 24);
					}
				}
				if (*(_DWORD*)(v22 + 32) < v18)
				{
					if (v20 == v17 || v18 < *(_DWORD*)(v20 + 32))
					{
						v25 = sub_14018B280(48i64, 0);
						if (v25 != (int*)-32i64)
						{
							*((_QWORD*)v25 + 4) = v34[0];
							*((_QWORD*)v25 + 5) = v16;
						}
						*(_QWORD*)(v20 + 16) = v25;
						v27 = *(_QWORD*)(a1 + 1928);
						if (v20 == v27)
						{
							*(_QWORD*)(v27 + 8) = v25;
							*(_QWORD*)(*(_QWORD*)(a1 + 1928) + 24i64) = v25;
						}
						else if (v20 == *(_QWORD*)(v27 + 16))
						{
							*(_QWORD*)(v27 + 16) = v25;
						}
					}
					else
					{
						v25 = sub_14018B280(48i64, 0);
						if (v25 != (int*)-32i64)
						{
							*((_QWORD*)v25 + 4) = v34[0];
							*((_QWORD*)v25 + 5) = v16;
						}
						*(_QWORD*)(v20 + 24) = v25;
						v26 = *(_QWORD*)(a1 + 1928);
						if (v20 == *(_QWORD*)(v26 + 24))
							*(_QWORD*)(v26 + 24) = v25;
					}
					*((_QWORD*)v25 + 1) = v20;
					*((_QWORD*)v25 + 2) = 0i64;
					*((_QWORD*)v25 + 3) = 0i64;
					sub_1400081C0((__int64)v25, (_QWORD*)(*(_QWORD*)(a1 + 1928) + 8i64));
					++* (_QWORD*)(a1 + 1936);
				}
				goto LABEL_69;
			}
			v16 = *(__int64**)(v14 + 40);
			goto LABEL_69;
		}
	}
	return 0i64;
}
// 14056162F: conditional instruction was optimized away because rcx.8==0
// 14056172F: variable 'v30' is possibly undefined
// 140A6D5B0: using guessed type wchar_t *off_140A6D5B0[2];
// 140C3FE68: using guessed type __int64 qword_140C3FE68;
// 140C3FE70: using guessed type __int64 qword_140C3FE70;
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63BD8: using guessed type __int64 qword_140C63BD8;
// 140C65130: using guessed type int dword_140C65130;

