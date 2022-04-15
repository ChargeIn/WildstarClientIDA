#include "../winhttp.h"

//----- (000000014002CE60) ----------------------------------------------------
__int64* __fastcall sub_14002CE60(__int64* a1)
{
	__int64* v1; // r15
	__int64 v2; // rcx
	__int64 v3; // rax
	__int64 v4; // rax
	__int64 v5; // r13
	__int64 v6; // rdi
	const wchar_t* v7; // rbx
	wchar_t* v8; // rax
	int v9; // edx
	bool v10; // zf
	__int64 v11; // rax
	int* v12; // rbx
	int* v13; // rax
	int* v14; // r14
	__int64 v15; // rcx
	int* v16; // rax
	__int64 v17; // rbp
	__int64 v18; // rdi
	const wchar_t* v19; // rbx
	wchar_t* v20; // rax
	int v21; // edx
	bool v22; // zf
	int* v23; // rbx
	int* v24; // rax
	_QWORD* v25; // rsi
	int v26; // edi
	__int64* v27; // rbx
	__int64 v28; // rax
	int* v29; // rax
	__int64 v30; // rbx
	int* v31; // rax
	__int64 v32; // rdi
	const wchar_t* v33; // rbx
	wchar_t* v34; // rax
	int v35; // edx
	bool v36; // zf
	int* v37; // rbx
	int* v38; // rax
	int* v39; // rdi
	int* v40; // rsi
	int* v41; // rax
	int* v42; // rax
	__int64 v43; // rax
	__int64 v44; // rbx
	int* v45; // rax
	__int64 v46; // rbx
	int* v47; // rax
	__int64 v49[16]; // [rsp+20h] [rbp-C8h] BYREF
	int v50; // [rsp+A0h] [rbp-48h]
	__int64 i; // [rsp+F8h] [rbp+10h]

	v1 = a1;
	v2 = *a1;
	if (v2)
	{
		v50 = -1;
		sub_14012A290(v2);
		v3 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)*v1 + 16i64))(*v1);
		v4 = sub_1401A5AE0(v3, L"Credits");
		if (v4)
		{
			v5 = sub_1401A5AE0(v4, L"Group");
			for (i = v5; v5; i = v5)
			{
				v6 = *(_QWORD*)(v5 + 96);
				if (v6)
				{
					while (1)
					{
						v7 = L"Name";
						v8 = (wchar_t*)sub_1401A4F40(v6 + 8);
						if (v8 == L"Name")
							break;
						v9 = 0;
						if (*v8)
						{
							do
							{
								if (!*v7 || *v8 != *v7)
									break;
								v10 = v9 == 0x7FFFFFFF;
								if (v9 == 0x7FFFFFFF)
									goto LABEL_12;
								++v8;
								++v7;
								++v9;
							} while (*v8);
							v10 = v9 == 0x7FFFFFFF;
						LABEL_12:
							if (v10)
								break;
						}
						if (!*v8 && !*v7)
							break;
						v6 = *(_QWORD*)(v6 + 56);
						if (!v6)
							goto LABEL_16;
					}
					v11 = sub_1401A4F40(v6 + 32);
				}
				else
				{
				LABEL_16:
					v11 = 0i64;
				}
				v12 = (int*)&unk_1409D0D84;
				if (v11)
					v12 = (int*)v11;
				v13 = sub_14018B280(48i64, 0);
				v14 = v13;
				if (v13)
				{
					v15 = 0i64;
					*((_QWORD*)v13 + 1) = 0i64;
					*((_QWORD*)v13 + 2) = 0i64;
					*((_QWORD*)v13 + 3) = 0i64;
					if (*(_WORD*)v12)
					{
						do
							++v15;
						while (*((_WORD*)v12 + v15));
					}
					sub_14001C1B0(v13, v12, (__int64)v12 + 2 * v15);
					v16 = sub_14018B280(24i64, 0);
					*((_QWORD*)v14 + 5) = v16;
					*(_QWORD*)v16 = v16;
					*(_QWORD*)(*((_QWORD*)v14 + 5) + 8i64) = *((_QWORD*)v14 + 5);
				}
				else
				{
					v14 = 0i64;
				}
				v17 = sub_1401A5AE0(v5, L"Credit");
				if (v17)
				{
					do
					{
						v18 = *(_QWORD*)(v17 + 96);
						if (v18)
						{
							while (1)
							{
								v19 = L"Person";
								v20 = (wchar_t*)sub_1401A4F40(v18 + 8);
								if (v20 == L"Person")
									break;
								v21 = 0;
								if (*v20)
								{
									do
									{
										if (!*v19 || *v20 != *v19)
											break;
										v22 = v21 == 0x7FFFFFFF;
										if (v21 == 0x7FFFFFFF)
											goto LABEL_34;
										++v20;
										++v19;
										++v21;
									} while (*v20);
									v22 = v21 == 0x7FFFFFFF;
								LABEL_34:
									if (v22)
										break;
								}
								if (!*v20 && !*v19)
									break;
								v18 = *(_QWORD*)(v18 + 56);
								if (!v18)
									goto LABEL_50;
							}
							v23 = (int*)sub_1401A4F40(v18 + 32);
							if (v23)
							{
								v24 = sub_14018B280(80i64, 0);
								if (v24)
									v25 = sub_14002CA40(v24, v23);
								else
									v25 = 0i64;
								v49[0] = (__int64)L"Title";
								v49[1] = (__int64)L"Title2";
								v49[2] = (__int64)L"Title3";
								v26 = 0;
								v49[3] = (__int64)L"Title4";
								v27 = v49;
								v49[4] = (__int64)L"Title5";
								v49[5] = (__int64)L"Title6";
								v49[6] = (__int64)L"Title7";
								v49[7] = (__int64)L"Title8";
								v49[8] = (__int64)L"Title9";
								v49[9] = (__int64)L"Title10";
								v49[10] = (__int64)L"Title11";
								v49[11] = (__int64)L"Title12";
								v49[12] = (__int64)L"Title13";
								v49[13] = (__int64)L"Title14";
								v49[14] = (__int64)L"Title15";
								v49[15] = (__int64)L"Title16";
								do
								{
									v28 = sub_1401A6B80(v17, (_WORD*)*v27);
									if (!v28)
										break;
									v29 = (int*)sub_1401A4F40(v28 + 32);
									if (!v29)
										break;
									sub_14002CAD0((__int64)v25, v29);
									++v26;
									++v27;
								} while ((unsigned __int64)v26 < 0x10);
								v30 = *((_QWORD*)v14 + 5);
								v31 = sub_14018B280(24i64, 0);
								if (v31 != (int*)-16i64)
									*((_QWORD*)v31 + 2) = v25;
								*(_QWORD*)v31 = v30;
								*((_QWORD*)v31 + 1) = *(_QWORD*)(v30 + 8);
								**(_QWORD**)(v30 + 8) = v31;
								*(_QWORD*)(v30 + 8) = v31;
							}
						}
					LABEL_50:
						v32 = *(_QWORD*)(v17 + 96);
						if (v32)
						{
							while (1)
							{
								v33 = L"Image";
								v34 = (wchar_t*)sub_1401A4F40(v32 + 8);
								if (v34 == L"Image")
									break;
								v35 = 0;
								if (*v34)
								{
									do
									{
										if (!*v33 || *v34 != *v33)
											break;
										v36 = v35 == 0x7FFFFFFF;
										if (v35 == 0x7FFFFFFF)
											goto LABEL_58;
										++v34;
										++v33;
										++v35;
									} while (*v34);
									v36 = v35 == 0x7FFFFFFF;
								LABEL_58:
									if (v36)
										break;
								}
								if (!*v34 && !*v33)
									break;
								v32 = *(_QWORD*)(v32 + 56);
								if (!v32)
									goto LABEL_76;
							}
							v37 = (int*)sub_1401A4F40(v32 + 32);
							if (v37)
							{
								v38 = sub_14018B280(80i64, 0);
								v39 = v38;
								if (v38)
								{
									*((_QWORD*)v38 + 1) = 0i64;
									*((_QWORD*)v38 + 2) = 0i64;
									*((_QWORD*)v38 + 3) = 0i64;
									v40 = sub_14018B280(2i64, 0);
									*((_QWORD*)v39 + 1) = v40;
									*((_QWORD*)v39 + 3) = (char*)v40 + 2;
									*((_QWORD*)v39 + 2) = v40;
									sub_1407DB590(v40, (int*)&unk_1409D0DA4, 0i64);
									*((_QWORD*)v39 + 2) = v40;
									if (v40)
										*(_WORD*)v40 = 0;
									*((_QWORD*)v39 + 5) = 0i64;
									*((_QWORD*)v39 + 6) = 0i64;
									*((_QWORD*)v39 + 7) = 0i64;
									v41 = sub_14018B280(16i64, 0);
									*((_QWORD*)v39 + 5) = v41;
									*((_QWORD*)v39 + 6) = v41;
									*((_QWORD*)v39 + 7) = v41 + 4;
									if (v41)
										*(_WORD*)v41 = 0;
									v42 = sub_14018B280(48i64, 0);
									*((_QWORD*)v39 + 9) = v42;
									*(_QWORD*)v42 = v42;
									*(_QWORD*)(*((_QWORD*)v39 + 9) + 8i64) = *((_QWORD*)v39 + 9);
								}
								else
								{
									v39 = 0i64;
								}
								v43 = 0i64;
								if (*(_WORD*)v37)
								{
									do
										++v43;
									while (*((_WORD*)v37 + v43));
								}
								sub_14001C480((__int64)(v39 + 8), v37, (int*)((char*)v37 + 2 * v43));
								v44 = *((_QWORD*)v14 + 5);
								v45 = sub_14018B280(24i64, 0);
								if (v45 != (int*)-16i64)
									*((_QWORD*)v45 + 2) = v39;
								*(_QWORD*)v45 = v44;
								*((_QWORD*)v45 + 1) = *(_QWORD*)(v44 + 8);
								**(_QWORD**)(v44 + 8) = v45;
								*(_QWORD*)(v44 + 8) = v45;
							}
						}
					LABEL_76:
						v17 = sub_1401A5BC0(v17, L"Credit");
					} while (v17);
					v1 = a1;
					v5 = i;
				}
				v46 = v1[2];
				v47 = sub_14018B280(24i64, 0);
				if (v47 != (int*)-16i64)
					*((_QWORD*)v47 + 2) = v14;
				*(_QWORD*)v47 = v46;
				*((_QWORD*)v47 + 1) = *(_QWORD*)(v46 + 8);
				**(_QWORD**)(v46 + 8) = v47;
				*(_QWORD*)(v46 + 8) = v47;
				v5 = sub_1401A5BC0(v5, L"Group");
			}
		}
		if (*v1)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)*v1 + 8i64))(*v1);
			*v1 = 0i64;
		}
	}
	return v1 + 1;
}
// 14002D007: conditional instruction was optimized away because rdi.8!=0
// 14002D0BE: conditional instruction was optimized away because rdi.8!=0
// 14002D2AA: conditional instruction was optimized away because rdi.8!=0
// 1409EEA78: using guessed type wchar_t aGroup[6];
// 1409EEA88: using guessed type wchar_t aCredits_0[8];
// 1409EEA98: using guessed type wchar_t aGroup_0[6];
// 1409EEAA8: using guessed type wchar_t aCredit[7];
// 1409EEAB8: using guessed type wchar_t aName_1[5];
// 1409EEAC8: using guessed type wchar_t aPerson[7];
// 1409EEAD8: using guessed type wchar_t aCredit_0[7];
// 1409EEAE8: using guessed type wchar_t aTitle2[7];
// 1409EEAF8: using guessed type wchar_t aTitle[6];
// 1409EEB08: using guessed type wchar_t aTitle4[7];
// 1409EEB18: using guessed type wchar_t aTitle3[7];
// 1409EEB28: using guessed type wchar_t aTitle6[7];
// 1409EEB38: using guessed type wchar_t aTitle5[7];
// 1409EEB48: using guessed type wchar_t aTitle8[7];
// 1409EEB58: using guessed type wchar_t aTitle7[7];
// 1409EEB68: using guessed type wchar_t aTitle10[8];
// 1409EEB78: using guessed type wchar_t aTitle9[7];
// 1409EEB88: using guessed type wchar_t aTitle12[8];
// 1409EEB98: using guessed type wchar_t aTitle11[8];
// 1409EEBA8: using guessed type wchar_t aTitle14[8];
// 1409EEBB8: using guessed type wchar_t aTitle13[8];
// 1409EEBC8: using guessed type wchar_t aTitle16[8];
// 1409EEBD8: using guessed type wchar_t aTitle15[8];
// 1409EEBE8: using guessed type wchar_t aImage[6];

