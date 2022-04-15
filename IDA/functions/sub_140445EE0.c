#include "../winhttp.h"

//----- (0000000140445EE0) ----------------------------------------------------
__int64 __fastcall sub_140445EE0(__int64 a1)
{
	__int64 result; // rax
	unsigned __int64 v3; // r12
	__int64 v4; // rax
	bool v5; // cf
	__int64 v6; // rax
	int* v7; // rax
	int v8; // ecx
	int* v9; // rdx
	_QWORD* i; // rax
	unsigned __int64 v11; // rbx
	__int64 v12; // rdi
	__int64 v13; // rbp
	unsigned int v14; // r14d
	__int64 v15; // rax
	__int64 v16; // rcx
	__int64 v17; // rax
	unsigned __int64 v18; // rbx
	__int64 v19; // rax
	__int64 v20; // rax
	int* v21; // rax
	int v22; // ecx
	int* v23; // rdx
	_QWORD* v24; // rax
	unsigned __int64 v25; // r13
	__int64 v26; // rbx
	unsigned int v27; // ebx
	__int64 v28; // rax
	_DWORD* v29; // rbp
	__int64 v30; // r14
	unsigned __int64 v31; // rbx
	__int64 v32; // rdi
	__int64 v33; // rcx
	int v34; // r9d
	int v35; // eax
	int v36; // r8d
	unsigned __int64 v37; // rdi
	int* v38; // rax
	bool v39; // r8
	__int64 v40; // r9
	int* v41; // rbp
	_QWORD* v42; // rdx
	_QWORD* v43; // rbx
	_QWORD* v44; // rcx
	_QWORD* j; // rax
	_QWORD* v46; // rax
	int* v47; // rcx
	__int64 v48; // rax
	_QWORD* v49; // rax
	__int64 v50; // [rsp+68h] [rbp+10h]
	__int64 v51; // [rsp+70h] [rbp+18h]
	unsigned __int64 v52; // [rsp+78h] [rbp+20h]

	result = sub_140446360((__int64*)a1);
	if ((int)result >= 0)
	{
		v3 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 104) + 16i64))(*(_QWORD*)(a1 + 104)) / 0xCui64;
		v4 = 24 * v3;
		if (!is_mul_ok(v3, 0x18ui64))
			v4 = -1i64;
		v5 = __CFADD__(v4, 8i64);
		v6 = v4 + 8;
		if (v5)
			v6 = -1i64;
		v7 = sub_14018B280(v6, 0);
		if (v7)
		{
			v8 = v3 - 1;
			v9 = v7 + 2;
			*v7 = v3;
			for (i = v7 + 2; v8 >= 0; i += 3)
			{
				--v8;
				*i = off_140B73A90;
				i[2] = 0i64;
			}
		}
		else
		{
			v9 = 0i64;
		}
		*(_QWORD*)(a1 + 16) = v9;
		v11 = 0i64;
		if (v3)
		{
			v12 = 0i64;
			v13 = 0i64;
			while (1)
			{
				v14 = *(_DWORD*)((*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 104) + 32i64))(*(_QWORD*)(a1 + 104))
					+ v13);
				if (qword_140C63840)
					break;
				if (dword_140C642BC)
				{
					v16 = 0i64;
				}
				else
				{
					if ((int)sub_140212120() >= 0)
					{
						v15 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C652A8 + 24i64))(
							qword_140C652A8,
							v14);
						goto LABEL_20;
					}
					v16 = 0i64;
				}
			LABEL_21:
				v17 = *(_QWORD*)(a1 + 16);
				v13 += 12i64;
				v12 += 24i64;
				*(_QWORD*)(v12 + v17 - 16) = v11++;
				*(_QWORD*)(v12 + v17 - 8) = v16;
				if (v11 >= v3)
					goto LABEL_22;
			}
			v15 = qword_140C63840(off_140A6B2E8, v14, qword_140C63858);
		LABEL_20:
			v16 = v15;
			goto LABEL_21;
		}
	LABEL_22:
		v18 = *(unsigned int*)(*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 64) + 32i64))(*(_QWORD*)(a1 + 64))
			/ 0x30ui64;
		v52 = v18;
		v19 = 80 * v18;
		if (!is_mul_ok(v18, 0x50ui64))
			v19 = -1i64;
		v5 = __CFADD__(v19, 8i64);
		v20 = v19 + 8;
		if (v5)
			v20 = -1i64;
		v21 = sub_14018B280(v20, 0);
		if (v21)
		{
			v22 = v18 - 1;
			*v21 = v18;
			v23 = v21 + 2;
			if ((int)v18 - 1 >= 0)
			{
				v24 = v21 + 6;
				do
				{
					--v22;
					*(v24 - 2) = off_140B739D0;
					*(v24 - 1) = 0i64;
					*v24 = 0i64;
					v24[1] = 0i64;
					v24[4] = 0i64;
					v24[5] = 0i64;
					v24[6] = 0i64;
					v24[7] = 0i64;
					v24 += 10;
				} while (v22 >= 0);
			}
		}
		else
		{
			v23 = 0i64;
		}
		*(_QWORD*)(a1 + 8) = v23;
		v25 = 0i64;
		if (v18)
		{
			v26 = 0i64;
			v50 = 0i64;
			v51 = 0i64;
			do
			{
				v27 = *(_DWORD*)((*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 72) + 32i64))(*(_QWORD*)(a1 + 72))
					+ v26
					+ 4);
				if (qword_140C63848)
				{
					v28 = qword_140C63848(off_140A6B320, v27, qword_140C63858);
				}
				else
				{
					if (dword_140C65370)
					{
						v29 = 0i64;
						goto LABEL_42;
					}
					if ((int)sub_140212560() < 0)
					{
						v29 = 0i64;
						goto LABEL_42;
					}
					v28 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63BD0 + 32i64))(qword_140C63BD0, v27);
				}
				v29 = (_DWORD*)v28;
			LABEL_42:
				v30 = 0i64;
				v31 = 0i64;
				if (v3)
				{
					v32 = 0i64;
					while ((**(unsigned int(__fastcall***)(__int64))(v32 + *(_QWORD*)(a1 + 16)))(v32 + *(_QWORD*)(a1 + 16)) != v29[2])
					{
						++v31;
						v32 += 24i64;
						if (v31 >= v3)
							goto LABEL_48;
					}
					v30 = *(_QWORD*)(a1 + 16) + 24 * v31;
				}
			LABEL_48:
				v33 = *(_QWORD*)(a1 + 8) + v50;
				*(_QWORD*)(v33 + 16) = v29;
				*(_QWORD*)(v33 + 8) = v25;
				*(_QWORD*)(v33 + 24) = v30;
				v34 = v29[8];
				v35 = v29[9];
				v36 = v29[7];
				*(_DWORD*)(v33 + 32) = v29[6];
				*(_DWORD*)(v33 + 36) = v36;
				*(_DWORD*)(v33 + 40) = v34 + 1;
				*(_DWORD*)(v33 + 44) = v35 + 1;
				sub_140712D90(v33);
				if (!v29[11])
					goto LABEL_79;
				v37 = v50 + *(_QWORD*)(a1 + 8);
				v38 = sub_1400326C0(a1 + 24, v29 + 11);
				v39 = 1;
				v40 = *((_QWORD*)v38 + 1);
				v41 = v38;
				v42 = *(_QWORD**)(v40 + 8);
				v43 = (_QWORD*)v40;
				while (v42)
				{
					v43 = v42;
					v39 = v37 < v42[4];
					if (v37 >= v42[4])
						v42 = (_QWORD*)v42[3];
					else
						v42 = (_QWORD*)v42[2];
				}
				v44 = v43;
				if (v39)
				{
					if (v43 == *(_QWORD**)(v40 + 16))
						goto LABEL_66;
					if (*(_BYTE*)v43 || *(_QWORD**)(v43[1] + 8i64) != v43)
					{
						v44 = (_QWORD*)v43[2];
						if (v44)
						{
							for (j = (_QWORD*)v44[3]; j; j = (_QWORD*)j[3])
								v44 = j;
						}
						else
						{
							v44 = (_QWORD*)v43[1];
							if (v43 == (_QWORD*)v44[2])
							{
								do
								{
									v46 = v44;
									v44 = (_QWORD*)v44[1];
								} while (v46 == (_QWORD*)v44[2]);
							}
						}
					}
					else
					{
						v44 = (_QWORD*)v43[3];
					}
				}
				if (v44[4] < v37)
				{
				LABEL_66:
					if (v43 == (_QWORD*)v40 || v37 < v43[4])
					{
						v47 = sub_14018B280(40i64, 0);
						if (v47 != (int*)-32i64)
							*((_QWORD*)v47 + 4) = v37;
						v43[2] = v47;
						v49 = (_QWORD*)*((_QWORD*)v41 + 1);
						if (v43 == v49)
						{
							v49[1] = v47;
							*(_QWORD*)(*((_QWORD*)v41 + 1) + 24i64) = v47;
						}
						else if (v43 == (_QWORD*)v49[2])
						{
							v49[2] = v47;
						}
					}
					else
					{
						v47 = sub_14018B280(40i64, 0);
						if (v47 != (int*)-32i64)
							*((_QWORD*)v47 + 4) = v37;
						v43[3] = v47;
						v48 = *((_QWORD*)v41 + 1);
						if (v43 == *(_QWORD**)(v48 + 24))
							*(_QWORD*)(v48 + 24) = v47;
					}
					*((_QWORD*)v47 + 1) = v43;
					*((_QWORD*)v47 + 2) = 0i64;
					*((_QWORD*)v47 + 3) = 0i64;
					sub_1400081C0((__int64)v47, (_QWORD*)(*((_QWORD*)v41 + 1) + 8i64));
					++* ((_QWORD*)v41 + 2);
				}
			LABEL_79:
				++v25;
				v26 = v51 + 48;
				v50 += 80i64;
				v51 += 48i64;
			} while (v25 < v52);
		}
		return 0i64;
	}
	return result;
}
// 14044627F: conditional instruction was optimized away because rdx.8==0
// 140A6B2E8: using guessed type wchar_t *off_140A6B2E8[2];
// 140A6B320: using guessed type wchar_t *off_140A6B320[2];
// 140B739D0: using guessed type __int64 (__fastcall *off_140B739D0[23])();
// 140B73A90: using guessed type __int64 (__fastcall *off_140B73A90[71])();
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63BD0: using guessed type __int64 qword_140C63BD0;
// 140C642BC: using guessed type int dword_140C642BC;
// 140C652A8: using guessed type __int64 qword_140C652A8;
// 140C65370: using guessed type int dword_140C65370;

