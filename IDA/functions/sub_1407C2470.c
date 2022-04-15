//----- (00000001407C2470) ----------------------------------------------------
_QWORD* __fastcall sub_1407C2470(
	__int64* a1,
	__int64 a2,
	__int64(__fastcall* a3)(__int64, __int64, __int64),
	__int64 a4,
	__int64 a5)
{
	_QWORD* result; // rax
	__int64* v6; // r11
	__int64 v7; // rdi
	__int64 v8; // r10
	unsigned __int64 v9; // rax
	unsigned __int64 v10; // rsi
	int* v11; // rax
	__int64 v12; // r8
	__int64 v13; // rax
	unsigned __int64 v14; // rcx
	__int64 v15; // rbx
	unsigned __int64 v16; // r12
	unsigned __int64 v17; // r14
	unsigned __int64 v18; // rdi
	__int64 v19; // rsi
	unsigned __int64 v20; // rax
	__int64 v21; // rcx
	__int64 v22; // r9
	_QWORD* v23; // rdi
	__int64 v24; // r9
	unsigned __int64 v25; // r15
	unsigned __int64 v26; // rax
	__int64 v27; // r13
	int* v28; // rax
	__int64 v29; // rdx
	__int64 v30; // rax
	__int64 v31; // rcx
	unsigned __int64 v32; // rsi
	_QWORD* v33; // rbx
	void(__fastcall * ***v34)(_QWORD); // rdi
	unsigned __int64 v35; // r14
	void(__fastcall * **v36)(_QWORD); // rcx
	__int64 v37; // r13
	unsigned __int64 v38; // r12
	__int64 v39; // rdi
	unsigned __int64 v40; // rsi
	_QWORD* v41; // rbx
	void(__fastcall * ***v42)(_QWORD); // rdi
	unsigned __int64 v43; // r14
	void(__fastcall * **v44)(_QWORD); // rcx
	__int64 v45; // rcx
	_QWORD* v46; // rbx
	__int64 v47; // rdi
	_QWORD* v48; // rbx
	__int64 v49; // [rsp+20h] [rbp-51h]
	__int64 v50; // [rsp+28h] [rbp-49h]
	__int64 v51[3]; // [rsp+30h] [rbp-41h] BYREF
	int v52; // [rsp+48h] [rbp-29h] BYREF
	int v53; // [rsp+4Ch] [rbp-25h]
	__int64 v54; // [rsp+50h] [rbp-21h]
	_QWORD* (__fastcall * v55)(__int64); // [rsp+58h] [rbp-19h]
	__int64 v56; // [rsp+60h] [rbp-11h]
	int v57; // [rsp+68h] [rbp-9h]
	__int64 v58; // [rsp+70h] [rbp-1h] BYREF
	__int64 v59; // [rsp+80h] [rbp+Fh]
	_QWORD* v61; // [rsp+D8h] [rbp+67h]

	result = (_QWORD*)*a1;
	v6 = a1;
	if (*a1)
	{
		v7 = a5;
		v8 = 32i64;
		v51[1] = (__int64)a3;
		v51[2] = a4;
		v51[0] = 32i64;
		if (!a5)
		{
			do
			{
				result = (_QWORD*)result[5];
				++v7;
			} while (result);
		}
		v9 = qword_140C63758;
		if (qword_140C63758)
			v9 = *(unsigned int*)(qword_140C63758 + 184);
		v10 = (unsigned __int64)(v7 + 63) >> 6;
		if (v9 < v10)
			v10 = v9;
		v59 = v10;
		if (v10 == 1)
		{
			return sub_140370B30(a1, 32i64, a3, a4);
		}
		else
		{
			if (v10)
			{
				v11 = sub_14018B280(24 * v10 + 16, 0);
				if (v11)
				{
					v6 = a1;
					*(_QWORD*)v11 = &off_140B5F110;
					v8 = v51[0];
					v12 = (__int64)(v11 + 4);
				}
				else
				{
					v8 = v51[0];
					v6 = a1;
					v12 = 16i64;
				}
			}
			else
			{
				v12 = 0i64;
			}
			v61 = (_QWORD*)v12;
			if (v10)
			{
				v13 = v12;
				v14 = v10;
				do
				{
					if (v13)
						*(_QWORD*)(v13 + 16) = 0i64;
					v13 += 24i64;
					--v14;
				} while (v14);
				v8 = v51[0];
			}
			v15 = *v6;
			if (*v6)
			{
				**(_QWORD**)(v15 + v8) = 0i64;
				*(_QWORD*)(v15 + v8) = 0i64;
				v8 = v51[0];
			}
			v16 = 0i64;
			v17 = v10 - 1;
			v18 = (v10 + v7 - 1) / v10;
			if (v15)
			{
				v19 = v12;
				while (v16 < v17)
				{
					v20 = 0i64;
					v21 = v15;
					while (v20 < v18)
					{
						v15 = *(_QWORD*)(v15 + v8 + 8);
						++v20;
						if (!v15)
							goto LABEL_31;
					}
					**(_QWORD**)(v15 + v8) = 0i64;
					*(_QWORD*)(v15 + v8) = 0i64;
				LABEL_31:
					v22 = v19;
					++v16;
					v19 += 24i64;
					*(_QWORD*)(v22 + 8) = v51;
					*(_QWORD*)v22 = v21;
					*(_QWORD*)(v21 + v51[0]) = v22;
					v54 = v22;
					v52 = 4;
					v53 = 1;
					v55 = sub_140370C60;
					v56 = 0i64;
					v57 = 1;
					sub_14019DCA0((__int64)&v52, 0, 0i64, (int**)(v22 + 16));
					if (!v15)
						goto LABEL_34;
					v8 = v51[0];
				}
				v23 = v61;
				v24 = (__int64)&v61[3 * v16];
				*(_QWORD*)v24 = v15;
				*(_QWORD*)(v24 + 8) = v51;
				v54 = v24;
				*(_QWORD*)(v15 + v51[0]) = v24;
				++v16;
				v52 = 4;
				v53 = 1;
				v55 = sub_140370C60;
				v56 = 0i64;
				v57 = 1;
				sub_14019DCA0((__int64)&v52, 0, 0i64, (int**)(v24 + 16));
			}
			else
			{
			LABEL_34:
				v23 = v61;
			}
			v25 = (v16 + 1) >> 1;
			v26 = v25;
			v27 = v25;
			v58 = v25;
			if (v25 > 1)
			{
				do
				{
					v26 = (v26 + 1) >> 1;
					v27 += v26;
				} while (v26 > 1);
				v58 = v27;
			}
			if (v27)
			{
				v28 = sub_14018B280(32 * v27 + 16, 0);
				if (v28)
				{
					v29 = (__int64)(v28 + 4);
					*(_QWORD*)v28 = &off_140B5F110;
				}
				else
				{
					v29 = 16i64;
				}
			}
			else
			{
				v29 = 0i64;
			}
			v49 = v29;
			if (v27)
			{
				v30 = v29;
				v31 = v27;
				do
				{
					if (v30)
						*(_QWORD*)(v30 + 24) = 0i64;
					v30 += 32i64;
					--v31;
				} while (v31);
			}
			v50 = v29;
			if (v25)
			{
				v32 = 1i64;
				v33 = (_QWORD*)(v29 + 24);
				v34 = (void(__fastcall****)(_QWORD))(v23 + 2);
				v35 = (v16 + 1) >> 1;
				do
				{
					if (v32 >= v16)
					{
						*(v33 - 3) = 0i64;
						*(v33 - 2) = v34 - 2;
						*(v33 - 1) = *(v34 - 1);
						v36 = *v34;
						if ((void(__fastcall***)(_QWORD)) * v33 != *v34)
						{
							if (v36)
								(**v36)(v36);
							if (*v33)
								(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v33 + 8i64))(*v33);
							*v33 = *v34;
						}
					}
					else
					{
						sub_140370C80((__int64)(v33 - 3), (__int64)(v34 - 2), (__int64)(v34 + 1));
					}
					v32 += 2i64;
					v34 += 6;
					v33 += 4;
					--v35;
				} while (v35);
			}
			if (v25 > 1)
			{
				v37 = v50;
				do
				{
					v38 = v25;
					v39 = v37;
					v37 += 32 * v25;
					v25 = (v25 + 1) >> 1;
					if (v25)
					{
						v40 = 1i64;
						v41 = (_QWORD*)(v37 + 24);
						v42 = (void(__fastcall****)(_QWORD))(v39 + 24);
						v43 = v25;
						do
						{
							if (v40 >= v38)
							{
								*(v41 - 3) = 0i64;
								*(v41 - 2) = *(v42 - 2);
								*(v41 - 1) = *(v42 - 1);
								v44 = *v42;
								if ((void(__fastcall***)(_QWORD)) * v41 != *v42)
								{
									if (v44)
										(**v44)(v44);
									if (*v41)
										(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v41 + 8i64))(*v41);
									*v41 = *v42;
								}
							}
							else
							{
								sub_140370E50((__int64)(v41 - 3), v42 - 3, (__int64)(v42 + 1));
							}
							v40 += 2i64;
							v42 += 8;
							v41 += 4;
							--v43;
						} while (v43);
					}
				} while (v25 > 1);
				v50 = v37;
				v27 = v58;
			}
			LODWORD(v58) = -1;
			(*(void(__fastcall**)(_QWORD, __int64*))(**(_QWORD**)(v50 + 24) + 32i64))(*(_QWORD*)(v50 + 24), &v58);
			v45 = **(_QWORD**)(v50 + 8);
			*(_QWORD*)(v45 + v51[0]) = a1;
			*a1 = v45;
			if (v27)
			{
				v46 = (_QWORD*)(v49 + 24);
				do
				{
					if (*v46)
						(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v46 + 8i64))(*v46);
					v46 += 4;
					--v27;
				} while (v27);
			}
			if (v49)
				(**(void(__fastcall***)(__int64))(v49 - 16))(v49 - 16);
			v47 = v59;
			if (v59)
			{
				v48 = v61 + 2;
				do
				{
					if (*v48)
						(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v48 + 8i64))(*v48);
					v48 += 3;
					--v47;
				} while (v47);
			}
			result = v61;
			if (v61)
				return (_QWORD*)(*(__int64(__fastcall**)(_QWORD*)) * (v61 - 2))(v61 - 2);
		}
	}
	return result;
}
// 1407C25F5: conditional instruction was optimized away because rbx.8!=0
// 1407C260E: conditional instruction was optimized away because rbx.8!=0
// 1407C263B: conditional instruction was optimized away because rcx.8!=0
// 1407C268D: conditional instruction was optimized away because rbx.8!=0
// 140B5F110: using guessed type __int64 (__fastcall *off_140B5F110)();
// 140C63758: using guessed type __int64 qword_140C63758;

