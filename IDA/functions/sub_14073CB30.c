//----- (000000014073CB30) ----------------------------------------------------
__int64 __fastcall sub_14073CB30(_QWORD* a1)
{
	_DWORD* v1; // rax
	__int64 v3; // r14
	unsigned int v5; // ebx
	int* v6; // rax
	__int64 v7; // rax
	__int64 v8; // rcx
	__int64 v9; // rdi
	int v10; // edx
	int* v11; // rdx
	__int64 v12; // rax
	__int64 v13; // rcx
	__int64 v14; // rdi
	int* v15; // rax
	_QWORD* v16; // rax
	__int64 v17; // rdi
	int* v18; // rax
	__int64* v19; // rax
	int* v20; // rax
	__int64 v21; // rax
	unsigned __int64* v22; // rdx
	unsigned __int64 v23; // r8
	__int64(__fastcall * *v24)(); // [rsp+20h] [rbp-E0h] BYREF
	char v25[8]; // [rsp+28h] [rbp-D8h] BYREF
	_WORD* v26; // [rsp+30h] [rbp-D0h]
	_WORD* v27; // [rsp+38h] [rbp-C8h]
	__int128 v28; // [rsp+E0h] [rbp-20h]
	int* v29; // [rsp+F0h] [rbp-10h]
	__int64 v30; // [rsp+100h] [rbp+0h] BYREF
	__int64 v31; // [rsp+108h] [rbp+8h]

	v1 = (_DWORD*)a1[3];
	if ((unsigned __int64)v1 < a1[2] && v1 != dword_140A12138 && !v1[2])
		return 0i64;
	v3 = sub_140056AB0(a1, 1u);
	if (!v3)
		return 0i64;
	sub_1400B6F30((__int64)&v24);
	v5 = 0;
	v29 = 0i64;
	v28 = 0i64;
	v24 = off_140B69230;
	v6 = sub_14018B280(16i64, 0);
	*(_QWORD*)&v28 = v6;
	*((_QWORD*)&v28 + 1) = v6;
	v29 = v6 + 4;
	if (v6)
		*(_WORD*)v6 = 0;
	v7 = sub_140240700(*(_DWORD*)v3);
	v9 = v7;
	if (v7)
	{
		v10 = *(_DWORD*)(v7 + 8);
		if (v10)
		{
			v11 = (int*)sub_14034BDD0(v8, v10);
			if (v11)
			{
				v12 = 0i64;
				if (*(_WORD*)v11)
				{
					do
						++v12;
					while (*((_WORD*)v11 + v12));
				}
			LABEL_44:
				sub_14001C480((__int64)v25, v11, (int*)((char*)v11 + 2 * v12));
				goto LABEL_45;
			}
		}
		else if (*(_DWORD*)v3 == 7)
		{
			v11 = (int*)sub_14034BDD0(v8, 476307);
			if (v11)
			{
				v12 = 0i64;
				if (*(_WORD*)v11)
				{
					do
						++v12;
					while (*((_WORD*)v11 + v12));
				}
				goto LABEL_44;
			}
		}
		else if (*(_DWORD*)v3 == 9)
		{
			v11 = (int*)sub_14034BDD0(v8, 476308);
			if (v11)
			{
				v12 = 0i64;
				if (*(_WORD*)v11)
				{
					do
						++v12;
					while (*((_WORD*)v11 + v12));
				}
				goto LABEL_44;
			}
		}
		else if (*(_DWORD*)(v7 + 4) == 1)
		{
			v11 = (int*)sub_14034BDD0((unsigned int)(*(_DWORD*)(v7 + 4) - 1), 476301);
			if (v11)
			{
				v12 = 0i64;
				if (*(_WORD*)v11)
				{
					do
						++v12;
					while (*((_WORD*)v11 + v12));
				}
				goto LABEL_44;
			}
		}
		else if (*(_DWORD*)(v7 + 4) == 2)
		{
			v11 = (int*)sub_14034BDD0((unsigned int)(*(_DWORD*)(v7 + 4) - 2), 476305);
			if (v11)
			{
				v12 = 0i64;
				if (*(_WORD*)v11)
				{
					do
						++v12;
					while (*((_WORD*)v11 + v12));
				}
				goto LABEL_44;
			}
		}
		else
		{
			v13 = (unsigned int)(*(_DWORD*)(v7 + 4) - 3);
			if (*(_DWORD*)(v7 + 4) == 3)
			{
				v11 = (int*)sub_14034BDD0(v13, 476302);
				if (v11)
				{
					v12 = 0i64;
					if (*(_WORD*)v11)
					{
						do
							++v12;
						while (*((_WORD*)v11 + v12));
					}
					goto LABEL_44;
				}
			}
			else
			{
				v11 = (int*)sub_14034BDD0(v13, 476306);
				if (v11)
				{
					v12 = 0i64;
					if (*(_WORD*)v11)
					{
						do
							++v12;
						while (*((_WORD*)v11 + v12));
					}
					goto LABEL_44;
				}
			}
		}
		if (v26 != v27)
		{
			*v26 = 0;
			v27 = v26;
		}
	LABEL_45:
		if (*(_DWORD*)v3 == 7)
		{
			v20 = sub_14018B280(88i64, 0);
			if (v20)
			{
				v16 = (_QWORD*)sub_1404DDA70((__int64)v20, *(_DWORD*)(v3 + 4));
				goto LABEL_58;
			}
		}
		else
		{
			switch (*(_DWORD*)(v9 + 4))
			{
			case 1:
				v19 = (__int64*)sub_14018B280(88i64, 0);
				if (v19)
				{
					v16 = sub_1404DD130(v19, *(_DWORD*)(v3 + 4));
					goto LABEL_58;
				}
				break;
			case 2:
				v17 = sub_140491C60(qword_140C65968, *(_DWORD*)(v3 + 4));
				v18 = sub_14018B280(96i64, 0);
				if (v18)
				{
					v16 = (_QWORD*)sub_1404DDAF0((__int64)v18, *(_DWORD*)(*(_QWORD*)v17 + 24i64));
					goto LABEL_58;
				}
				break;
			case 3:
				v14 = sub_14048D310(qword_140C65948, *(_DWORD*)(v3 + 4));
				v15 = sub_14018B280(96i64, 0);
				if (v15)
				{
					v16 = (_QWORD*)sub_1404DDAF0((__int64)v15, *(_DWORD*)(v14 + 68));
				LABEL_58:
					sub_1400B7480((__int64)&v24, v16);
					goto LABEL_59;
				}
				break;
			default:
			LABEL_59:
				v21 = sub_1400B7660(&v24);
				v22 = (unsigned __int64*)sub_14018F0E0(&v30, *(unsigned __int16**)(v21 + 8))[1];
				if (v22)
				{
					v23 = -1i64;
					do
						++v23;
					while (*((_BYTE*)v22 + v23));
					sub_140058710((__int64)a1, v22, v23);
				}
				else
				{
					*(_DWORD*)(a1[2] + 8i64) = 0;
					a1[2] += 16i64;
				}
				if (v31)
					sub_14018B900(v31, 0);
				v5 = 1;
				goto LABEL_67;
			}
		}
		v16 = 0i64;
		goto LABEL_58;
	}
LABEL_67:
	if ((_QWORD)v28)
		sub_14018B900(v28, 0);
	sub_1400B7390(&v24);
	return v5;
}
// 14073CBFA: variable 'v8' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B69230: using guessed type __int64 (__fastcall *off_140B69230[25])();
// 140C65948: using guessed type __int64 qword_140C65948;
// 140C65968: using guessed type __int64 qword_140C65968;
// 14073CB30: using guessed type char var_F8[8];

