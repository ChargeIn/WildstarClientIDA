//----- (0000000140488FA0) ----------------------------------------------------
__int64 __fastcall sub_140488FA0(__int64 a1)
{
	__int64 v1; // r14
	int* v2; // rax
	__int64 v3; // rax
	unsigned int v4; // r13d
	unsigned int v5; // eax
	__int64 v6; // rax
	int* v7; // r12
	int* v8; // rax
	_QWORD* v9; // rsi
	__int64 v10; // r9
	unsigned int v11; // r8d
	__int64 v12; // rcx
	__int64 v13; // rbx
	bool v14; // al
	__int64 v15; // rdx
	__int64 i; // rax
	__int64 v17; // rax
	int* v18; // rcx
	__int64 v19; // rax
	__int64 v20; // rax
	__int64 v21; // rdx
	unsigned int v22; // edi
	__int64 v23; // rax
	__int64 v24; // rcx
	__int64* v25; // rax
	__int64 v26; // rax
	unsigned __int64 v27; // rbx
	__int64 v28; // rax
	int* v29; // rsi
	__int64 v30; // r8
	unsigned int v31; // edx
	__int64 v32; // rax
	__int64 v33; // rcx
	__int64* v34; // rax
	__int64 v35; // rax
	int* v36; // rdi
	int* v37; // rbx
	int* v38; // rax
	int v39; // edx
	int* v40; // rax
	int v41; // eax
	int* v42; // rax
	int v43; // ecx
	int* v44; // rax
	int v45; // eax
	int* v46; // rax
	unsigned __int64 v47; // rdi
	int v48; // edx
	int* v49; // rax
	int v50; // eax
	__int64 v52[2]; // [rsp+30h] [rbp-D0h] BYREF
	__int64 v53; // [rsp+40h] [rbp-C0h] BYREF
	_QWORD v54[2]; // [rsp+48h] [rbp-B8h] BYREF
	unsigned __int64 v55[2]; // [rsp+58h] [rbp-A8h] BYREF
	unsigned __int64 v56[2]; // [rsp+68h] [rbp-98h] BYREF
	_QWORD v57[2]; // [rsp+78h] [rbp-88h] BYREF
	_QWORD v58[2]; // [rsp+88h] [rbp-78h] BYREF
	int* v59; // [rsp+98h] [rbp-68h] BYREF
	char v60[16]; // [rsp+A0h] [rbp-60h] BYREF
	char v61[16]; // [rsp+B0h] [rbp-50h] BYREF
	char v62[16]; // [rsp+C0h] [rbp-40h] BYREF
	char v63[16]; // [rsp+D0h] [rbp-30h] BYREF
	char v64[24]; // [rsp+E0h] [rbp-20h] BYREF
	__int64 v66; // [rsp+148h] [rbp+48h] BYREF
	__int64 v67; // [rsp+150h] [rbp+50h] BYREF
	__int64 v68; // [rsp+158h] [rbp+58h] BYREF

	v1 = a1;
	v2 = sub_14018B280(2528i64, 0);
	if (v2)
		v3 = sub_1401AE3C0((__int64)v2);
	else
		v3 = 0i64;
	qword_140C65940 = v3;
	sub_1407E4830((int*)(v1 + 136), 0i64, 0x78ui64);
	v4 = 0;
	while (1)
	{
		if (qword_140C63838)
		{
			v5 = qword_140C63838(off_140A6A050, qword_140C63858);
			goto LABEL_10;
		}
		if (dword_140C648B0 || (int)sub_1401FB780() < 0)
			return 0i64;
		v5 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C645A0 + 40i64))(qword_140C645A0);
	LABEL_10:
		if (v4 >= v5)
			return 0i64;
		if (qword_140C63848)
		{
			v6 = qword_140C63848(off_140A6A050, v4, qword_140C63858);
		}
		else
		{
			if (dword_140C648B0)
			{
				v7 = 0i64;
				goto LABEL_19;
			}
			if ((int)sub_1401FB780() < 0)
			{
				v7 = 0i64;
				goto LABEL_19;
			}
			v6 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C645A0 + 32i64))(qword_140C645A0, v4);
		}
		v7 = (int*)v6;
	LABEL_19:
		v8 = sub_14018B280(104i64, 0);
		if (v8)
			v9 = sub_140488590(v8, (__int64)v7);
		else
			v9 = 0i64;
		v10 = *(_QWORD*)(v1 + 16);
		v11 = *v7;
		v52[1] = (__int64)v9;
		v12 = *(_QWORD*)(v10 + 8);
		LODWORD(v52[0]) = v11;
		v13 = v10;
		v14 = 1;
		while (v12)
		{
			v13 = v12;
			v14 = v11 < *(_DWORD*)(v12 + 32);
			if (v11 >= *(_DWORD*)(v12 + 32))
				v12 = *(_QWORD*)(v12 + 24);
			else
				v12 = *(_QWORD*)(v12 + 16);
		}
		v15 = v13;
		if (!v14)
			goto LABEL_39;
		if (v13 != *(_QWORD*)(v10 + 16))
		{
			if (*(_BYTE*)v13 || *(_QWORD*)(*(_QWORD*)(v13 + 8) + 8i64) != v13)
			{
				v15 = *(_QWORD*)(v13 + 16);
				if (v15)
				{
					for (i = *(_QWORD*)(v15 + 24); i; i = *(_QWORD*)(i + 24))
						v15 = i;
				}
				else
				{
					v15 = *(_QWORD*)(v13 + 8);
					if (v13 == *(_QWORD*)(v15 + 16))
					{
						do
						{
							v17 = v15;
							v15 = *(_QWORD*)(v15 + 8);
						} while (v17 == *(_QWORD*)(v15 + 16));
					}
				}
			}
			else
			{
				v15 = *(_QWORD*)(v13 + 24);
			}
		LABEL_39:
			if (*(_DWORD*)(v15 + 32) < v11)
			{
				if (v13 == v10 || v11 < *(_DWORD*)(v13 + 32))
				{
					v18 = sub_14018B280(48i64, 0);
					if (v18 != (int*)-32i64)
					{
						*((_QWORD*)v18 + 4) = v52[0];
						*((_QWORD*)v18 + 5) = v9;
					}
					*(_QWORD*)(v13 + 16) = v18;
					v20 = *(_QWORD*)(v1 + 16);
					if (v13 == v20)
					{
						*(_QWORD*)(v20 + 8) = v18;
						*(_QWORD*)(*(_QWORD*)(v1 + 16) + 24i64) = v18;
					}
					else if (v13 == *(_QWORD*)(v20 + 16))
					{
						*(_QWORD*)(v20 + 16) = v18;
					}
				}
				else
				{
					v18 = sub_14018B280(48i64, 0);
					if (v18 != (int*)-32i64)
					{
						*((_QWORD*)v18 + 4) = v52[0];
						*((_QWORD*)v18 + 5) = v9;
					}
					*(_QWORD*)(v13 + 24) = v18;
					v19 = *(_QWORD*)(v1 + 16);
					if (v13 == *(_QWORD*)(v19 + 24))
						*(_QWORD*)(v19 + 24) = v18;
				}
				*((_QWORD*)v18 + 1) = v13;
				*((_QWORD*)v18 + 2) = 0i64;
				*((_QWORD*)v18 + 3) = 0i64;
				sub_1400081C0((__int64)v18, (_QWORD*)(*(_QWORD*)(v1 + 16) + 8i64));
				++* (_QWORD*)(v1 + 24);
			}
			goto LABEL_53;
		}
		sub_140055E80(v1 + 8, &v59, v12, v13, v52);
	LABEL_53:
		v21 = *(_QWORD*)(v1 + 80);
		v22 = v7[1];
		v23 = *(_QWORD*)(v21 + 8);
		v24 = v21;
		while (v23)
		{
			if (*(_DWORD*)(v23 + 32) < v22)
			{
				v23 = *(_QWORD*)(v23 + 24);
			}
			else
			{
				v24 = v23;
				v23 = *(_QWORD*)(v23 + 16);
			}
		}
		if (v24 == v21 || v22 < *(_DWORD*)(v24 + 32))
		{
			v67 = *(_QWORD*)(v1 + 80);
			v25 = &v67;
		}
		else
		{
			v66 = v24;
			v25 = &v66;
		}
		v26 = *v25;
		if (v26 != *(_QWORD*)(v1 + 80) && (v27 = *(_QWORD*)(v26 + 40)) != 0)
		{
		LABEL_90:
			v46 = sub_14018B280(56i64, 0);
			v47 = (unsigned __int64)v46;
			if (v46)
			{
				v48 = v7[2];
				*v46 = *v7;
				v46[4] = v48;
				*((_QWORD*)v46 + 1) = 0i64;
				v49 = sub_14018B280(48i64, 0);
				*(_QWORD*)(v47 + 40) = 0i64;
				*(_QWORD*)(v47 + 32) = v49;
				*(_BYTE*)v49 = 0;
				*(_QWORD*)(*(_QWORD*)(v47 + 32) + 8i64) = 0i64;
				*(_QWORD*)(*(_QWORD*)(v47 + 32) + 16i64) = *(_QWORD*)(v47 + 32);
				*(_QWORD*)(*(_QWORD*)(v47 + 32) + 24i64) = *(_QWORD*)(v47 + 32);
			}
			else
			{
				v47 = 0i64;
			}
			v50 = *(_DWORD*)v47;
			v54[1] = v47;
			LODWORD(v54[0]) = v50;
			sub_140055F80(v1 + 104, (__int64)v62, v54);
			*(_QWORD*)(v27 + 8) += (unsigned int)v7[4];
			v55[0] = *(_QWORD*)(v27 + 8);
			v55[1] = v47;
			sub_1400EEDD0(v27 + 24, (__int64)v64, v55);
			++v4;
			*(_QWORD*)(v1 + 8 * (v7[6] + 5i64 * v7[5]) + 136) = v47;
		}
		else
		{
			if (qword_140C63840)
			{
				v28 = qword_140C63840(off_140A6A018, v22, qword_140C63858);
			}
			else
			{
				if (dword_140C65190 || (int)sub_1401FB340() < 0)
					goto LABEL_95;
				v28 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C651B8 + 24i64))(qword_140C651B8, v22);
			}
			v29 = (int*)v28;
			if (v28)
			{
				v30 = *(_QWORD*)(v1 + 48);
				v31 = *(_DWORD*)(v28 + 4);
				v32 = *(_QWORD*)(v30 + 8);
				v33 = v30;
				while (v32)
				{
					if (*(_DWORD*)(v32 + 32) < v31)
					{
						v32 = *(_QWORD*)(v32 + 24);
					}
					else
					{
						v33 = v32;
						v32 = *(_QWORD*)(v32 + 16);
					}
				}
				if (v33 == v30 || v31 < *(_DWORD*)(v33 + 32))
				{
					v53 = *(_QWORD*)(v1 + 48);
					v34 = &v53;
				}
				else
				{
					v68 = v33;
					v34 = &v68;
				}
				v35 = *v34;
				if (v35 != *(_QWORD*)(a1 + 48))
				{
					v36 = *(int**)(v35 + 40);
					if (v36)
						goto LABEL_86;
				}
				v37 = (int*)sub_1401FB160(v31);
				if (v37)
				{
					v38 = sub_14018B280(56i64, 0);
					v36 = v38;
					if (v38)
					{
						v39 = v37[1];
						*v38 = *v37;
						v38[4] = v39;
						*((_QWORD*)v38 + 1) = 0i64;
						v40 = sub_14018B280(48i64, 0);
						*((_QWORD*)v36 + 5) = 0i64;
						*((_QWORD*)v36 + 4) = v40;
						*(_BYTE*)v40 = 0;
						*(_QWORD*)(*((_QWORD*)v36 + 4) + 8i64) = 0i64;
						*(_QWORD*)(*((_QWORD*)v36 + 4) + 16i64) = *((_QWORD*)v36 + 4);
						*(_QWORD*)(*((_QWORD*)v36 + 4) + 24i64) = *((_QWORD*)v36 + 4);
					}
					else
					{
						v36 = 0i64;
					}
					v41 = *v36;
					v57[1] = v36;
					LODWORD(v57[0]) = v41;
					sub_140055F80(v1 + 40, (__int64)v60, v57);
				LABEL_86:
					v42 = sub_14018B280(56i64, 0);
					v27 = (unsigned __int64)v42;
					if (v42)
					{
						v43 = *v29;
						v42[4] = v29[2];
						*v42 = v43;
						*((_QWORD*)v42 + 1) = 0i64;
						v44 = sub_14018B280(48i64, 0);
						*(_QWORD*)(v27 + 40) = 0i64;
						*(_QWORD*)(v27 + 32) = v44;
						*(_BYTE*)v44 = 0;
						*(_QWORD*)(*(_QWORD*)(v27 + 32) + 8i64) = 0i64;
						*(_QWORD*)(*(_QWORD*)(v27 + 32) + 16i64) = *(_QWORD*)(v27 + 32);
						*(_QWORD*)(*(_QWORD*)(v27 + 32) + 24i64) = *(_QWORD*)(v27 + 32);
					}
					else
					{
						v27 = 0i64;
					}
					v45 = *(_DWORD*)v27;
					v58[1] = v27;
					LODWORD(v58[0]) = v45;
					sub_140055F80(v1 + 72, (__int64)v63, v58);
					*((_QWORD*)v36 + 1) += (unsigned int)v29[3];
					v56[0] = *((_QWORD*)v36 + 1);
					v56[1] = v27;
					sub_1400EEDD0((__int64)(v36 + 6), (__int64)v61, v56);
					v1 = a1;
					goto LABEL_90;
				}
				v1 = a1;
			}
		LABEL_95:
			++v4;
		}
	}
}
// 1404891AF: conditional instruction was optimized away because rcx.8==0
// 140A6A018: using guessed type wchar_t *off_140A6A018[2];
// 140A6A050: using guessed type wchar_t *off_140A6A050[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C645A0: using guessed type __int64 qword_140C645A0;
// 140C648B0: using guessed type int dword_140C648B0;
// 140C65190: using guessed type int dword_140C65190;
// 140C651B8: using guessed type __int64 qword_140C651B8;
// 140C65940: using guessed type __int64 qword_140C65940;
// 140488FA0: using guessed type char var_90[16];
// 140488FA0: using guessed type char var_60[16];
// 140488FA0: using guessed type char var_80[16];
// 140488FA0: using guessed type char var_70[16];
// 140488FA0: using guessed type char var_50[24];

