#include "../winhttp.h"

//----- (000000014047CF40) ----------------------------------------------------
void __fastcall sub_14047CF40(__int64 a1, int a2)
{
	__int64 v2; // rax
	unsigned int v5; // ecx
	float* v6; // r14
	__int64 v7; // rsi
	__int64 v8; // rbx
	int* v9; // rdi
	float v10; // xmm0_4
	int v11; // ebp
	int* v12; // r14
	__int64 v13; // r12
	int v14; // r15d
	int* v15; // rax
	int* v16; // rbp
	int* v17; // r14
	__int64 v18; // r12
	int v19; // r15d
	int* v20; // rax
	int* v21; // rbp
	int* v22; // r14
	__int64 v23; // r12
	int v24; // r15d
	int* v25; // rax
	int* v26; // rbp
	unsigned int v27; // r13d
	__int64 v28; // rcx
	__int16* v29; // rax
	int* v30; // r14
	__int64 v31; // rcx
	int* v32; // rax
	_QWORD* v33; // rbp
	__int64 v34; // rax
	int* v35; // r15
	__int64 v36; // r12
	int* v37; // rax
	__int64 v38; // rax
	char v39[8]; // [rsp+20h] [rbp-128h] BYREF
	int* v40; // [rsp+28h] [rbp-120h]
	int* v41; // [rsp+30h] [rbp-118h]
	__int64 v42; // [rsp+38h] [rbp-110h]
	__int64 v43; // [rsp+40h] [rbp-108h] BYREF
	char v44[184]; // [rsp+48h] [rbp-100h] BYREF
	__int64 v45; // [rsp+100h] [rbp-48h]

	v2 = *(_QWORD*)(a1 + 24);
	if (v2)
	{
		v5 = *(_DWORD*)(v2 + 220);
		if (v5)
		{
			if (a2 < 3 && (!*(_DWORD*)(a1 + 592) && !*(_DWORD*)(a1 + 596) || a2 == 1))
			{
				v6 = (float*)sub_1401F7E60(v5);
				if (v6)
				{
					v7 = 0i64;
					v8 = 0i64;
					v9 = 0i64;
					v10 = sub_1401AE760(0.0, 100.0);
					if (a2)
					{
						v11 = a2 - 1;
						if (v11)
						{
							if (v11 != 1)
							{
							LABEL_61:
								if (v9)
									(*(void(__fastcall**)(int*))(*((_QWORD*)v9 - 2) + 8i64))(v9 - 4);
								return;
							}
							if (v10 > v6[15])
								return;
							v12 = (int*)(v6 + 11);
							v13 = 4i64;
							do
							{
								v14 = *v12;
								if (*v12)
								{
									v15 = sub_14018DB00((__int64)v9, v8 + 1, 4i64);
									v15[v8] = v14;
									v16 = v15;
									if (v9 != v15)
									{
										sub_1407DB590(v15, v9, 4 * v8);
										if (v9)
											(*(void(__fastcall**)(int*))(*((_QWORD*)v9 - 2) + 8i64))(v9 - 4);
										v9 = v16;
									}
									++v8;
								}
								++v12;
								--v13;
							} while (v13);
						}
						else
						{
							if (v10 > v6[10])
								return;
							v17 = (int*)(v6 + 6);
							v18 = 4i64;
							do
							{
								v19 = *v17;
								if (*v17)
								{
									v20 = sub_14018DB00((__int64)v9, v8 + 1, 4i64);
									v20[v8] = v19;
									v21 = v20;
									if (v9 != v20)
									{
										sub_1407DB590(v20, v9, 4 * v8);
										if (v9)
											(*(void(__fastcall**)(int*))(*((_QWORD*)v9 - 2) + 8i64))(v9 - 4);
										v9 = v21;
									}
									++v8;
								}
								++v17;
								--v18;
							} while (v18);
						}
					}
					else
					{
						if (v10 > v6[5])
							return;
						v22 = (int*)(v6 + 1);
						v23 = 4i64;
						do
						{
							v24 = *v22;
							if (*v22)
							{
								v25 = sub_14018DB00((__int64)v9, v8 + 1, 4i64);
								v25[v8] = v24;
								v26 = v25;
								if (v9 != v25)
								{
									sub_1407DB590(v25, v9, 4 * v8);
									if (v9)
										(*(void(__fastcall**)(int*))(*((_QWORD*)v9 - 2) + 8i64))(v9 - 4);
									v9 = v26;
								}
								++v8;
							}
							++v22;
							--v23;
						} while (v23);
					}
					if ((_DWORD)v8)
					{
						v27 = v9[(unsigned int)sub_1401AE6F0(0, (int)v8 - 1)];
						v29 = sub_14034BDD0(v28, v27);
						v30 = (int*)v29;
						if (v29)
						{
							v31 = 0i64;
							if (*v29)
							{
								do
									++v31;
								while (v29[v31]);
								if (v31)
								{
									sub_1404DDE90(&v43);
									v32 = sub_14018B280(96i64, 0);
									if (v32)
										v33 = (_QWORD*)sub_1404DB7E0((__int64)v32, a1);
									else
										v33 = 0i64;
									v34 = 0i64;
									v35 = 0i64;
									v40 = 0i64;
									v41 = 0i64;
									v42 = 0i64;
									do
										++v34;
									while (word_140B0A7C8[v34]);
									v36 = (2 * v34) >> 1;
									if ((unsigned __int64)(v36 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
									{
										v35 = sub_14018B280(2 * (v36 + 1), 0);
										v40 = v35;
										v41 = v35;
										v42 = (__int64)v35 + 2 * v36 + 2;
									}
									sub_1407DB590(v35, (int*)word_140B0A7C8, 2 * v36);
									v37 = (int*)((char*)v35 + 2 * v36);
									v41 = v37;
									if (v37)
										*(_WORD*)v37 = 0;
									sub_1400B7480((__int64)&v43, v33);
									(*(void(__fastcall**)(_QWORD*, char*))(*v33 + 72i64))(v33, v39);
									if (v40)
										sub_14018B900((__int64)v40, 0);
									if (*(_WORD*)v30)
									{
										do
											++v7;
										while (*((_WORD*)v30 + v7));
									}
									sub_14001C480((__int64)v44, v30, (int*)((char*)v30 + 2 * v7));
									v38 = sub_1400B7660(&v43);
									sub_140475EF0(a1, *(int**)(v38 + 8), 1, 0.0);
									sub_140472ED0(a1, v27);
									if (v45)
										sub_14018B900(v45, 0);
									sub_1400B7390(&v43);
								}
							}
						}
					}
					goto LABEL_61;
				}
			}
		}
	}
}
// 14047D173: variable 'v28' is possibly undefined
// 140B0A7C8: using guessed type __int16 word_140B0A7C8[];
// 14047CF40: using guessed type char var_128[8];
// 14047CF40: using guessed type char var_100[184];

