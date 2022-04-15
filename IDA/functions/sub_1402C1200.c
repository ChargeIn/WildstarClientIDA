#include "../winhttp.h"

//----- (00000001402C1200) ----------------------------------------------------
__int64 __fastcall sub_1402C1200(__int64 a1, unsigned __int64 a2, _QWORD* a3, __int64 a4)
{
	__int64 v5; // rsi
	__int64* v8; // r12
	unsigned __int64 v9; // r13
	__int64 v10; // r10
	unsigned __int64 v11; // r15
	int v12; // eax
	int v13; // ebx
	int v14; // eax
	bool v15; // zf
	__int64 v16; // rax
	int* v17; // rbx
	int* v18; // rdi
	unsigned __int64* v19; // rsi
	unsigned __int64 v20; // r14
	unsigned __int64 v21; // rcx
	unsigned __int64 v22; // rax
	unsigned __int64* v23; // r9
	unsigned __int64 v24; // r14
	__int64 v25; // rsi
	__int64 v26; // r8
	__int64 v27; // rax
	__int64 v28; // rbx
	unsigned __int64 v29; // rdi
	int v30; // eax
	__int64 v31; // rax
	__int64 v32; // rbx
	__int64 v33; // rdi
	unsigned int v34; // eax
	int v35; // [rsp+28h] [rbp-61h]
	__int64 v36; // [rsp+30h] [rbp-59h]
	unsigned __int64* v37; // [rsp+40h] [rbp-49h] BYREF
	__int64* v38; // [rsp+48h] [rbp-41h] BYREF
	__int64 v39; // [rsp+50h] [rbp-39h] BYREF
	__int64 v40; // [rsp+58h] [rbp-31h] BYREF
	__int64 v41; // [rsp+60h] [rbp-29h] BYREF
	_QWORD* v42; // [rsp+68h] [rbp-21h]
	int v43; // [rsp+70h] [rbp-19h] BYREF
	unsigned __int64 v44; // [rsp+78h] [rbp-11h]
	__int64 v45; // [rsp+80h] [rbp-9h]
	__int64 v46[2]; // [rsp+88h] [rbp-1h] BYREF

	v15 = *(_QWORD*)(a4 + 80) == 0i64;
	v5 = a4;
	v45 = a4;
	v44 = a2;
	v42 = a3;
	if (v15)
		return 2147500035i64;
	v8 = (__int64*)sub_1402B21E0();
	if (!v8)
		return 2147500034i64;
	v9 = *(_QWORD*)a1;
	v41 = 0i64;
	v10 = *v8;
	v37 = (unsigned __int64*)(a1 + 24);
	v11 = *(_QWORD*)(a1 + 8);
	v36 = *(_QWORD*)(a1 + 40);
	v35 = *(_DWORD*)(a1 + 32);
	v12 = *(_DWORD*)(a1 + 24);
	v38 = (__int64*)v9;
	v13 = (*(__int64(__fastcall**)(__int64*, _QWORD, _QWORD, _QWORD*, int, int, __int64, __int64*))(v10 + 160))(
		v8,
		(unsigned int)v9,
		(unsigned int)v11,
		a3,
		v12,
		v35,
		v36,
		&v41);
	if (v13 >= 0)
	{
		if (*(_QWORD*)(v5 + 48))
		{
			v14 = *(_DWORD*)(v5 + 68);
			if (v14 >= 2)
			{
				if (v14 <= 3)
				{
					v15 = *(_QWORD*)(v5 + 40) == 0i64;
					goto LABEL_12;
				}
				if (v14 == 4)
				{
					v15 = *(_QWORD*)(v5 + 32) == 0i64;
				LABEL_12:
					if (!v15)
					{
						v16 = *(_QWORD*)(v5 + 72);
						if (v16)
						{
							v17 = *(int**)(v16 + 40);
							if (v17)
							{
								v18 = *(int**)(a1 + 40);
								if (v11)
								{
									v19 = (unsigned __int64*)(v16 + 24);
									v20 = v11;
									v21 = *v37;
									v22 = *(_QWORD*)(v16 + 24);
									do
									{
										v23 = v19;
										if (v21 < v22)
											v23 = v37;
										sub_1407E15B8(v17, v22, v18, *v23);
										v21 = *v37;
										v22 = *v19;
										v18 = (int*)((char*)v18 + *v37);
										v17 = (int*)((char*)v17 + *v19);
										--v20;
									} while (v20);
									v9 = (unsigned __int64)v38;
									v5 = v45;
								}
								v39 = 0i64;
								v13 = (*(__int64(__fastcall**)(__int64*, _QWORD*, __int64*))(*v8 + 48))(v8, v42, &v39);
								if (v13 >= 0)
								{
									v40 = 0i64;
									v13 = (**(__int64(__fastcall***)(__int64, void*, __int64*))v39)(v39, &unk_140B62578, &v40);
									if (v13 >= 0)
									{
										v43 = 0;
										v13 = (*(__int64(__fastcall**)(__int64, int*))(*(_QWORD*)v40 + 128i64))(v40, &v43);
										if (v13 >= 0)
										{
											v24 = 1i64;
											if (v44 <= 1)
											{
											LABEL_45:
												v13 = 0;
											}
											else
											{
												while (1)
												{
													v25 = sub_1402B3540(v5, v24, 0i64, 0i64);
													if (!v25)
													{
														v13 = -2147467261;
														goto LABEL_46;
													}
													if (v11 > 1)
														v11 >>= 1;
													if (v9 > 1)
														v9 >>= 1;
													v27 = *v8;
													v37 = (unsigned __int64*)v26;
													v13 = (*(__int64(__fastcall**)(__int64*, unsigned __int64**))(v27 + 88))(v8, &v37);
													if (v13 < 0)
														break;
													v28 = (__int64)v37;
													v29 = *v37;
													v30 = sub_1402B7210(0x400000);
													v13 = (*(__int64(__fastcall**)(__int64, __int64, _QWORD, _QWORD, int))(v29 + 64))(
														v28,
														v41,
														(unsigned int)v9,
														(unsigned int)v11,
														v30);
													if (v13 < 0)
														break;
													v13 = (*(__int64(__fastcall**)(unsigned __int64*, __int64*))(*v37 + 32))(v37, v46);
													if (v13 < 0)
														break;
													if (v46[0] == *v42 && v46[1] == v42[1])
													{
														v13 = (*(__int64(__fastcall**)(unsigned __int64*, _QWORD, _QWORD, _QWORD, _QWORD))(*v37 + 56))(
															v37,
															0i64,
															*(unsigned int*)(v25 + 24),
															*(unsigned int*)(v25 + 32),
															*(_QWORD*)(v25 + 40));
														if (v13 < 0)
															break;
													}
													else
													{
														v31 = *v8;
														v38 = 0i64;
														v13 = (*(__int64(__fastcall**)(__int64*, __int64**))(v31 + 80))(v8, &v38);
														if (v13 < 0
															|| (v32 = (__int64)v38,
																v33 = *v38,
																v34 = sub_1402B71E0(0x400000),
																v13 = (*(__int64(__fastcall**)(__int64, unsigned __int64*, _QWORD*, _QWORD, _QWORD, _QWORD, _DWORD))(v33 + 64))(
																	v32,
																	v37,
																	v42,
																	v34,
																	0i64,
																	0i64,
																	0),
																v13 < 0)
															|| (v13 = (*(__int64(__fastcall**)(__int64*, _QWORD, _QWORD, _QWORD, _QWORD))(*v38 + 56))(
																v38,
																0i64,
																*(unsigned int*)(v25 + 24),
																*(unsigned int*)(v25 + 32),
																*(_QWORD*)(v25 + 40)),
																v13 < 0))
														{
															if (v38)
															{
																(*(void(__fastcall**)(__int64*))(*v38 + 16))(v38);
																v38 = 0i64;
															}
															break;
														}
														if (v38)
														{
															(*(void(__fastcall**)(__int64*))(*v38 + 16))(v38);
															v38 = 0i64;
														}
													}
													if (v37)
														(*(void(__fastcall**)(unsigned __int64*))(*v37 + 16))(v37);
													v5 = v45;
													if (++v24 >= v44)
														goto LABEL_45;
												}
												if (v37)
													(*(void(__fastcall**)(unsigned __int64*))(*v37 + 16))(v37);
											}
										}
									}
								LABEL_46:
									if (v40)
									{
										(*(void(__fastcall**)(__int64))(*(_QWORD*)v40 + 16i64))(v40);
										v40 = 0i64;
									}
								}
								if (v39)
								{
									(*(void(__fastcall**)(__int64))(*(_QWORD*)v39 + 16i64))(v39);
									v39 = 0i64;
								}
								goto LABEL_56;
							}
						}
					}
				}
			}
		}
		v13 = -2147467261;
	}
LABEL_56:
	if (v41)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v41 + 16i64))(v41);
	return (unsigned int)v13;
}
// 1402C144A: variable 'v26' is possibly undefined

