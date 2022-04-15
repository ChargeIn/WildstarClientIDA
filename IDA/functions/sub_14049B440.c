//----- (000000014049B440) ----------------------------------------------------
__int64 __fastcall sub_14049B440(_QWORD* a1)
{
	unsigned int v2; // eax
	unsigned int v3; // edi
	__int64 v4; // rax
	_DWORD* v5; // rbx
	__int64 v6; // r15
	unsigned int v7; // r14d
	__int64 v8; // r12
	unsigned int v9; // ebx
	__int64 v10; // rax
	_DWORD* v11; // rdi
	__int64 v12; // r8
	__int64 v13; // rcx
	__int64 v14; // rax
	__int64* v15; // rax
	__int64 v16; // rax
	int* v17; // rbx
	unsigned int v18; // eax
	unsigned int v19; // edi
	unsigned int v20; // ebx
	_DWORD* v21; // rax
	__int64 v22; // rcx
	unsigned int v23; // eax
	unsigned int v24; // r13d
	unsigned int v25; // r12d
	__int64 v26; // rax
	__int64 v27; // rdi
	unsigned int* v28; // r14
	__int64 v29; // r15
	unsigned int v30; // ecx
	int v31; // edx
	int v32; // edx
	__int64 v33; // rdx
	__int64 v34; // rax
	__int64 v35; // rbx
	int* v36; // rcx
	__int64 v37; // rax
	__int64 v38; // rax
	__int64 v39; // rdx
	__int64 v40; // rax
	__int64 v41; // rbx
	int* v42; // rcx
	__int64 v43; // rax
	__int64 v44; // rax
	__int64 v45; // rdx
	__int64 v46; // rax
	__int64 v47; // rbx
	int* v48; // rcx
	__int64 v49; // rax
	__int64 v50; // rax
	__int64 v52; // [rsp+20h] [rbp-58h] BYREF
	__int64 v53[2]; // [rsp+30h] [rbp-48h] BYREF
	__int64 v54[2]; // [rsp+40h] [rbp-38h] BYREF
	char v55[16]; // [rsp+50h] [rbp-28h] BYREF
	char v56[16]; // [rsp+60h] [rbp-18h] BYREF
	unsigned int v57; // [rsp+B8h] [rbp+40h]
	int v58; // [rsp+C0h] [rbp+48h]
	__int64 v59; // [rsp+C8h] [rbp+50h] BYREF

	if (qword_140C63838)
	{
		v2 = qword_140C63838(off_140A692F8, qword_140C63858);
	}
	else if (dword_140C64E08)
	{
		v2 = 0;
	}
	else if ((int)sub_1401EB440() >= 0)
	{
		v2 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C63D68 + 40i64))(qword_140C63D68);
	}
	else
	{
		v2 = 0;
	}
	v3 = 0;
	v57 = v2;
	v58 = 0;
	if (v2)
	{
		while (1)
		{
			if (qword_140C63848)
			{
				v4 = qword_140C63848(off_140A692F8, v3, qword_140C63858);
				goto LABEL_14;
			}
			if (!dword_140C64E08 && (int)sub_1401EB440() >= 0)
				break;
		LABEL_40:
			v58 = ++v3;
			if (v3 >= v57)
				goto LABEL_41;
		}
		v4 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63D68 + 32i64))(qword_140C63D68, v3);
	LABEL_14:
		v5 = (_DWORD*)v4;
		if (!v4)
			goto LABEL_40;
		v6 = (*(__int64(__fastcall**)(_QWORD*))(*a1 + 16i64))(a1);
		(*(void(__fastcall**)(__int64, _DWORD*))(*(_QWORD*)v6 + 8i64))(v6, v5);
		LODWORD(v53[0]) = *v5;
		v53[1] = v6;
		sub_140055F80((__int64)(a1 + 1), (__int64)v55, v53);
		v7 = 0;
		v8 = 44i64;
		while (1)
		{
			v9 = *(_DWORD*)((*(__int64(__fastcall**)(__int64))(*(_QWORD*)v6 + 40i64))(v6) + v8);
			if (qword_140C63840)
				break;
			if (!dword_140C6545C && (int)sub_1401EBCC0() >= 0)
			{
				v10 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C655F0 + 24i64))(qword_140C655F0, v9);
			LABEL_21:
				v11 = (_DWORD*)v10;
				if (v10)
				{
					v12 = a1[6];
					v13 = v12;
					v14 = *(_QWORD*)(v12 + 8);
					while (v14)
					{
						if (*(_DWORD*)(v14 + 32) < *v11)
						{
							v14 = *(_QWORD*)(v14 + 24);
						}
						else
						{
							v13 = v14;
							v14 = *(_QWORD*)(v14 + 16);
						}
					}
					if (v13 == v12 || *v11 < *(_DWORD*)(v13 + 32))
					{
						v52 = a1[6];
						v15 = &v52;
					}
					else
					{
						v59 = v13;
						v15 = &v59;
					}
					v16 = *v15;
					if (v16 == v12)
					{
						v17 = sub_14018B280(32i64, 0);
						if (v17)
							*(_QWORD*)v17 = off_140B676D8;
						else
							v17 = 0i64;
						(*(void(__fastcall**)(int*, __int64, _DWORD*, _QWORD, __int64))(*(_QWORD*)v17 + 8i64))(
							v17,
							v6,
							v11,
							v7,
							v52);
						LODWORD(v54[0]) = *v11;
						v54[1] = (__int64)v17;
						sub_140055F80((__int64)(a1 + 5), (__int64)v56, v54);
					}
					else
					{
						v17 = *(int**)(v16 + 40);
					}
					sub_14049BBC0(v6, (__int64)v17);
				}
			}
			++v7;
			v8 += 4i64;
			if (v7 >= 0x10)
			{
				v3 = v58;
				goto LABEL_40;
			}
		}
		v10 = qword_140C63840(off_140A69368, v9, qword_140C63858);
		goto LABEL_21;
	}
LABEL_41:
	if (qword_140C63838)
	{
		v18 = qword_140C63838(off_140A69368, qword_140C63858);
	}
	else
	{
		if (dword_140C6545C)
		{
			v19 = 0;
			goto LABEL_49;
		}
		if ((int)sub_1401EBCC0() < 0)
		{
			v19 = 0;
			goto LABEL_49;
		}
		v18 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C655F0 + 40i64))(qword_140C655F0);
	}
	v19 = v18;
LABEL_49:
	v20 = 0;
	if (v19)
	{
		while (!qword_140C63848)
		{
			if (!dword_140C6545C && (int)sub_1401EBCC0() >= 0)
			{
				v21 = (_DWORD*)(*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C655F0 + 32i64))(
					qword_140C655F0,
					v20);
				goto LABEL_55;
			}
		LABEL_61:
			if (++v20 >= v19)
				goto LABEL_62;
		}
		v21 = (_DWORD*)qword_140C63848(off_140A69368, v20, qword_140C63858);
	LABEL_55:
		if (v21)
		{
			v22 = *(_QWORD*)(a1[6] + 8i64);
			while (v22)
			{
				if (*(_DWORD*)(v22 + 32) < *v21)
					v22 = *(_QWORD*)(v22 + 24);
				else
					v22 = *(_QWORD*)(v22 + 16);
			}
		}
		goto LABEL_61;
	}
LABEL_62:
	if (qword_140C63838)
	{
		v23 = qword_140C63838(off_140A693A0, qword_140C63858);
	}
	else
	{
		if (dword_140C64380)
		{
			v24 = 0;
			goto LABEL_70;
		}
		if ((int)sub_1401EC100() < 0)
		{
			v24 = 0;
			goto LABEL_70;
		}
		v23 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C64EB0 + 40i64))(qword_140C64EB0);
	}
	v24 = v23;
LABEL_70:
	v25 = 0;
	if (v24)
	{
		while (!qword_140C63848)
		{
			if (!dword_140C64380 && (int)sub_1401EC100() >= 0)
			{
				v26 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64EB0 + 32i64))(qword_140C64EB0, v25);
			LABEL_76:
				v27 = v26;
				if (v26)
				{
					v28 = (unsigned int*)(v26 + 16);
					v29 = 6i64;
					do
					{
						v30 = *v28;
						if (*v28)
						{
							v31 = *(_DWORD*)(v27 + 8);
							if (v31)
							{
								v32 = v31 - 1;
								if (v32)
								{
									if (v32 == 1)
									{
										v33 = a1[18];
										LODWORD(v54[0]) = *v28;
										v34 = *(_QWORD*)(v33 + 8);
										v35 = v33;
										while (v34)
										{
											v35 = v34;
											if (v30 >= *(_DWORD*)(v34 + 32))
												v34 = *(_QWORD*)(v34 + 24);
											else
												v34 = *(_QWORD*)(v34 + 16);
										}
										if (v35 == v33 || v30 < *(_DWORD*)(v35 + 32))
										{
											v36 = sub_14018B280(48i64, 0);
											if (v36 != (int*)-32i64)
											{
												*((_QWORD*)v36 + 4) = v54[0];
												*((_QWORD*)v36 + 5) = v27;
											}
											*(_QWORD*)(v35 + 16) = v36;
											v38 = a1[18];
											if (v35 == v38)
											{
												*(_QWORD*)(v38 + 8) = v36;
												*(_QWORD*)(a1[18] + 24i64) = v36;
											}
											else if (v35 == *(_QWORD*)(v38 + 16))
											{
												*(_QWORD*)(v38 + 16) = v36;
											}
										}
										else
										{
											v36 = sub_14018B280(48i64, 0);
											if (v36 != (int*)-32i64)
											{
												*((_QWORD*)v36 + 4) = v54[0];
												*((_QWORD*)v36 + 5) = v27;
											}
											*(_QWORD*)(v35 + 24) = v36;
											v37 = a1[18];
											if (v35 == *(_QWORD*)(v37 + 24))
												*(_QWORD*)(v37 + 24) = v36;
										}
										*((_QWORD*)v36 + 1) = v35;
										*((_QWORD*)v36 + 2) = 0i64;
										*((_QWORD*)v36 + 3) = 0i64;
										sub_1400081C0((__int64)v36, (_QWORD*)(a1[18] + 8i64));
										++a1[19];
									}
								}
								else
								{
									v39 = a1[14];
									LODWORD(v53[0]) = *v28;
									v40 = *(_QWORD*)(v39 + 8);
									v41 = v39;
									while (v40)
									{
										v41 = v40;
										if (v30 >= *(_DWORD*)(v40 + 32))
											v40 = *(_QWORD*)(v40 + 24);
										else
											v40 = *(_QWORD*)(v40 + 16);
									}
									if (v41 == v39 || v30 < *(_DWORD*)(v41 + 32))
									{
										v42 = sub_14018B280(48i64, 0);
										if (v42 != (int*)-32i64)
										{
											*((_QWORD*)v42 + 4) = v53[0];
											*((_QWORD*)v42 + 5) = v27;
										}
										*(_QWORD*)(v41 + 16) = v42;
										v44 = a1[14];
										if (v41 == v44)
										{
											*(_QWORD*)(v44 + 8) = v42;
											*(_QWORD*)(a1[14] + 24i64) = v42;
										}
										else if (v41 == *(_QWORD*)(v44 + 16))
										{
											*(_QWORD*)(v44 + 16) = v42;
										}
									}
									else
									{
										v42 = sub_14018B280(48i64, 0);
										if (v42 != (int*)-32i64)
										{
											*((_QWORD*)v42 + 4) = v53[0];
											*((_QWORD*)v42 + 5) = v27;
										}
										*(_QWORD*)(v41 + 24) = v42;
										v43 = a1[14];
										if (v41 == *(_QWORD*)(v43 + 24))
											*(_QWORD*)(v43 + 24) = v42;
									}
									*((_QWORD*)v42 + 1) = v41;
									*((_QWORD*)v42 + 2) = 0i64;
									*((_QWORD*)v42 + 3) = 0i64;
									sub_1400081C0((__int64)v42, (_QWORD*)(a1[14] + 8i64));
									++a1[15];
								}
							}
							else
							{
								v45 = a1[10];
								LODWORD(v52) = *v28;
								v46 = *(_QWORD*)(v45 + 8);
								v47 = v45;
								while (v46)
								{
									v47 = v46;
									if (v30 >= *(_DWORD*)(v46 + 32))
										v46 = *(_QWORD*)(v46 + 24);
									else
										v46 = *(_QWORD*)(v46 + 16);
								}
								if (v47 == v45 || v30 < *(_DWORD*)(v47 + 32))
								{
									v48 = sub_14018B280(48i64, 0);
									if (v48 != (int*)-32i64)
									{
										*((_QWORD*)v48 + 4) = v52;
										*((_QWORD*)v48 + 5) = v27;
									}
									*(_QWORD*)(v47 + 16) = v48;
									v50 = a1[10];
									if (v47 == v50)
									{
										*(_QWORD*)(v50 + 8) = v48;
										*(_QWORD*)(a1[10] + 24i64) = v48;
									}
									else if (v47 == *(_QWORD*)(v50 + 16))
									{
										*(_QWORD*)(v50 + 16) = v48;
									}
								}
								else
								{
									v48 = sub_14018B280(48i64, 0);
									if (v48 != (int*)-32i64)
									{
										*((_QWORD*)v48 + 4) = v52;
										*((_QWORD*)v48 + 5) = v27;
									}
									*(_QWORD*)(v47 + 24) = v48;
									v49 = a1[10];
									if (v47 == *(_QWORD*)(v49 + 24))
										*(_QWORD*)(v49 + 24) = v48;
								}
								*((_QWORD*)v48 + 1) = v47;
								*((_QWORD*)v48 + 2) = 0i64;
								*((_QWORD*)v48 + 3) = 0i64;
								sub_1400081C0((__int64)v48, (_QWORD*)(a1[10] + 8i64));
								++a1[11];
							}
						}
						++v28;
						--v29;
					} while (v29);
				}
			}
			if (++v25 >= v24)
				return 0i64;
		}
		v26 = qword_140C63848(off_140A693A0, v25, qword_140C63858);
		goto LABEL_76;
	}
	return 0i64;
}
// 14049B85F: conditional instruction was optimized away because rax.8==0
// 14049B946: conditional instruction was optimized away because rax.8==0
// 14049BA1F: conditional instruction was optimized away because rax.8==0
// 140A692F8: using guessed type wchar_t *off_140A692F8[2];
// 140A69368: using guessed type wchar_t *off_140A69368[2];
// 140A693A0: using guessed type wchar_t *off_140A693A0[2];
// 140B676D8: using guessed type __int64 (__fastcall *off_140B676D8[16])();
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63D68: using guessed type __int64 qword_140C63D68;
// 140C64380: using guessed type int dword_140C64380;
// 140C64E08: using guessed type int dword_140C64E08;
// 140C64EB0: using guessed type __int64 qword_140C64EB0;
// 140C6545C: using guessed type int dword_140C6545C;
// 140C655F0: using guessed type __int64 qword_140C655F0;
// 14049B440: using guessed type char var_28[16];
// 14049B440: using guessed type char var_18[16];

