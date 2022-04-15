#include "../winhttp.h"

//----- (000000014047A1F0) ----------------------------------------------------
void __fastcall sub_14047A1F0(__int64 a1)
{
	__int64 v1; // rax
	unsigned int v3; // edx
	__int64 v4; // rax
	__int64 v5; // r13
	int v6; // eax
	__int64 v7; // rcx
	int* v8; // rsi
	int* v9; // rax
	_QWORD* v10; // r15
	__int64 v11; // rax
	int* v12; // r14
	__int64 v13; // r12
	_WORD* v14; // rax
	int* v15; // rax
	_QWORD* v16; // r15
	int* v17; // r14
	__int64 v18; // rax
	__int64 v19; // r12
	_WORD* v20; // rax
	__int64 v21; // rax
	__int64 v22; // rax
	int v23; // xmm0_4
	__int64 v24; // rax
	unsigned int v25; // r15d
	__int64 v26; // r14
	_DWORD* v27; // rax
	_DWORD* v28; // rsi
	BOOL v29; // ebx
	char v30; // bl
	int v31; // eax
	int v32; // ebx
	int v33; // eax
	bool v34; // zf
	unsigned __int64 v35; // rcx
	int v36; // eax
	__int64 v37; // rcx
	_DWORD* v38; // rcx
	int v39[2]; // [rsp+20h] [rbp-E0h] BYREF
	__int64 v40; // [rsp+28h] [rbp-D8h]
	__int128 v41; // [rsp+30h] [rbp-D0h]
	__int64 v42; // [rsp+40h] [rbp-C0h] BYREF
	char v43[184]; // [rsp+48h] [rbp-B8h] BYREF
	__int64 v44; // [rsp+100h] [rbp+0h]
	unsigned int v45; // [rsp+150h] [rbp+50h]

	v1 = *(_QWORD*)(a1 + 24);
	if (v1)
	{
		v3 = *(_DWORD*)(v1 + 216);
		if (v3)
		{
			v4 = sub_1404CC070(a1, v3);
			v5 = v4;
			if (v4)
			{
				v6 = sub_140722ED0(v4, a1);
				v45 = v6;
				if (v6)
				{
					v8 = (int*)sub_14034BDD0(v7, v6);
					if (v8)
					{
						sub_1404DDE90(&v42);
						v9 = sub_14018B280(96i64, 0);
						if (v9)
							v10 = (_QWORD*)sub_1404DB7E0((__int64)v9, a1);
						else
							v10 = 0i64;
						v11 = 0i64;
						v12 = 0i64;
						v40 = 0i64;
						v41 = 0ui64;
						do
							++v11;
						while (word_140B0A7C8[v11]);
						v13 = (2 * v11) >> 1;
						if ((unsigned __int64)(v13 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
						{
							v12 = sub_14018B280(2 * (v13 + 1), 0);
							v40 = (__int64)v12;
							*(_QWORD*)&v41 = v12;
							*((_QWORD*)&v41 + 1) = (char*)v12 + 2 * v13 + 2;
						}
						sub_1407DB590(v12, (int*)word_140B0A7C8, 2 * v13);
						v14 = (_WORD*)v12 + v13;
						*(_QWORD*)&v41 = v14;
						if (v14)
							*v14 = 0;
						sub_1400B7480((__int64)&v42, v10);
						(*(void(__fastcall**)(_QWORD*, int*))(*v10 + 72i64))(v10, v39);
						if (v40)
							sub_14018B900(v40, 0);
						v15 = sub_14018B280(96i64, 0);
						if (v15)
							v16 = (_QWORD*)sub_1404DB7E0((__int64)v15, *(_QWORD*)(qword_140C65898 + 120));
						else
							v16 = 0i64;
						v17 = 0i64;
						v40 = 0i64;
						v41 = 0ui64;
						v18 = 0i64;
						do
							++v18;
						while (word_140B0A7D8[v18]);
						v19 = (2 * v18) >> 1;
						if ((unsigned __int64)(v19 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
						{
							v17 = sub_14018B280(2 * (v19 + 1), 0);
							v40 = (__int64)v17;
							*(_QWORD*)&v41 = v17;
							*((_QWORD*)&v41 + 1) = (char*)v17 + 2 * v19 + 2;
						}
						sub_1407DB590(v17, (int*)word_140B0A7D8, 2 * v19);
						v20 = (_WORD*)v17 + v19;
						*(_QWORD*)&v41 = v20;
						if (v20)
							*v20 = 0;
						sub_1400B7480((__int64)&v42, v16);
						(*(void(__fastcall**)(_QWORD*, int*))(*v16 + 72i64))(v16, v39);
						if (v40)
							sub_14018B900(v40, 0);
						v21 = 0i64;
						if (*(_WORD*)v8)
						{
							do
								++v21;
							while (*((_WORD*)v8 + v21));
						}
						sub_14001C480((__int64)v43, v8, (int*)((char*)v8 + 2 * v21));
						if ((dword_140DC3070 & 1) == 0)
						{
							dword_140DC3070 |= 1u;
							v22 = sub_140200220(0x1F4u);
							if (v22)
								v23 = *(_DWORD*)(v22 + 24);
							else
								v23 = 0;
							dword_140DC3074 = v23;
						}
						v24 = sub_1400B7660(&v42);
						sub_140475EF0(a1, *(int**)(v24 + 8), 1, *(float*)&dword_140DC3074);
						if (v44)
							sub_14018B900(v44, 0);
						sub_1400B7390(&v42);
					}
					sub_140472ED0(a1, v45);
					if ((*(_BYTE*)(a1 + 4208) & 2) == 0
						&& !*(_DWORD*)(a1 + 684)
						&& (*(_BYTE*)(*(_QWORD*)(v5 + 72) + 4i64) & 2) != 0
						&& (*(_DWORD*)(*(_QWORD*)(a1 + 24) + 144i64) & 0x10000) == 0)
					{
						sub_1405B9210((_DWORD*)a1, *(_DWORD*)(*(_QWORD*)(qword_140C65898 + 25744) + 8i64), 5000);
						sub_140470650(a1, 1, 1);
						v25 = sub_1401AE6A0(0, 0xFFFF);
						if (*(_QWORD*)(a1 + 5864))
						{
							v26 = (unsigned int)sub_140470540((_DWORD*)a1, 278);
							v27 = (_DWORD*)(*(__int64(__fastcall**)(_QWORD, __int64, _QWORD))(**(_QWORD**)(a1 + 5864) + 424i64))(
								*(_QWORD*)(a1 + 5864),
								v26,
								v25);
							v28 = v27;
							if (*v27 != 150)
							{
								v29 = *(_DWORD*)(a1 + 5160) == 63;
								sub_140471230(a1, (v27[2] & 1) == 0, v27[2] & 8);
								if ((*(_DWORD*)(a1 + 5160) == 63) == v29
									|| (v26 = (unsigned int)sub_140470540((_DWORD*)a1, 278),
										v28 = (_DWORD*)(*(__int64(__fastcall**)(_QWORD, __int64, _QWORD))(**(_QWORD**)(a1 + 5864)
											+ 424i64))(
												*(_QWORD*)(a1 + 5864),
												v26,
												v25),
										*v28 != 150))
								{
									v35 = (int)v28[4];
									if (*v28 == 278)
									{
										if (v35 >= 8)
											v36 = 9;
										else
											v36 = dword_140B670F0[v35];
									}
									else if (v35 >= 8)
									{
										v36 = 13;
									}
									else
									{
										v36 = dword_140B67110[v35];
									}
									v37 = *(_QWORD*)(a1 + 5864);
									v39[0] = v26;
									v39[1] = v25;
									LODWORD(v41) = v36;
									v40 = 1065353216i64;
									*(_QWORD*)((char*)&v41 + 4) = 2i64;
									HIDWORD(v41) = 0;
									(*(void(__fastcall**)(__int64, __int64, int*))(*(_QWORD*)v37 + 584i64))(v37, 5i64, v39);
									v38 = *(_DWORD**)(a1 + 5608);
									if (v38)
										sub_14071A9F0(v38, 1);
								}
								else
								{
									v30 = ~(unsigned __int8)*(_DWORD*)(a1 + 5160) & 0x10;
									if (*(_QWORD*)(a1 + 3264))
									{
										v31 = sub_140467ED0(a1);
										*(_DWORD*)(a1 + 5164) &= ~0x10u;
										*(_DWORD*)(a1 + 5164) |= v30 & 0x10;
										v32 = *(_DWORD*)(a1 + 5164);
										if ((v31 & 0xFFFFFFF6) == 0 && v31 != 1)
											v32 = 63;
										v33 = *(_DWORD*)(a1 + 5160);
										if (v33 != v32)
										{
											if (v32 == 63)
											{
												sub_140195D70(a1 + 5168);
												sub_140195D70(a1 + 5240);
												(*(void(__fastcall**)(_QWORD, __int64, __int64))(**(_QWORD**)(a1 + 3264) + 168i64))(
													*(_QWORD*)(a1 + 3264),
													3i64,
													3i64);
												v34 = *(_QWORD*)(a1 + 5864) == 0i64;
												*(_DWORD*)(a1 + 5312) = 1;
												if (!v34)
												{
													sub_140471EF0(a1, 1, 1);
													sub_140471EF0(a1, 1, 0);
												}
											}
											else if (v33 == 63)
											{
												v39[0] = 0;
												*(_QWORD*)&v41 = sub_140471E50;
												v40 = a1;
												*((_QWORD*)&v41 + 1) = 0i64;
												sub_140195960(a1 + 5168, 150, (__int64)v39, 4);
												*(_QWORD*)&v41 = sub_140471EA0;
												v39[0] = 0;
												v40 = a1;
												*((_QWORD*)&v41 + 1) = 0i64;
												sub_140195960(a1 + 5240, 150, (__int64)v39, 4);
												*(_DWORD*)(a1 + 5312) = 1;
											}
											if ((v32 & 4) != 0)
												sub_140195D70(a1 + 5016);
											if ((v32 & 0x10) != 0)
												sub_140195D70(a1 + 5088);
											*(_DWORD*)(a1 + 5160) = v32;
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}
// 14047A276: variable 'v7' is possibly undefined
// 140B0A7C8: using guessed type __int16 word_140B0A7C8[];
// 140B0A7D8: using guessed type __int16 word_140B0A7D8[];
// 140B670F0: using guessed type int dword_140B670F0[8];
// 140B67110: using guessed type int dword_140B67110[8];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140DC3070: using guessed type int dword_140DC3070;
// 140DC3074: using guessed type int dword_140DC3074;
// 14047A1F0: using guessed type char var_F8[184];

