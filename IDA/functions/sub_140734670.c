//----- (0000000140734670) ----------------------------------------------------
__int64 __fastcall sub_140734670(__int64 a1, int a2, unsigned __int16** a3)
{
	__int64 v3; // rdi
	unsigned __int16** v4; // r14
	int v5; // esi
	__int64 v6; // rcx
	unsigned __int64 v7; // rax
	__int64 v8; // rbx
	__int64 v9; // rax
	int v10; // ebx
	unsigned __int64 v11; // r8
	unsigned int v12; // edx
	__int64 v13; // rcx
	unsigned int v14; // eax
	unsigned int v15; // r12d
	_DWORD* v16; // rax
	__int64 v17; // rcx
	_DWORD* v18; // r13
	__int16* v19; // rax
	__int64 v20; // rdx
	__int64 v21; // r8
	int* v22; // rsi
	__int64 v23; // rdi
	int* v24; // rax
	int* v25; // rbx
	unsigned __int64 v26; // rdi
	unsigned __int16* v27; // rdi
	int v28; // eax
	unsigned __int64 v29; // r15
	unsigned __int64 v30; // r14
	unsigned __int64 v31; // rsi
	unsigned __int64 v32; // r15
	__int64 v33; // rbp
	__int64* v34; // rax
	__int64 v35; // r8
	__int64 v36; // rdx
	int v38; // [rsp+20h] [rbp-68h]
	__int64(__fastcall * *v40)(); // [rsp+30h] [rbp-58h] BYREF
	int v41; // [rsp+38h] [rbp-50h]
	__int64 v42; // [rsp+40h] [rbp-48h]
	int v43; // [rsp+48h] [rbp-40h]
	unsigned int v46; // [rsp+A8h] [rbp+20h]

	v3 = a1;
	v4 = a3;
	v5 = a2;
	if (sub_1405B1510(*(_QWORD**)(qword_140C659F0 + 824)))
	{
		v6 = *(_QWORD*)(v3 + 32);
		v40 = off_140B569F0;
		v7 = *(_QWORD*)(v6 + 112);
		v38 = 1;
		v42 = v3;
		v43 = 1;
		if (*(_QWORD*)(v6 + 120) >= v7)
			sub_14005E2C0(v3);
		v8 = *(_QWORD*)(v3 + 16);
		v9 = sub_14005C1B0(v3, 0, 0);
		*(_DWORD*)(v8 + 8) = 5;
		*(_QWORD*)v8 = v9;
		*(_QWORD*)(v3 + 16) += 16i64;
		v10 = sub_1400578C0(v3);
		v11 = *(_QWORD*)(qword_140C63650 + 768);
		v41 = v10;
		v12 = 0;
		if (v11)
		{
			v13 = 0i64;
			do
			{
				if (*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(qword_140C63650 + 760) + 8 * v13) + 400i64) == v3)
					break;
				v13 = ++v12;
			} while (v12 < v11);
		}
		if (qword_140C63838)
		{
			v14 = qword_140C63838(off_140A6AA60, qword_140C63858);
		}
		else if (dword_140C63A64)
		{
			v14 = 0;
		}
		else if ((int)sub_140207B00() >= 0)
		{
			v14 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C63E68 + 40i64))(qword_140C63E68);
		}
		else
		{
			v14 = 0;
		}
		v46 = v14;
		v15 = 0;
		if (v14)
		{
			while (1)
			{
				if (qword_140C63848)
				{
					v16 = (_DWORD*)qword_140C63848(off_140A6AA60, v15, qword_140C63858);
				}
				else
				{
					if (dword_140C63A64 || (int)sub_140207B00() < 0)
						goto LABEL_48;
					v16 = (_DWORD*)(*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63E68 + 32i64))(
						qword_140C63E68,
						v15);
				}
				v18 = v16;
				if (v16 && (v5 & v16[6]) != 0 && *v16 != 5)
				{
					v19 = sub_14034BDD0(v17, v16[1]);
					v22 = (int*)v19;
					if (v19)
					{
						v23 = 0i64;
						if (*v19)
						{
							do
								++v23;
							while (v19[v23]);
						}
						v24 = sub_14018B280(2 * v23 + 18, 0);
						if (v24)
						{
							*(_QWORD*)v24 = off_140B55060;
							*((_QWORD*)v24 + 1) = v23;
						}
						else
						{
							v24 = 0i64;
						}
						v25 = v24 + 4;
						v26 = 2 * v23;
						sub_1407DB590(v24 + 4, v22, v26);
						*(_WORD*)((char*)v25 + v26) = 0;
					}
					else
					{
						v25 = 0i64;
					}
					v27 = *v4;
					if (*v4 == word_1409F91AC)
						goto LABEL_43;
					if (!v27 || (v20 = *v27, v21 = 0i64, *v27))
					{
					LABEL_37:
						v29 = *((_QWORD*)v25 - 1);
						v30 = *((_QWORD*)v27 - 1);
						if (v29 >= v30)
						{
							v31 = 0i64;
							v32 = v29 - v30;
							v33 = (__int64)v25;
							while ((unsigned int)sub_14018E3E0(v33, v27, v30) || v27[v30])
							{
								++v31;
								v33 += 2i64;
								if (v31 > v32)
									goto LABEL_45;
							}
							goto LABEL_43;
						}
					}
					else
					{
						while ((_WORD)v20)
						{
							v20 = v27[v21 + 1];
							v28 = word_1409F91AC[++v21];
							if ((_DWORD)v20 != v28)
								goto LABEL_37;
						}
					LABEL_43:
						if ((unsigned int)sub_1406AD9F0(a1, v38, v18, (__int64)&v40))
							++v38;
					}
				LABEL_45:
					if (v25)
						(*(void(__fastcall**)(int*, __int64, __int64))(*((_QWORD*)v25 - 2) + 8i64))(v25 - 4, v20, v21);
					v5 = a2;
					v4 = a3;
				}
			LABEL_48:
				if (++v15 >= v46)
				{
					v3 = v42;
					v10 = v41;
					break;
				}
			}
		}
		v34 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v3 + 32) + 160i64), v10);
		v35 = *(_QWORD*)(v3 + 16);
		v36 = *v34;
		*(_QWORD*)v35 = *v34;
		*(_DWORD*)(v35 + 8) = *((_DWORD*)v34 + 2);
		*(_QWORD*)(v3 + 16) += 16i64;
		sub_1400579E0(v3, v36, v10);
		if (*v4)
			(*(void(__fastcall**)(unsigned __int16*))(*((_QWORD*)*v4 - 2) + 8i64))(*v4 - 8);
		return 1i64;
	}
	else
	{
		if (*v4)
			(*(void(__fastcall**)(unsigned __int16*))(*((_QWORD*)*v4 - 2) + 8i64))(*v4 - 8);
		return 0i64;
	}
}
// 14073483C: variable 'v17' is possibly undefined
// 14073493A: variable 'v20' is possibly undefined
// 14073493A: variable 'v21' is possibly undefined
// 1409F91AC: using guessed type unsigned __int16 word_1409F91AC[8];
// 140A6AA60: using guessed type wchar_t *off_140A6AA60[2];
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C63650: using guessed type __int64 qword_140C63650;
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63A64: using guessed type int dword_140C63A64;
// 140C63E68: using guessed type __int64 qword_140C63E68;
// 140C659F0: using guessed type __int64 qword_140C659F0;

