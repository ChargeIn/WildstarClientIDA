//----- (00000001407486E0) ----------------------------------------------------
__int64 __fastcall sub_1407486E0(__int64 a1)
{
	unsigned int v2; // ecx
	unsigned __int64 v3; // rdx
	__int64 v4; // r8
	__int64 v5; // rax
	__int64 v6; // rcx
	unsigned int v7; // eax
	__int64 v8; // rbp
	__int64 v9; // rcx
	unsigned __int64 v10; // rax
	__int64 v11; // rbx
	__int64 v12; // rax
	unsigned __int64 v13; // rdi
	unsigned int v14; // ebx
	__int64 v15; // rax
	__int64 v16; // rbx
	int* v17; // rax
	int* v18; // rdx
	__int64 v19; // rax
	__int64* v20; // rax
	__int64 v21; // r11
	__int64 v22; // r9
	int v23; // r8d
	__int64 v24; // rdx
	__int64(__fastcall * *v26)(); // [rsp+20h] [rbp-108h] BYREF
	int v27; // [rsp+28h] [rbp-100h]
	__int64 v28; // [rsp+30h] [rbp-F8h]
	int v29; // [rsp+38h] [rbp-F0h]
	__int64(__fastcall * *v30)(); // [rsp+40h] [rbp-E8h] BYREF
	char v31[8]; // [rsp+48h] [rbp-E0h] BYREF
	_WORD* v32; // [rsp+50h] [rbp-D8h]
	_WORD* v33; // [rsp+58h] [rbp-D0h]
	__int128 v34; // [rsp+100h] [rbp-28h]
	int* v35; // [rsp+110h] [rbp-18h]

	if (*(_QWORD*)(qword_140C65898 + 120))
	{
		v2 = 0;
		v3 = *(_QWORD*)(qword_140C63650 + 768);
		if (v3)
		{
			v4 = *(_QWORD*)(qword_140C63650 + 760);
			v5 = 0i64;
			while (*(_QWORD*)(*(_QWORD*)(v4 + 8 * v5) + 400i64) != a1)
			{
				v5 = ++v2;
				if (v2 >= v3)
					goto LABEL_7;
			}
			v6 = *(_QWORD*)(v4 + 8i64 * v2);
		}
		else
		{
		LABEL_7:
			v6 = 0i64;
		}
		v7 = sub_1400F26A0(v6 + 384, 1);
		v8 = sub_1403ACD90(qword_140C65B70, v7, *(_QWORD*)(qword_140C65898 + 120));
		if (!v8)
		{
			*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
			*(_QWORD*)(a1 + 16) += 16i64;
			return 1i64;
		}
		v9 = *(_QWORD*)(a1 + 32);
		v26 = off_140B569F0;
		v10 = *(_QWORD*)(v9 + 112);
		v28 = a1;
		v29 = 1;
		if (*(_QWORD*)(v9 + 120) >= v10)
			sub_14005E2C0(a1);
		v11 = *(_QWORD*)(a1 + 16);
		v12 = sub_14005C1B0(a1, 0, 0);
		*(_DWORD*)(v11 + 8) = 5;
		*(_QWORD*)v11 = v12;
		*(_QWORD*)(a1 + 16) += 16i64;
		v27 = sub_1400578C0(a1);
		v13 = 408i64;
		while (1)
		{
			v14 = *(_DWORD*)(v13 + *(_QWORD*)(v8 + 112));
			if (qword_140C63840)
				break;
			if (!dword_140C64BE4 && (int)sub_14023B3E0() >= 0)
			{
				v15 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65570 + 24i64))(qword_140C65570, v14);
			LABEL_19:
				v16 = v15;
				if (v15)
				{
					sub_1400B6F30((__int64)&v30);
					v30 = off_140B69230;
					v35 = 0i64;
					v34 = 0i64;
					v17 = sub_14018B280(16i64, 0);
					*(_QWORD*)&v34 = v17;
					*((_QWORD*)&v34 + 1) = v17;
					v35 = v17 + 4;
					if (v17)
						*(_WORD*)v17 = 0;
					v18 = (int*)sub_14034BDD0((__int64)(v17 + 4), *(_DWORD*)(v16 + 8));
					if (v18)
					{
						v19 = 0i64;
						if (*(_WORD*)v18)
						{
							do
								++v19;
							while (*((_WORD*)v18 + v19));
						}
						sub_14001C480((__int64)v31, v18, (int*)((char*)v18 + 2 * v19));
					}
					else if (v32 != v33)
					{
						*v32 = 0;
						v33 = v32;
					}
					sub_1400B7660(&v30);
					sub_1400FAD30((__int64)&v26);
					if ((_QWORD)v34)
						sub_14018B900(v34, 0);
					sub_1400B7390(&v30);
				}
			}
			v13 += 4i64;
			if (v13 >= 0x1AC)
			{
				v20 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v28 + 32) + 160i64), v27);
				v22 = *(_QWORD*)(v21 + 16);
				v23 = v27;
				v24 = *v20;
				*(_QWORD*)v22 = *v20;
				*(_DWORD*)(v22 + 8) = *((_DWORD*)v20 + 2);
				*(_QWORD*)(v21 + 16) += 16i64;
				sub_1400579E0(v21, v24, v23);
				return 1i64;
			}
		}
		v15 = qword_140C63840(off_140A6D4D0, v14, qword_140C63858);
		goto LABEL_19;
	}
	*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
	*(_QWORD*)(a1 + 16) += 16i64;
	return 1i64;
}
// 140748977: variable 'v21' is possibly undefined
// 140A6D4D0: using guessed type wchar_t *off_140A6D4D0[2];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140B69230: using guessed type __int64 (__fastcall *off_140B69230[25])();
// 140C63650: using guessed type __int64 qword_140C63650;
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64BE4: using guessed type int dword_140C64BE4;
// 140C65570: using guessed type __int64 qword_140C65570;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B70: using guessed type __int64 qword_140C65B70;
// 1407486E0: using guessed type char var_E0[8];

