//----- (00000001404050C0) ----------------------------------------------------
__int64 sub_1404050C0()
{
	_QWORD* v0; // r14
	__int64* v1; // r12
	_QWORD* v2; // rcx
	__int64 v3; // rax
	unsigned __int64 v4; // rbp
	bool v5; // zf
	__int64 v6; // rcx
	__int64 v7; // rcx
	unsigned int v8; // esi
	unsigned int v9; // eax
	__int64 v10; // rax
	__int64 v11; // r15
	__int16* v12; // rax
	int* v13; // rsi
	__int64 v14; // rbx
	int* v15; // rax
	__int64 v16; // rdi
	unsigned __int64 v17; // rbx
	int* v18; // rax
	int* v19; // r12
	__int64 v20; // rbx
	int* v21; // rax
	__int64 v22; // rdi
	unsigned __int64 v23; // rbx
	__int64 v24; // rdi
	unsigned __int64* v25; // r14
	__int64 v26; // r13
	unsigned __int64 v27; // rcx
	int* v28; // rdi
	__int64 v29; // rax
	int* v30; // rsi
	__int64 v31; // rbx
	unsigned __int64 v32; // rbx
	int* v33; // rax
	unsigned __int64 v34; // rbx
	__int16* v35; // rax
	__int64 v36; // rcx
	__int16* v37; // rax
	__int64 v38; // rcx
	__int16* v39; // rax
	__int64 v40; // rcx
	__int16* v41; // rax
	__int64 v42; // rcx
	__int16* v43; // rax
	__int64 v44; // rcx
	__int16* v45; // rax
	__int64 v46; // rcx
	__int16* v47; // rax
	__int64 v48; // rcx
	__int16* v49; // rax
	__int64 v50; // rcx
	__int16* v51; // rax
	__int64 v52; // rcx
	__int16* v53; // rax
	__int64* v55; // [rsp+20h] [rbp-78h]
	__int64 v56; // [rsp+28h] [rbp-70h] BYREF
	unsigned __int16* v57; // [rsp+30h] [rbp-68h]
	int* v58; // [rsp+38h] [rbp-60h]
	int* v59; // [rsp+40h] [rbp-58h]
	unsigned int v60; // [rsp+A0h] [rbp+8h]
	unsigned int v61; // [rsp+A8h] [rbp+10h]
	__int64 v62; // [rsp+B0h] [rbp+18h] BYREF
	_QWORD* v63; // [rsp+B8h] [rbp+20h]

	v0 = (_QWORD*)qword_140C658A0;
	v63 = (_QWORD*)qword_140C658A0;
	sub_140019490((_QWORD*)(qword_140C658A0 + 16));
	v1 = v0 + 7;
	v55 = v0 + 7;
	sub_140019C40(v0 + 7);
	v2 = (_QWORD*)v0[26];
	v3 = qword_140C65C30;
	v4 = 0i64;
	v5 = qword_140C65C30 == (_QWORD)v2;
	v2[2] = 0i64;
	v2[3] = 0i64;
	v2[4] = 0i64;
	v2[5] = 0i64;
	v6 = v0[26];
	if (v5)
		v3 = 0i64;
	qword_140C65C30 = v3;
	sub_140645850(v6);
	v8 = 0;
	v60 = 0;
	if (qword_140C63838)
	{
		v9 = qword_140C63838(off_140A6A210, qword_140C63858);
	}
	else
	{
		if (dword_140C64648 || (int)sub_1401FD980() < 0)
			goto LABEL_60;
		v9 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C64040 + 40i64))(qword_140C64040);
	}
	v61 = v9;
	if (v9)
	{
		while (!qword_140C63848)
		{
			if (dword_140C64648)
			{
				v11 = 0i64;
			}
			else
			{
				if ((int)sub_1401FD980() >= 0)
				{
					v10 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64040 + 32i64))(qword_140C64040, v8);
					goto LABEL_16;
				}
				v11 = 0i64;
			}
		LABEL_17:
			v12 = sub_14034BDD0(v7, *(_DWORD*)(v11 + 64));
			v13 = (int*)v12;
			if (v12)
			{
				v14 = 0i64;
				if (*v12)
				{
					do
						++v14;
					while (v12[v14]);
				}
				v15 = sub_14018B280(2 * v14 + 18, 0);
				if (v15)
				{
					*(_QWORD*)v15 = off_140B55060;
					*((_QWORD*)v15 + 1) = v14;
				}
				else
				{
					v15 = 0i64;
				}
				v16 = (__int64)(v15 + 4);
				v17 = 2 * v14;
				sub_1407DB590(v15 + 4, v13, v17);
				*(_WORD*)(v17 + v16) = 0;
				v62 = v16;
				sub_140019B70(v1, &v62);
				if (v62)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)(v62 - 16) + 8i64))(v62 - 16);
				sub_1400EC4B0(*(_QWORD*)(qword_140C65898 + 29504), v13, (__int64)sub_140405E90, v11);
				v18 = sub_14018B280(16i64, 0);
				v57 = (unsigned __int16*)v18;
				v58 = v18;
				v59 = v18 + 4;
				if (v18)
					*(_WORD*)v18 = 0;
				sub_1400A7B60(&v56, v13);
				v19 = (int*)v57;
				if ((unsigned int)sub_14018E2C0((__int64)v13, v57))
				{
					if (v19)
					{
						v20 = 0i64;
						if (*(_WORD*)v19)
						{
							do
								++v20;
							while (*((_WORD*)v19 + v20));
						}
						v21 = sub_14018B280(2 * v20 + 18, 0);
						if (v21)
						{
							*(_QWORD*)v21 = off_140B55060;
							*((_QWORD*)v21 + 1) = v20;
						}
						else
						{
							v21 = 0i64;
						}
						v22 = (__int64)(v21 + 4);
						v23 = 2 * v20;
						sub_1407DB590(v21 + 4, v19, v23);
						*(_WORD*)(v23 + v22) = 0;
						v62 = v22;
					}
					else
					{
						v62 = 0i64;
					}
					v24 = sub_140019B70(v0 + 9, &v62);
					if (v62)
						(*(void(__fastcall**)(__int64))(*(_QWORD*)(v62 - 16) + 8i64))(v62 - 16);
					sub_1400EC4B0(*(_QWORD*)(qword_140C65898 + 29504), *(int**)(v0[9] + 8 * v24), (__int64)sub_140405E90, v11);
				}
				v25 = (unsigned __int64*)(v11 + 96);
				v26 = 2i64;
				do
				{
					v27 = *v25;
					if (*v25)
					{
						if (v27 <= qword_140C3FE70)
							v28 = (int*)(v27 + qword_140C3FE68);
						else
							v28 = 0i64;
					}
					else
					{
						v28 = 0i64;
					}
					v29 = 0i64;
					v30 = 0i64;
					if (*(_WORD*)v28)
					{
						do
							++v29;
						while (*((_WORD*)v28 + v29));
					}
					v31 = (2 * v29) >> 1;
					if ((unsigned __int64)(v31 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
						v30 = sub_14018B280(2 * (v31 + 1), 0);
					v32 = 2 * v31;
					sub_1407DB590(v30, v28, v32);
					v33 = (int*)((char*)v30 + v32);
					if ((int*)((char*)v30 + v32))
						*(_WORD*)v33 = 0;
					if (v30 != v33)
						sub_1400EC4B0(*(_QWORD*)(qword_140C65898 + 29504), v30, (__int64)sub_140405E90, v11);
					if (v30)
						sub_14018B900((__int64)v30, 0);
					++v25;
					--v26;
				} while (v26);
				if (v57)
					sub_14018B900((__int64)v57, 0);
				v1 = v55;
				v0 = v63;
			}
			v8 = v60 + 1;
			v60 = v8;
			if (v8 >= v61)
				goto LABEL_60;
		}
		v10 = qword_140C63848(off_140A6A210, v8, qword_140C63858);
	LABEL_16:
		v11 = v10;
		goto LABEL_17;
	}
LABEL_60:
	v34 = v0[1];
	if (v34)
	{
		do
			sub_140407E40((__int64)v0, *(_QWORD*)(*v0 + 8 * v4++));
		while (v4 < v34);
	}
	v35 = sub_14034BDD0(v7, 215879);
	sub_1400EC4B0(*(_QWORD*)(qword_140C65898 + 29504), (int*)v35, (__int64)sub_140406040, 0i64);
	v37 = sub_14034BDD0(v36, 215884);
	sub_1400EC4B0(*(_QWORD*)(qword_140C65898 + 29504), (int*)v37, (__int64)sub_140406390, 0i64);
	v39 = sub_14034BDD0(v38, 215885);
	sub_1400EC4B0(*(_QWORD*)(qword_140C65898 + 29504), (int*)v39, (__int64)sub_1404065F0, 0i64);
	v41 = sub_14034BDD0(v40, 215895);
	sub_1400EC4B0(*(_QWORD*)(qword_140C65898 + 29504), (int*)v41, (__int64)sub_140406850, 0i64);
	v43 = sub_14034BDD0(v42, 215916);
	sub_1400EC4B0(*(_QWORD*)(qword_140C65898 + 29504), (int*)v43, (__int64)sub_140406CA0, 0i64);
	v45 = sub_14034BDD0(v44, 215915);
	sub_1400EC4B0(*(_QWORD*)(qword_140C65898 + 29504), (int*)v45, (__int64)sub_140406AD0, 0i64);
	v47 = sub_14034BDD0(v46, 215924);
	sub_1400EC4B0(*(_QWORD*)(qword_140C65898 + 29504), (int*)v47, (__int64)sub_140407090, 0i64);
	v49 = sub_14034BDD0(v48, 215929);
	sub_1400EC4B0(*(_QWORD*)(qword_140C65898 + 29504), (int*)v49, (__int64)sub_140406E70, 0i64);
	v51 = sub_14034BDD0(v50, 218116);
	sub_1400EC4B0(*(_QWORD*)(qword_140C65898 + 29504), (int*)v51, (__int64)sub_1404072B0, 0i64);
	v53 = sub_14034BDD0(v52, 331390);
	sub_1400EC4B0(*(_QWORD*)(qword_140C65898 + 29504), (int*)v53, (__int64)sub_140409B60, 0i64);
	return 0i64;
}
// 140405201: variable 'v7' is possibly undefined
// 140405536: variable 'v36' is possibly undefined
// 140405560: variable 'v38' is possibly undefined
// 14040558A: variable 'v40' is possibly undefined
// 1404055B4: variable 'v42' is possibly undefined
// 1404055DE: variable 'v44' is possibly undefined
// 140405608: variable 'v46' is possibly undefined
// 140405632: variable 'v48' is possibly undefined
// 14040565C: variable 'v50' is possibly undefined
// 140405686: variable 'v52' is possibly undefined
// 140A6A210: using guessed type wchar_t *off_140A6A210[2];
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();
// 140C3FE68: using guessed type __int64 qword_140C3FE68;
// 140C3FE70: using guessed type __int64 qword_140C3FE70;
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64040: using guessed type __int64 qword_140C64040;
// 140C64648: using guessed type int dword_140C64648;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658A0: using guessed type __int64 qword_140C658A0;
// 140C65C30: using guessed type __int64 qword_140C65C30;

