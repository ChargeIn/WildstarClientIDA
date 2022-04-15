//----- (00000001405C0F00) ----------------------------------------------------
__int64 __fastcall sub_1405C0F00(unsigned __int64 a1, __int64 a2)
{
	int* v4; // rax
	__int64 v5; // r8
	__int64 v6; // rbx
	__int64 v7; // rbx
	int* v8; // rax
	_QWORD* v9; // rax
	__int64 v10; // rcx
	int v11; // ebx
	int v12; // eax
	int v13; // ebx
	int v14; // ebx
	int* v15; // rdx
	__int64 v16; // rax
	__int64 v17; // rcx
	int* v18; // rdi
	__int16* v19; // rax
	_QWORD* v20; // rax
	int* v21; // rdx
	__int64 v22; // rax
	__int64 v23; // rax
	__int64(__fastcall * *v24)(); // [rsp+38h] [rbp-D0h] BYREF
	__int64 v25; // [rsp+40h] [rbp-C8h] BYREF
	_WORD* v26; // [rsp+48h] [rbp-C0h]
	_WORD* v27; // [rsp+50h] [rbp-B8h]
	__int128 v28; // [rsp+F8h] [rbp-10h]
	int* v29; // [rsp+108h] [rbp+0h]
	unsigned __int64 v30; // [rsp+128h] [rbp+20h] BYREF

	v30 = a1;
	if (!*(_QWORD*)(qword_140C65898 + 120))
		return 1i64;
	sub_1400B6F30((__int64)&v24);
	v29 = 0i64;
	v28 = 0i64;
	v24 = off_140B69230;
	v4 = sub_14018B280(16i64, 0);
	v5 = (__int64)v4;
	*(_QWORD*)&v28 = v4;
	*((_QWORD*)&v28 + 1) = v4;
	v29 = v4 + 4;
	if (v4)
	{
		*(_WORD*)v4 = 0;
		v5 = v28;
	}
	v6 = *(_QWORD*)(qword_140C65898 + 27728);
	if (v6)
	{
		if (!sub_14079EE60(*(_QWORD*)(qword_140C65898 + 27728), a2, &v30))
			goto LABEL_43;
		v7 = *(_QWORD*)(*(_QWORD*)(v6 + 88) + 8 * v30);
		if (!v7)
			goto LABEL_43;
		v8 = sub_14018B280(96i64, 0);
		if (v8)
			v9 = (_QWORD*)sub_1404DDB40((__int64)v8, (int*)(v7 + 32));
		else
			v9 = 0i64;
		sub_1400B7480((__int64)&v24, v9);
		v10 = *(unsigned int*)(a2 + 16);
		if ((_DWORD)v10)
		{
			v11 = 0;
			if ((v10 & 1) != 0)
				v11 = 469602;
			if ((v10 & 2) != 0)
			{
				v12 = 469603;
				if (v11)
					v12 = 469605;
				v11 = v12;
			}
			if ((v10 & 4) != 0)
			{
				v13 = v11 - 469602;
				if (v13)
				{
					v14 = v13 - 1;
					if (v14)
					{
						if (v14 == 2)
							v11 = 469607;
						else
							v11 = 469604;
					}
					else
					{
						v11 = 469608;
					}
				}
				else
				{
					v11 = 469606;
				}
				goto LABEL_27;
			}
			if (v11)
			{
			LABEL_27:
				v15 = (int*)sub_14034BDD0(v10, 309128);
				if (v15)
				{
					v16 = 0i64;
					if (*(_WORD*)v15)
					{
						do
							++v16;
						while (*((_WORD*)v15 + v16));
					}
					sub_14001C480((__int64)&v25, v15, (int*)((char*)v15 + 2 * v16));
				}
				else if (v26 != v27)
				{
					*v26 = 0;
					v27 = v26;
				}
				v18 = sub_14018B280(96i64, 0);
				if (v18)
				{
					v19 = sub_14034BDD0(v17, v11);
					v20 = (_QWORD*)sub_1404DDB40((__int64)v18, (int*)v19);
					sub_1400B7480((__int64)&v24, v20);
				}
				else
				{
					sub_1400B7480((__int64)&v24, 0i64);
				}
			LABEL_42:
				v23 = sub_1400B7660(&v24);
				sub_140003890((__int64*)qword_140C658A0, 2u, 0i64, *(int**)(v23 + 8), 0, 0i64);
			LABEL_43:
				v5 = v28;
				goto LABEL_44;
			}
		}
		v21 = (int*)sub_14034BDD0(v10, 309127);
		if (v21)
		{
			v22 = 0i64;
			if (*(_WORD*)v21)
			{
				do
					++v22;
				while (*((_WORD*)v21 + v22));
			}
			sub_14001C480((__int64)&v25, v21, (int*)((char*)v21 + 2 * v22));
		}
		else if (v26 != v27)
		{
			*v26 = 0;
			v27 = v26;
		}
		goto LABEL_42;
	}
LABEL_44:
	if (v5)
		sub_14018B900(v5, 0);
	sub_1400B7390(&v24);
	return 0i64;
}
// 1405C10CE: variable 'v17' is possibly undefined
// 140B69230: using guessed type __int64 (__fastcall *off_140B69230[25])();
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658A0: using guessed type __int64 qword_140C658A0;

