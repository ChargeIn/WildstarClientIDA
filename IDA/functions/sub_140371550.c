#include "../winhttp.h"

//----- (0000000140371550) ----------------------------------------------------
_QWORD* __fastcall sub_140371550(
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
	__int64 v49; // [rsp+20h] [rbp-41h]
	__int64 v50[3]; // [rsp+28h] [rbp-39h] BYREF
	int v51; // [rsp+40h] [rbp-21h] BYREF
	int v52; // [rsp+44h] [rbp-1Dh]
	__int64 v53; // [rsp+48h] [rbp-19h]
	_QWORD* (__fastcall * v54)(__int64); // [rsp+50h] [rbp-11h]
	__int64 v55; // [rsp+58h] [rbp-9h]
	int v56; // [rsp+60h] [rbp-1h]
	__int64 v57; // [rsp+68h] [rbp+7h] BYREF
	__int64 v58; // [rsp+78h] [rbp+17h]
	__int64 v60; // [rsp+C8h] [rbp+67h]
	_QWORD* v61; // [rsp+D8h] [rbp+77h]

	result = (_QWORD*)*a1;
	v6 = a1;
	if (*a1)
	{
		v7 = a5;
		v8 = 1416i64;
		v50[1] = (__int64)a3;
		v50[2] = 0i64;
		v50[0] = 1416i64;
		if (!a5)
		{
			do
			{
				result = (_QWORD*)result[178];
				++v7;
			} while (result);
		}
		v9 = qword_140C63758;
		if (qword_140C63758)
			v9 = *(unsigned int*)(qword_140C63758 + 184);
		v10 = (unsigned __int64)(v7 + 63) >> 6;
		if (v9 < v10)
			v10 = v9;
		v58 = v10;
		if (v10 == 1)
		{
			return sub_140370B30(a1, 1416i64, a3, 0i64);
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
					v8 = v50[0];
					v12 = (__int64)(v11 + 4);
				}
				else
				{
					v8 = v50[0];
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
				v8 = v50[0];
			}
			v15 = *v6;
			if (*v6)
			{
				**(_QWORD**)(v15 + v8) = 0i64;
				*(_QWORD*)(v15 + v8) = 0i64;
				v8 = v50[0];
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
					*(_QWORD*)(v22 + 8) = v50;
					*(_QWORD*)v22 = v21;
					*(_QWORD*)(v21 + v50[0]) = v22;
					v53 = v22;
					v51 = 4;
					v52 = 1;
					v54 = sub_140370C60;
					v55 = 0i64;
					v56 = 1;
					sub_14019DCA0((__int64)&v51, 0, 0i64, (int**)(v22 + 16));
					if (!v15)
						goto LABEL_34;
					v8 = v50[0];
				}
				v23 = v61;
				v24 = (__int64)&v61[3 * v16];
				*(_QWORD*)v24 = v15;
				*(_QWORD*)(v24 + 8) = v50;
				v53 = v24;
				*(_QWORD*)(v15 + v50[0]) = v24;
				++v16;
				v51 = 4;
				v52 = 1;
				v54 = sub_140370C60;
				v55 = 0i64;
				v56 = 1;
				sub_14019DCA0((__int64)&v51, 0, 0i64, (int**)(v24 + 16));
			}
			else
			{
			LABEL_34:
				v23 = v61;
			}
			v25 = (v16 + 1) >> 1;
			v26 = v25;
			v27 = v25;
			v57 = v25;
			if (v25 > 1)
			{
				do
				{
					v26 = (v26 + 1) >> 1;
					v27 += v26;
				} while (v26 > 1);
				v57 = v27;
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
			v60 = v29;
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
				v37 = v60;
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
				v60 = v37;
				v27 = v57;
			}
			LODWORD(v57) = -1;
			(*(void(__fastcall**)(_QWORD, __int64*))(**(_QWORD**)(v60 + 24) + 32i64))(*(_QWORD*)(v60 + 24), &v57);
			v45 = **(_QWORD**)(v60 + 8);
			*(_QWORD*)(v45 + v50[0]) = a1;
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
			v47 = v58;
			if (v58)
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
// 1403716F1: conditional instruction was optimized away because rbx.8!=0
// 14037170A: conditional instruction was optimized away because rbx.8!=0
// 140371737: conditional instruction was optimized away because rcx.8!=0
// 140371789: conditional instruction was optimized away because rbx.8!=0
// 140B5F110: using guessed type __int64 (__fastcall *off_140B5F110)();
// 140C63758: using guessed type __int64 qword_140C63758;

